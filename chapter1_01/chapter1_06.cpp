#include <iostream>

using namespace std;

void main() {
	/*
	int kor, eng, tot, mok;
	double avg;

	cout << "국어 점수를 입력하세요: ";
	cin >> kor;
	cout << "영어 점수를 입력하세요: ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok) {

	case 10:
		cout << "A+ 등급입니다";
		break;
	case 9:
		cout << "A 등급입니다";
		break;
	case 8:
		cout << "B 등급입니다";
		break;
	case 7:
		cout << "C 등급입니다";
		break;
	case 6:
		cout << "D 등급입니다";
		break;
	default:
		cout << "응 자살해";
	}
	*/

	int a, b;
	char op;
	cout << "두 수를 입력하세요: ";
	cin >> a >> b;
	cout << "연산자를 입력하세요(+,-,*,/,%) " << endl;
	cin >> op;

	switch (op) {
	case '+':
		cout << "a + b = " << a + b;
		break;
	case '-':
		cout << "a - b = " << a - b;
		break;
	case '*':
		cout << "a * b = " << a * b;
		break;
	case '/':
		cout << "a / b = " << a / b;
		break;
	case '%':
		cout << "a % b = " << a % b;
		break;
	default:
		cout << "다시 입력해주세요";
	}
}