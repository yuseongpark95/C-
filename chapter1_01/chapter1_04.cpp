#include <iostream>

using namespace std;

void main() {
	/*
	int a, b;
	cout << "첫번째 숫자를 입력하세요: ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요: ";
	cin >> b;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "이(가) 더 크다" << endl : cout << b << "가 더 크다" << endl;
	*/

	/*
	int i, j, k, MAX, MIN;
	cout << "숫자 3개를 입력하세요: ";
	cin >> i >> j >> k;
	MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	cout << "MAX = " << MAX << endl;
	cout << "MIN = " << MIN << endl;
	*/

	int an, n1, n2, n3 ,n4, n5, n6;
	cout << "다섯자리 수를 입력 하세요: ";
	cin >> n;
	cout << n << " 는" << endl;
	n1 = n / 10000;// 9
	n = n - n1 * 10000; //8860
	n2 = n / 5000;
	n = n - n2 * 5000;

	cout << "만원짜리: " << n1 << "개" << endl;
	cout << "오천원짜리: " << n1 << "개" << endl;
	cout << "천원짜리: " << n1 << "개" << endl;
	cout << "오백원짜리: " << n1 << "개" << endl;
	cout << "백원짜리: " << n1 << "개" << endl;
	cout << "십원짜리: " << n1 << "개" << endl;


}