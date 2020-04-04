#include <iostream>
using namespace std;

class Model
{
private:
	char* data; //문자를 채워넣을것
	int size;


public:
	Model()
	{
		cout << "기본생성자가 호출되었습니다." << endl;
		data = NULL; // nullptr
		size = 0;
	}

	Model(int n) // n만큼 char형 배열을 동적할당 하고 소문자 a로 채우시오
	{
		cout << "int 생성자가 호출되었습니다." << endl;
		data = new char[n];
		for (int i = 0; i < n; ++i)
		{
			data[i] = 'a';
		}
		size = n;
	}

	Model(const Model& m)                           //복사생성자 깊은복사 //const = 바꿀수없다.
	{
		cout << "복사생성자 호출" << endl;
		size = m.size;
		data = new char[m.size];
		memcpy(data, m.data, sizeof(char) * m.size);
	}


	~Model() // 소멸자 호출
	{
		cout << "데이터삭제: " << size << endl;
		delete[] data;
	}

	Model& operator=(const Model& m)
	{
		cout << "복사할당자 호출" << endl;
		size = m.size;
		data = new char[m.size];
		memcpy(data, m.data, sizeof(char) * m.size);
		return *this;
	}

	void print()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << data[i];
		}
		cout << endl;
	}
};

int main()
{
	Model a; //기본생성
	Model b{ 5 };   //Model b = 1000;
	Model c(b);

	a = c;
}



//연산자 오버로딩 
// cout << , + , - , <, i++, ++i