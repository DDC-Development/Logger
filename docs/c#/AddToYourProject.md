# Adding Logger to your project

## Downloading the file

Adding Logger to your project is very simple. Start by downloading the file, you can do this by going to [c#/src/Logger.cs](../../c%23/src/Logger.cs) and clicking the _Download Raw File_ button in the top right. Save it to wherever you want it in your project. 

## Adding to your compiler

This is also very simple. Modify your compilation command to include /path/to/Logger.cs.
Here's an example command:
```bash
mcs -out:dist/LoggerTester.exe src/Main.cs
```
And here's the modified version:
```bash
mcs -out:dist/LoggerTester.exe src/Main.cs src/Logger.cs
```
Notice how I included the path to the Logger file as well. Your path will be wherever you saved the file to.