#include <iostream>
#include <string>

using namespace std;

class People
{
private: 
	string Name;
	int Age;
	string Job;

public:
	People(string name, int age)
	{
		Name = name;
		Age = age;
		Job="대학생";
	}
	People(string name, int age, string job)
	{
		Name = name;
		Age = age;
		Job = job;
	}

	People& operator=(const People& p)
	{
		Name = p.Name;
		Age = p.Age;
		Job = "알바하는대학생";
		return *this;
	}

	friend ostream& operator<<(ostream& os, const People& p);

};


ostream& operator<<(ostream& os, const People& p)
{

	os << p.Name << " " << p.Age << " " << p.Job;
	return os;
}

int main()
{
	People a{ "송현진",23};
	People b{ "김준혁",32,"알바생" };

	cout << a << endl;
	cout << b << endl;

	b = a;
	cout << b << endl;
}