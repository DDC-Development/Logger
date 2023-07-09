# Getting started with Logger
_NOTE: Ensure you followed the correct installation steps in [here](AddToYourProject.md), or this tutorial might not work correctly for you._

## Instantiate the Logger class
Before you do any logging, you'll need access to the functions. Do this by instantiating a Logger object, like so:

```cpp
int main()
{
    Logger logger; // You don't need to provide any constructor arguments
}
```
## Set the LogLevel
In Logger, everything you log has a level. You have five to choose from: `Note`, `Info`, `Warning`, `Error`, and `Fatal`. In the code, these are reffered to as `objname.name`, where `objname` is the name of the object you created in the last step, and `name` is the level you want, e.g. `logger.Warning`.

It is reccommended to always set your Logger level, but the default is `Note` so it may not always be necessary. You can set the LogLevel with the function `SetLevel(LogLevel level)`. That works like this:

```csharp
int main()
{
    Logger logger = new Logger();
    logger.SetLevel(logger.Warning); // Here, I'm setting a warning – you can set whichever you need
}
```