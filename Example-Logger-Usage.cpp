// Example usage of the logger library
// (C) DDC Dev, 2022

#include <iostream>
#include "Logger.h"

// Main

int main()
{
    // To start, initialize the Logger class, here we create a "logger" object
    // Для начала инициализируем класс Logger, здесь мы создаем объект "logger"
    Logger logger;


    // Next, we need to set the Logger level. Trying to call a function that is not the same as 
    // the level you set will produce a "Type Discrepancy Error" - see below.
    // Далее нам нужно установить уровень логгера. При попытке вызвать функцию, которая не соответствует 
    // установленному вами уровню, приведет к ошибке "Type Discrepancy Error" - см. ниже.
    logger.SetLevel(Logger::LevelWarning); // Here, we are setting the level, "WARNING"
    // Now, we can call a warning
    // Теперь мы можем вызвать предупреждение
    logger.Warning("This is an example warning");


    // Let's try a similar thing for an error. Start by setting the logger level to error.
    //  Попробуем сделать то же самое для ошибки. Начнем с того, что установим уровень на ошибку.
    logger.SetLevel(Logger::LevelError);
    // Now we can start an error
    // Теперь мы можем запустить ошибку
    logger.Error("This is an example error");


    // Finally, let's try an information notice. Set the logger level to "info"
    // Наконец, давайте попробуем сделать информационное уведомление. Установите уровень "info"
    logger.SetLevel(Logger::LevelInfo);
    // Now we can print some info
    // Теперь мы можем вывести информацию на экран
    logger.Info("This is an example information note");


    // Now, we'll demonstrate what happens if there is a type discrepancy.
    // If we set the logger level to "warning"...
    // Сейчас мы продемонстрируем, что происходит при несоответствии типов.
    // Если мы установим уровень предупреждения...
    logger.SetLevel(Logger::LevelWarning);
    // ... and try and show an information notice...
    // ... и попытаться показать информационное уведомление...
    logger.Info("This shows an incorrect type definition");
    // ...you'll see this error.
    //  [WARNING]: Error message was attempted to be displayed, but failed due to incorrect error type definition.
    // ...вы увидите эту ошибку.
    // [WARNING]: Была предпринята попытка отобразить сообщение об ошибке, но она не удалась из-за неправильного определения типа ошибки.


    // Last but not least, this line shows that after the text is shown the text returns to the original colour
    // И последнее, но не менее важное: эта строка показывает, что после отображения текста он возвращается к исходному цвету
    std::cout << "This text proves that after the note, the text returns to original colour" << std::endl;
}