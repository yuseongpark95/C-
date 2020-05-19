#include <stdio.h> // c의 표준 입출력
#include <iostream> // c++의 표준 입출력
#include <string> // 문자열
#include <sstream> // 클래스형 객체를 만듬
#include <iomanip>
#include <conio.h>

using namespace std;
char str;

/*
void main()
{
	// using namespace std; 미사용시 접두어 첨부
	// std::cout << "Hello c++" << std::endl;
	// using namespace std; 사용시
	cout << "Hello c++" << endl;

	char name[] = "yuseong park";
	int kor, eng, mat, tot;
	double avg;
	kor = 90;
	eng = 85;
	mat = 70;
	tot = kor + eng + mat;
	avg = tot / 3.0;

	// c 출력
	printf("********************* c언어 출력 함수 *********************\n");
	printf("  name	      kor eng mat tot avg\n");
	printf("%8s %4d %4d %4d %4d %6.lf\n", name, kor, eng, mat, tot, avg);

	// c++ 출력
	cout << endl << "********************* c++언어 출력 함수 *********************" << endl;
	cout << "  name	      kor eng mat tot avg\n" << endl;
	cout << setw(10) << name << setw(4) << kor << setw(4) << eng << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;
}
*/

/*
void main() {
	int number;
	cout << "숫자 입력받기: ";
	cin >> number;
	cout << "출력: " << number << endl;

	char dan[15];
	cout << "문자 입력받기: ";
	cin >> dan;
	cout << "출력: " << dan << endl;
	cout << "멈추려면 0을 누르세요";
	_getch(); // conio.h 헤더파일
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
	cout << setiosflags(ios::left); // 왼쪽 정렬
	cout << setw(10) << "753-9510" << "|" << endl;
	cout << 3.14 << endl;
	cout << setprecision(6);
	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;
	cout << resetiosflags(ios::left); // 왼쪽 정렬 해제
	cout << setw(10) << "World" << "|" << endl;
	cout << setiosflags(ios::left) << setw(10) << "World" << "|" << endl;
}
*/

/*
void main() {
	char Name[15];
	char address[20];
	cout << "이름을 입력하세요: ";
	cin.get(Name, 15);
	cin.ignore(); // 주석처리시 오류(enter를 무시하여 연속 입력이 가능하도록)
	cout << "주소를 입력하세요: ";
	cin.get(address, 20);
	cout << "\n이름: " << Name << endl;
	cout << "주소: " << address << endl;
}
*/

/*
void main() {
	char Name[15];
	char address[20];
	cout << "이름을 입력하세요: ";
	cin.getline(Name, 15);
	cout << "주소를 입력하세요: ";
	cin.getline(address, 20);
	cout << "\n이름: " << Name << endl;
	cout << "주소: " << address << endl;
}
*/

/*
and: &&
or: ||
전위연산: ++a / --a
후위연산: a++ / a--
중위연산: 2+3
7+3 / 2*1
전위: +73 / *21 --> /+73*21
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
	printf("두 값을 입력하세요: ");
	//scanf_s("a의 값을 입력하세요: %d", a);
	//scanf_s("b의 값을 입력하세요: %d", b);
	scanf_s("a, b의 값을 입력하세요: %d %d", &a, &b);
	c = a > b;
	printf("c 결과: %d\n", c);
	printf("a>b 결과: %d\n", a > b);
	a++;
	printf("a와 b가 같다: %d\n", a == b);
	printf("a와 b가 같지 않다: %d\n", a != b);
	*/

	/*
	int a = 3, b = 2, c;
	c = a == ++b;
	printf("결과: %d\n", (a == b) && (--b == c));
	printf("결과: %d\n", (a != b) || (b == c));
	printf("결과: %d\n", !((a != b) || (b == c)));
	*/
}

