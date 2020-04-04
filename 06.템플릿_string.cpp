#include <iostream>
#include <string>

using namespace std;

template <class T, int n>
class Array
{
private:
	T* data;

public:
	Array()
	{
		data = new T[n];
	}

	T& operator[](int i)
	{
		return data[i];
	}

};

int main() {
	Array<string, 10> a; // string 10 개를 담을 수 있는 자료구조 a

	for (int i = 0; i < 10; ++i) 
		a[i] = "string"s + to_string(i); // a 에 쓰기

	for (int i = 0; i < 10; ++i)
		cout << a[i] << endl; // a 에서 읽기
}