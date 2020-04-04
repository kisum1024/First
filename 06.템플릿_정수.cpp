#include <iostream> 

using namespace std;

template<class T>
class Array
{
private: 
	T* data;

public:
	Array(T t) {
		data = new T[10];
	}

	int& operator[] (int n)
	{
		return data[n];
	}
};

int main() {
	Array<int> a(10); // 정수 10 개를 담을 메모리 확보

	for (int i = 0; i < 10; ++i) 
		a[i] = i; // a 에 쓰기

	for (int i = 0; i < 10; ++i) 
		cout << a[i] << ' '; // a 에서 읽기 cout << endl;
}
