#include <stdio.h> // c�� ǥ�� �����
#include <iostream> // c++�� ǥ�� �����
#include <string> // ���ڿ�
#include <sstream> // Ŭ������ ��ü�� ����
#include <iomanip>
#include <conio.h>

using namespace std;
char str;

/*
void main()
{
	// using namespace std; �̻��� ���ξ� ÷��
	// std::cout << "Hello c++" << std::endl;
	// using namespace std; ����
	cout << "Hello c++" << endl;

	char name[] = "yuseong park";
	int kor, eng, mat, tot;
	double avg;
	kor = 90;
	eng = 85;
	mat = 70;
	tot = kor + eng + mat;
	avg = tot / 3.0;

	// c ���
	printf("********************* c��� ��� �Լ� *********************\n");
	printf("  name	      kor eng mat tot avg\n");
	printf("%8s %4d %4d %4d %4d %6.lf\n", name, kor, eng, mat, tot, avg);

	// c++ ���
	cout << endl << "********************* c++��� ��� �Լ� *********************" << endl;
	cout << "  name	      kor eng mat tot avg\n" << endl;
	cout << setw(10) << name << setw(4) << kor << setw(4) << eng << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;
}
*/

/*
void main() {
	int number;
	cout << "���� �Է¹ޱ�: ";
	cin >> number;
	cout << "���: " << number << endl;

	char dan[15];
	cout << "���� �Է¹ޱ�: ";
	cin >> dan;
	cout << "���: " << dan << endl;
	cout << "���߷��� 0�� ��������";
	_getch(); // conio.h �������
	cout << endl;
}
*/

/*
int main() {
	int n;
	stringstream ss;
	ss.str("12 345 6789 0 -12");

	for(int i=0; i<5; i++) {
		ss >> n;
		cout << n << endl;
	}
	return 0;
}
*/

/*
void main() {
	cout << setw(10) << "753-9510" << "|" << endl;
	cout << setiosflags(ios::left); // ���� ����
	cout << setw(10) << "753-9510" << "|" << endl;
	cout << 3.14 << endl;
	cout << setprecision(6);
	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
	cout << resetiosflags(ios::left); // ���� ���� ����
	cout << setw(10) << "World" << "|" << endl;
	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
}
*/

/*
void main() {
	char Name[15];
	char address[20];
	cout << "�̸��� �Է��ϼ���: ";
	cin.get(Name, 15);
	cin.ignore(); // �ּ�ó���� ����(enter�� �����Ͽ� ���� �Է��� �����ϵ���)
	cout << "�ּҸ� �Է��ϼ���: ";
	cin.get(address, 20);
	cout << "\n�̸�: " << Name << endl;
	cout << "�ּ�: " << address << endl;
}
*/

/*
void main() {
	char Name[15];
	char address[20];
	cout << "�̸��� �Է��ϼ���: ";
	cin.getline(Name, 15);
	cout << "�ּҸ� �Է��ϼ���: ";
	cin.getline(address, 20);
	cout << "\n�̸�: " << Name << endl;
	cout << "�ּ�: " << address << endl;
}
*/

/*
and: &&
or: ||
��������: ++a / --a
��������: a++ / a--
��������: 2+3
7+3 / 2*1
����: +73 / *21 --> /+73*21
*/

/*
void main() {
	int a = 10, b = 5, c, d, e;
	printf("a=%d b=%d\n", a++, b); // 10, 5
	printf("a=%d b=%d\n", a++, --b); // 11, 4
	printf("a=%d b=%d\n", ++a, b); // 13, 4
	c = a;
	printf("c = %d\n", c);
	d = a % b;
	printf("d = %d\n", d);
}
*/

/*
void main() {
	int a, b, c, h, s;
	a = b = h = 5;
	c = ++a + b--;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	s = ++h + ++h;
	cout << "h = " << h << endl;
	cout << "s = " << s << endl;
}
*/

void main() {
	/*
	int h, s;
	h = 3;
	s = h > 2;
	cout << s << endl;
	s = h < 2;
	cout << s << endl;
	s = 2 == 3;
	cout << s << endl;
	*/

	/*
	int h, s;
	h = 2!= 4 && 5 < 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;
	*/

	/*
	int a, b, c;
	printf("�� ���� �Է��ϼ���: ");
	//scanf_s("a�� ���� �Է��ϼ���: %d", a);
	//scanf_s("b�� ���� �Է��ϼ���: %d", b);
	scanf_s("a, b�� ���� �Է��ϼ���: %d %d", &a, &b);
	c = a > b;
	printf("c ���: %d\n", c);
	printf("a>b ���: %d\n", a > b);
	a++;
	printf("a�� b�� ����: %d\n", a == b);
	printf("a�� b�� ���� �ʴ�: %d\n", a != b);
	*/

	/*
	int a = 3, b = 2, c;
	c = a == ++b;
	printf("���: %d\n", (a == b) && (--b == c));
	printf("���: %d\n", (a != b) || (b == c));
	printf("���: %d\n", !((a != b) || (b == c)));
	*/
}

