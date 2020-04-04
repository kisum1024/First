#include <iostream>
#include <string>

using namespace std;



int main()
{
	string s = "i am C++ master";



	/*auto a = "한글";
	cout << typeid(a).name() << endl;*/ // auto 키워드


	/*vector<int> v { 1,2,3,4,5,6,7,8,9 };

	for (auto i = v.begin(); i != v.end(); ++i)
	{
	cout << *i;
	}*/

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i];
	}

	cout << endl;
	for (auto i = s.begin(); i != s.end(); ++i) //반복문의 구조 공부
	{
		cout << *i;
	}
	cout << endl;
	for (char d : s)
	{
		cout << d;
	}

	// 내일 숙제 범위 기반 for문
	// auto 키워드
	// 복사생성자(깊은복사,얕은복사)
	// string 클래스 공부


}