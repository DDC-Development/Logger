using System;

namespace Logger
{
    class Testing
    {
        static void Main(string[] args)
        {
            Logger lc = new Logger();
            lc.SetLevel(Logger.LogLevel.Note);
            lc.LogToConsole("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Info);
            lc.LogToConsole("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Warning);
            lc.LogToConsole("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Error);
            lc.LogToConsole("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Fatal);
            lc.LogToConsole("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Note);
            lc.LogToFile("testcsharp.out", "This is some data that I am logging to the file.");
            lc.SetLevel(Logger.LogLevel.Info);
            lc.LogToFile("testcsharp.out", "This is some data that I am logging to the file.");
            lc.SetLevel(Logger.LogLevel.Warning);
            lc.LogToFile("testcsharp.out", "This is some data that I am logging to the file.");
            lc.SetLevel(Logger.LogLevel.Error);
            lc.LogToFile("testcsharp.out", "This is some data that I am logging to the file.");
            lc.SetLevel(Logger.LogLevel.Fatal);
            lc.LogToFile("testcsharp.out", "This is some data that I am logging to the file.");
            lc.SetLevel(Logger.LogLevel.Note);
            lc.LogToFileAndConsole("testcsharp.out", "This is some data that I am logging to the file and console.");
            lc.SetLevel(Logger.LogLevel.Info);
            lc.LogToFileAndConsole("testcsharp.out", "This is some data that I am logging to the file and console.");
            lc.SetLevel(Logger.LogLevel.Warning);
            lc.LogToFileAndConsole("testcsharp.out", "This is some data that I am logging to the file and console.");
            lc.SetLevel(Logger.LogLevel.Error);
            lc.LogToFileAndConsole("testcsharp.out", "This is some data that I am logging to the file and console.");
            lc.SetLevel(Logger.LogLevel.Fatal);
            lc.LogToFileAndConsole("testcsharp.out", "This is some data that I am logging to the file and console.");
            
        }
    }
}