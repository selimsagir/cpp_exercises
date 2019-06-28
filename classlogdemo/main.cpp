#include <QCoreApplication>
#include <iostream>

#define myprint(x)     std::cout << x << std::endl


class Log
{
public:
    enum Level
    {
     LevelError = 0 , LevelWarning , LevelInfo
    };
    /*
    const int LogLevelError = 0;
    const int LogLevelWarn = 1;
    const int LogLevelInfo = 2;
    */
private:
    Level m_LogLevel = LevelInfo;
 public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {   if(m_LogLevel >= LevelError)
        std::cout<<"[ERROR]" << message << std::endl;
    }
    void Warn(const char* message)
    {
        if(m_LogLevel >= LevelWarning)
        std::cout <<"[Warning]" << message << std::endl;
    }
    void Info(const char* message)
    {   if(m_LogLevel >= LevelInfo)
        std::cout <<"[INFO]" << message << std::endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//These are for enum demo
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");


// These are for class demo
//    Log log;
//    log.SetLevel(log.LogLevelWarn);
//    log.Warn("Hello!");
    return a.exec();
}
