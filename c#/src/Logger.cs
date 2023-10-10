using System;
using System.IO;

[System.Serializable]
public class FileDoesNotExistException : System.Exception
{
    public FileDoesNotExistException() { }
    public FileDoesNotExistException(string message) : base(message) { }
    public FileDoesNotExistException(string message, System.Exception inner) : base(message, inner) { }
    protected FileDoesNotExistException(
        System.Runtime.Serialization.SerializationInfo info,
        System.Runtime.Serialization.StreamingContext context) : base(info, context) { }
}

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

        public bool AddTimeStampToLog = false;

        public enum LogLevel
        {
            Note, Info, Warning, Error, Fatal
        };

        private LogLevel loggerLevel = LogLevel.Note;

        public void SetLevel(LogLevel level)
        {
            loggerLevel = level;
        }

        public void LogToConsole(string data)
        {
            switch (loggerLevel)
            {
                case LogLevel.Note:
                    if (!AddTimeStampToLog) {Console.WriteLine(COLOR_GREEN + "[NOTE]: " + data + COLOR_RESET);} else {Console.WriteLine(COLOR_GREEN + "[NOTE]: " + data + "@" + DateTime.Now.ToString("h:mm:ss tt"));}
                    break;
                case LogLevel.Info:
                    if (!AddTimeStampToLog) {Console.WriteLine(COLOR_BLUE + "[INFO]: " + data + COLOR_RESET);} else {Console.WriteLine(COLOR_BLUE + "[INFO]: " + data + "@" + DateTime.Now.ToString("h:mm:ss tt"));}
                    break;
                case LogLevel.Warning:
                    if (!AddTimeStampToLog) {Console.WriteLine(COLOR_YELLOW + "[WARNING]: " + data + COLOR_RESET);} else {Console.WriteLine(COLOR_YELLOW + "[WARNING]: " + data + "@" + DateTime.Now.ToString("h:mm:ss tt"));}
                    break;
                case LogLevel.Error:
                    if (!AddTimeStampToLog) {Console.WriteLine(COLOR_MAGENTA + "[ERROR]: " + data + COLOR_RESET);} else {Console.WriteLine(COLOR_MAGENTA + "[ERROR]: " + data + "@" + DateTime.Now.ToString("h:mm:ss tt"));}
                    break;
                case LogLevel.Fatal:
                    if (!AddTimeStampToLog) {Console.WriteLine(COLOR_RED + "[FATAL]: " + data + COLOR_RESET);} else {Console.WriteLine(COLOR_RED + "[FATAL]: " + data + "@" + DateTime.Now.ToString("h:mm:ss tt"));}
                    break;
                default: break;
            }
        }
        public void LogToFile(string path, string data)
        {
            if (!File.Exists(path))
            {
                File.Create(path);
            }
            if (!File.Exists(path))
            {
                throw new FileDoesNotExistException();
            }
            switch (loggerLevel)
            {
                case LogLevel.Note:
                    File.AppendAllText(path, "[NOTE]: " + data + "\n");
                    break;
                case LogLevel.Info:
                    File.AppendAllText(path, "[INFO]: " + data + "\n");
                    break;
                case LogLevel.Warning:
                    File.AppendAllText(path, "[WARNING]: " + data + "\n");
                    break;
                case LogLevel.Error:
                    File.AppendAllText(path, "[ERROR]: " + data + "\n");
                    break;
                case LogLevel.Fatal:
                    File.AppendAllText(path, "[FATAL]: " + data + "\n");
                    break;
                default: break;
            }
        }
        public void LogToFileAndConsole(string path, string data)
        {
            LogToConsole(data);
            LogToFile(path, data);
        }
    };   
}