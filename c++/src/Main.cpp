#include "Logger.hpp"

int main()
{
    Logger logger;
    logger.SetLevel(logger.Note);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Info);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Warning);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Error);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Fatal);
    logger.LogToConsole("This is some data I am logging to the console");
    system("touch testcpp.out");
    logger.AttachFile("testcpp.out");
    logger.SetLevel(logger.Note);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Info);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Warning);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Error);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Fatal);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Note);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Info);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Warning);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Error);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Fatal);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.ClearFile();

    std::cout << "Now using timestamps, let's do it all again!" << std::endl;
    logger.AddTimeStampToLog = true;
    logger.SetLevel(logger.Note);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Info);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Warning);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Error);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.SetLevel(logger.Fatal);
    logger.LogToConsole("This is some data I am logging to the console");
    logger.AttachFile("testcpp.out");
    logger.SetLevel(logger.Note);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Info);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Warning);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Error);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Fatal);
    logger.LogToFile("This is some data I am logging to the file");
    logger.SetLevel(logger.Note);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Info);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Warning);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Error);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.SetLevel(logger.Fatal);
    logger.LogToFileAndConsole("This is some data I am logging to the file and console");
    logger.ClearFile();

    return 0;
}