#include <iostream>
#include <fstream>
#include <ctime>
#include <chrono>

class Logger
{

public:
    
    enum LogLevel
    {
        Note, Info, Warning, Error, Fatal
    };
    
    bool AddTimeStampToLog = false;

private:
    const std::string COLOR_RED     = "\x1b[31m";
    const std::string COLOR_GREEN   = "\x1b[32m";
    const std::string COLOR_YELLOW  = "\x1b[33m";
    const std::string COLOR_BLUE    = "\x1b[34m";
    const std::string COLOR_MAGENTA = "\x1b[35m";
    const std::string COLOR_RESET   = "\x1b[0m";

    LogLevel loggerLevel = Note;

    bool FileIsSelected = false;
    std::fstream File;

public:

    void SetLevel(LogLevel level)
    {
        loggerLevel = level;
    }

    void LogToConsole(std::string data)
    {
        std::cout << BuildLog(data, loggerLevel, AddTimeStampToLog, true);
    }

public: // Files functions
    void AttachFile(std::string path)
    {
        try
        {
            File.open(path);
        }
        catch (...)
        {
            return;
        }
        FileIsSelected = true;
    }
    void ClearFile()
    {
        File.close();
        FileIsSelected = false;
    }
    void LogToFile(std::string data)
    {
        if (!FileIsSelected){return;}
        File << BuildLog(data, loggerLevel, AddTimeStampToLog, false);
    }
    void LogToFileAndConsole(std::string data)
    {
        LogToConsole(data);
        LogToFile(data);
    }


private:
    time_t CurrentTime;
    std::string BuildLog(std::string data, LogLevel level, bool UseTimeStamp, bool UseColours)
    {
        if (UseTimeStamp)
        {
            if (UseColours)
            {
                switch (level)
                {
                    case Note:
                        CurrentTime = time(NULL); return COLOR_GREEN   + "[NOTE]: "    + data + " @ "  + ctime(&CurrentTime) + COLOR_RESET + "\n";
                        break;
                    case Info:
                        CurrentTime = time(NULL); return COLOR_BLUE    + "[INFO]: "    + data + " @ " + ctime(&CurrentTime) + COLOR_RESET + "\n";
                        break;
                    case Warning:
                        CurrentTime = time(NULL); return COLOR_YELLOW  + "[WARNING]: " + data + " @ " + ctime(&CurrentTime) + COLOR_RESET + "\n";
                        break;
                    case Error:
                        CurrentTime = time(NULL); return COLOR_MAGENTA + "[ERROR]: "   + data + " @ " + ctime(&CurrentTime) + COLOR_RESET + "\n";
                        break;
                    case Fatal:
                        CurrentTime = time(NULL); return COLOR_RED     + "[FATAL]: "   + data + " @ " + ctime(&CurrentTime) + COLOR_RESET + "\n";
                        break;
                    default: break;
                }
            }
            else
            {
                switch (level)
                {
                    case Note:
                        CurrentTime = time(NULL); return "[NOTE]: "    + data + " @ "  + ctime(&CurrentTime) + "\n";
                        break;
                    case Info:
                        CurrentTime = time(NULL); return "[INFO]: "    + data + " @ " + ctime(&CurrentTime) + "\n";
                        break;
                    case Warning:
                        CurrentTime = time(NULL); return "[WARNING]: " + data + " @ " + ctime(&CurrentTime) + "\n";
                        break;
                    case Error:
                        CurrentTime = time(NULL); return "[ERROR]: "   + data + " @ " + ctime(&CurrentTime) + "\n";
                        break;
                    case Fatal:
                        CurrentTime = time(NULL); return "[FATAL]: "   + data + " @ " + ctime(&CurrentTime) + "\n";
                        break;
                    default: break;
                }
            }
        }
        else
        {
            if (UseColours)
            {
                switch (level)
                {
                    case Note:
                        return COLOR_GREEN   + "[NOTE]: "    + data + COLOR_RESET + "\n";
                        break;
                    case Info:
                        return COLOR_BLUE    + "[INFO]: "    + data + COLOR_RESET + "\n";
                        break;
                    case Warning:
                        return COLOR_YELLOW  + "[WARNING]: " + data + COLOR_RESET + "\n";
                        break;
                    case Error:
                        return COLOR_MAGENTA + "[ERROR]: "   + data + COLOR_RESET + "\n";
                        break;
                    case Fatal:
                        return COLOR_RED     + "[FATAL]: "   + data + COLOR_RESET + "\n";
                        break;
                    default: break;
                }
            }
            else
            {
                switch (level)
                {
                    case Note:
                        return "[NOTE]: "    + data + "\n";
                        break;
                    case Info:
                        return "[INFO]: "    + data + "\n";
                        break;
                    case Warning:
                        return "[WARNING]: " + data + "\n";
                        break;
                    case Error:
                        return "[ERROR]: "   + data + "\n";
                        break;
                    case Fatal:
                        return "[FATAL]: "   + data + "\n";
                        break;
                    default: break;
                }
            }
        }
        return "";
    }

};