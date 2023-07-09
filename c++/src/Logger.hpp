#include <iostream>

class Logger
{
private:
    const std::string COLOR_RED     = "\x1b[31m";
    const std::string COLOR_GREEN   = "\x1b[32m";
    const std::string COLOR_YELLOW  = "\x1b[33m";
    const std::string COLOR_BLUE    = "\x1b[34m";
    const std::string COLOR_MAGENTA = "\x1b[35m";
    const std::string COLOR_RESET   = "\x1b[0m";

public:
    
    enum LogLevel
    {
        Note, Info, Warning, Error, Fatal
    };

private:

    LogLevel loggerLevel = Note;

public:

    void SetLevel(LogLevel level)
    {
        loggerLevel = level;
    }

    void Log(std::string data)
    {
        switch (loggerLevel)
        {
            case Note:
                std::cout << COLOR_GREEN << "[NOTE]: " << data << COLOR_RESET << std::endl;;
                break;
            case Info:
                std::cout << COLOR_BLUE <<"[INFO]: " << data << COLOR_RESET << std::endl;;
                break;
            case Warning:
                std::cout << COLOR_YELLOW << "[WARNING]: " << data << COLOR_RESET << std::endl;;
                break;
            case Error:
                std::cout << COLOR_MAGENTA << "[ERROR]: " << data << COLOR_RESET << std::endl;;
                break;
            case Fatal:
                std::cout << COLOR_RED << "[FATAL]: " << data << COLOR_RESET << std::endl;;
                break;
            default: break;
        }
    }
};