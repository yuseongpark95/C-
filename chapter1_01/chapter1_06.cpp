#include <iostream>

using namespace std;

void main() {
	/*
	int kor, eng, tot, mok;
	double avg;

	cout << "���� ������ �Է��ϼ���: ";
	cin >> kor;
	cout << "���� ������ �Է��ϼ���: ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok) {

	case 10:
		cout << "A+ ����Դϴ�";
		break;
	case 9:
		cout << "A ����Դϴ�";
		break;
	case 8:
		cout << "B ����Դϴ�";
		break;
	case 7:
		cout << "C ����Դϴ�";
		break;
	case 6:
		cout << "D ����Դϴ�";
		break;
	default:
		cout << "�� �ڻ���";
	}
	*/

	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ���: ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%) " << endl;
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
		cout << "�ٽ� �Է����ּ���";
	}
}