#include <iostream>

using namespace std;


int id = 0;

// ()연산자를 오버로딩한 클래스

template<class T>
class Deleter
{
public:
	void operator() (T* p)
	{
		delete[] p;
	}
};


class Dog
{
private:
	int dogId;

public:
	Dog() :dogId(++id)
	{
		cout << "생성자 -> " << dogId << endl;
	}

	~Dog()
	{
		cout << "소멸자 -> " << dogId << endl;
	}
};

int main()
{
	// 관찰이 쉽게 코드를 지역으로 나눴다
	{
		// 객체 한 개 - 이렇게 unique_ptr 를 생성하는 것이 더 좋다 
		auto dog = make_unique<Dog>();
	}

	shared_ptr<Dog> dogs{ new Dog[3],Deleter<Dog>() };
	shared_ptr<Dog> dogss{ new Dog[3],[](Dog*& p)
	{
		delete[] p;
	} };
}