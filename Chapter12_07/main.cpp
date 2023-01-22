#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	Animal(string name)
		: m_name(name)
	{}

	string GetName()
	{
		return m_name;
	}

	virtual void Speak() const = 0;	// pure virtual function

	/*virtual void Speak() const
	{
		cout << m_name << " ???" << endl;
	}*/

protected:
	string m_name;
};

/*void Animal::Speak() const	// the body of the pure virtual function
{
	cout << m_name << " ???" << endl;
}*/

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	virtual void Speak() const
	{
		cout << m_name << " Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	virtual void Speak() const
	{
		cout << m_name << " Woof" << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	virtual void Speak() const
	{
		cout << m_name << " Moo" << endl;
	}
};

class IErrorLog
{
public:
	virtual ~IErrorLog() {}
	virtual bool ReportError(const char* error_message) = 0;
};

class FileErrorLog : public IErrorLog
{
public:
	bool ReportError(const char* error_message) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool ReportError(const char* error_message) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void DoSometing(IErrorLog& log)
{
	log.ReportError("Runtime error!");
}

int main()
{
	Cow cow("Cow");
	cow.Speak();

	FileErrorLog file_log;
	ConsoleErrorLog console_log;
	DoSometing(file_log);
	DoSometing(console_log);

	return 0;
}