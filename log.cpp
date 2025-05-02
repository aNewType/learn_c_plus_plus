#include <iostream>

class Log
{
public:
	enum Level : const int
	{
		Level_Error = 0, Level_Warning, Level_Info
	};
private:
	Level m_LogLevel = Level_Info;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if(m_LogLevel >= Level_Error)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warning(const char* message)
	{
		if (m_LogLevel >= Level_Warning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= Level_Info)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::Level_Error);
	log.Error("Hello");
	log.Warning("Hello");
	log.Info("Hello");
	std::cin.get();
	return 0;
}
