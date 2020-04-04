#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <fstream>

using namespace std;

enum Nation{KOREA, JAPAN, CHINA, USA};
string NameOfNation[4]{ "대한민국", "일본","중국","미국" };

default_random_engine dre{ 207180018 };

uniform_int_distribution<> uiName('a', 'z');
uniform_int_distribution<> uiNation(KOREA, USA);
uniform_int_distribution<> uiNameLength(5, 15);

normal_distribution<> ndScore{ 100'000.0,20'0000.0 };


class Player {

	string name;
	Nation nation;
	int score;

public:
	Player() {
		for (int i = 0; i < uiNameLength(dre); ++i)
			name += uiName(dre);
		nation = Nation(uiNation(dre));
	}

	void show() const {
		cout << "플레이어: " << setw(15) << left
			<< name+","  << setw(8) << NameOfNation[nation] << ", 점수: " << score << endl;
	}

	void setScore(int num) {
		score = num;
	}

	void setName(string s) {
		name = s;
	}

	string getName() const {
		return name;
	}

	int getScore() const {
		return score;
	}

	Nation getNation() const {
		return nation;
	}
	void setNation(int na) {
		nation = Nation(na);
	}

};


int main()
{
	Player *data = new Player[3'0000];
	//for (int i = 0; i < 30000; ++i)
	//	data[i].show();

	ofstream out("Player 30000개.txt");

	for (int i = 0; i < 3'0000; ++i)
	{
		out << data[i].getName() << " " << data[i].getScore() << " " << data[i].getNation() << endl;
	}

	Player *data2 = new Player[30000];
	ifstream in("Player 30000개.txt");

	for (int i = 0; i < 3'0000; ++i)
	{
		string a;
		int b;
		int c;
		in >> a;
		in >> b;
		in >> c;

		data2[i].setScore(b);
		data2[i].setName(a);
		data2[i].setNation(c);

	}

	for (int i = 0; i < 30000; ++i)
		data[i].show();


	//준비: Player 객체를 생성하고 정보가 제대로 출력되는 지 확인하자.
	//Player d;
	//d.show();

	//화면에 표시되는 내용 예 - 플레이어: sdfsf, 일본, 점수:0

}