using System;

namespace Logger
{
    class Testing
    {
        static void Main(string[] args)
        {
            Logger lc = new Logger();
            lc.SetLevel(Logger.LogLevel.Note);
            lc.Log("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Info);
            lc.Log("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Warning);
            lc.Log("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Error);
            lc.Log("This is some data that I am logging to the console.");
            lc.SetLevel(Logger.LogLevel.Fatal);
            lc.Log("This is some data that I am logging to the console.");
        }
    }
}