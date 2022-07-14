// Logger.h
// Thanks to Yan Cherkinov (https://www.youtube.com/user/TheChernoProject)
// This updated version (C) DDC Dev, 2021

#include <iostream>

class Logger
{
public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };
private:
    Level m_LogLevel = LevelInfo;
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    void Error(const char* message)
    {
        if (m_LogLevel == LevelError)
        {
            std::cout << "\x1B[31m[ERROR]: " << message << "\x1B[37m" << std::endl;
        }
        else 
        {
            std::cout << "\x1B[93m[WARNING]: " << "Error message was attempted to be displayed, but failed due to incorrect type definition." << "\x1B[37m" << std::endl;
            std::cout << "\x1B[93m[WARNING]: " << "Была предпринята попытка отобразить сообщение об ошибке, но она не удалась из-за неправильного определения типа ошибки." << "\x1B[37m" << std::endl;
        }
    }
    void Warning(const char* message)
    {
        if (m_LogLevel == LevelWarning)
        {
            std::cout << "\x1B[93m[WARNING]: " << message << "\x1B[37m" << std::endl;
        }
        else 
        {
            std::cout << "\x1B[93m[WARNING]: " << "Error message was attempted to be displayed, but failed due to incorrect type definition." << "\x1B[37m" << std::endl;
            std::cout << "\x1B[93m[WARNING]: " << "Была предпринята попытка отобразить сообщение об ошибке, но она не удалась из-за неправильного определения типа ошибки." << "\x1B[37m" << std::endl;
        }
    }
    void Info(const char* message)
    {
        if (m_LogLevel == LevelInfo)
        {
            std::cout << "\x1B[34m[INFO]: " << message << "\x1B[37m" << std::endl;
        }
        else 
        {
            std::cout << "\x1B[93m[WARNING]: " << "Error message was attempted to be displayed, but failed due to incorrect error type definition." << "\x1B[37m" << std::endl;
            std::cout << "\x1B[93m[WARNING]: " << "Была предпринята попытка отобразить сообщение об ошибке, но она не удалась из-за неправильного определения типа ошибки." << "\x1B[37m" << std::endl;

        }
    }
};