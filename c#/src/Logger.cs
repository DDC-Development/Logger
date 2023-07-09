using System;

namespace Logger
{
    class Logger
    {
        private const string COLOR_RED     = "\x1b[31m";
        private const string COLOR_GREEN   = "\x1b[32m";
        private const string COLOR_YELLOW  = "\x1b[33m";
        private const string COLOR_BLUE    = "\x1b[34m";
        private const string COLOR_MAGENTA = "\x1b[35m";
        private const string COLOR_RESET   = "\x1b[0m";

        public enum LogLevel
        {
            Note, Info, Warning, Error, Fatal
        };

        private LogLevel loggerLevel = LogLevel.Note;

        public void SetLevel(LogLevel level)
        {
            loggerLevel = level;
        }

        public void Log(string data)
        {
            switch (loggerLevel)
            {
                case LogLevel.Note:
                    Console.WriteLine(COLOR_GREEN + "[NOTE]: " + data + COLOR_RESET);
                    break;
                case LogLevel.Info:
                    Console.WriteLine(COLOR_BLUE + "[INFO]: " + data + COLOR_RESET);
                    break;
                case LogLevel.Warning:
                    Console.WriteLine(COLOR_YELLOW + "[WARNING]: " + data + COLOR_RESET);
                    break;
                case LogLevel.Error:
                    Console.WriteLine(COLOR_MAGENTA + "[ERROR]: " + data + COLOR_RESET);
                    break;
                case LogLevel.Fatal:
                    Console.WriteLine(COLOR_RED + "[FATAL]: " + data + COLOR_RESET);
                    break;
                default: break;
            }
        }
    };   
}