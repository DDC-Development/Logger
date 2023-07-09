# Note: this is setup for development on Linux

all: CompileCSharp CompileCPlusPlus RunAll

CompileCSharp:
	mcs -out:c#/dist/LoggerTester.exe c#/src/Main.cs c#/src/Logger.cs

CompileCPlusPlus:
	g++ -pedantic -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Woverloaded-virtual -Wredundant-decls -Wshadow -Wstrict-null-sentinel -Wstrict-overflow=5 -Wundef -Werror c++/src/Main.cpp -o c++/dist/Testing.out

RunAll:
	mono c#/dist/LoggerTester.exe
	./c++/dist/Testing.out