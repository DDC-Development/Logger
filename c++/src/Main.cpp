#include "Logger.hpp"

int main()
{
    Logger logger;
    logger.SetLevel(logger.Note);
    logger.Log("This is some data I am logging to the console");
    logger.SetLevel(logger.Info);
    logger.Log("This is some data I am logging to the console");
    logger.SetLevel(logger.Warning);
    logger.Log("This is some data I am logging to the console");
    logger.SetLevel(logger.Error);
    logger.Log("This is some data I am logging to the console");
    logger.SetLevel(logger.Fatal);
    logger.Log("This is some data I am logging to the console");
    return 0;
}