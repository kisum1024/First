#include <iostream>
using namespace std;

class Model
{
private:
	char* data;
	size_t size;
	//기본값
	int n;

public:
	Model() {  }
	Model(int n)
	{
		size = n;
		data = new char[size];

		//github 계정만들기
		//반복문, 배열, 포인터 공부
		//동적할당 받은 배열을 무작위 소문자로 채워넣으시오
		//출력하세요
		//그림도 그려보기


		//4번. 생성자
		//5번. 복사생성자 (얕은복사,깊은복사)
		//6번. 생성자,소멸자


	}

	Model(int n, double d)
	{

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
	Model a;
	Model b{ 1000 };


	b.print();

	cout << "잘돌아감" << endl;


}