# Learning simple logging
_NOTE: this tutorial assumes you've already gone through the [Getting Started](GetStarted.md) section. If you haven't, this tutorial might not work for you._
## Logging to the console
This is super basic, and super simple. First of all, set your LogLevel like you were taught in the last tutorial:
```csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Note); // This is just an example, you can pick any one of the five
        }
    }
}
```
Next, log your message to the console using the `Log(string)` function. As you can see, your data should be in the `string` type. Overloads with other types haven't been added yet.
```csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Note);
            logger.Log("This is some data I'm logging to the console"); // Replace with whatever data you need
        }
    }
}
```
And when running your project, you'll find this in the console: `[NOTE]: This is some data I'm logging to the console`. Yours will vary in colour and type depending on the LogLevel you picked in the `SetLevel()` function.

## Examples
### Note
``` csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Note);
            logger.Log("This is some data I'm logging to the console.");
        }
    }
}
```

### Info
``` csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Info);
            logger.Log("This is some data I'm logging to the console.");
        }
    }
}
```

### Warning
``` csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Warning);
            logger.Log("This is some data I'm logging to the console.");
        }
    }
}
```

### Error
``` csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Error);
            logger.Log("This is some data I'm logging to the console.");
        }
    }
}
```

### Fatal
``` csharp
namespace ExampleProject
{
    class ExampleProject
    {
        static void Main(string[] args)
        {
            Logger logger = new Logger();
            logger.SetLevel(Logger.LogLevel.Fatal);
            logger.Log("This is some data I'm logging to the console.");
        }
    }
}
```
