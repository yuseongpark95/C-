#include <iostream>

using namespace std;

void main() {
	/*
	int a, b;
	cout << "ù��° ���ڸ� �Է��ϼ���: ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��ϼ���: ";
	cin >> b;
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "Large Number = ";
	a > b ? cout << a << "��(��) �� ũ��" << endl : cout << b << "�� �� ũ��" << endl;
	*/

	/*
	int i, j, k, MAX, MIN;
	cout << "���� 3���� �Է��ϼ���: ";
	cin >> i >> j >> k;
	MAX = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
	MIN = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
	cout << "MAX = " << MAX << endl;
	cout << "MIN = " << MIN << endl;
	*/

	int an, n1, n2, n3 ,n4, n5, n6;
	cout << "�ټ��ڸ� ���� �Է� �ϼ���: ";
	cin >> n;
	cout << n << " ��" << endl;
	n1 = n / 10000;// 9
	n = n - n1 * 10000; //8860
	n2 = n / 5000;
	n = n - n2 * 5000;

	cout << "����¥��: " << n1 << "��" << endl;
	cout << "��õ��¥��: " << n1 << "��" << endl;
	cout << "õ��¥��: " << n1 << "��" << endl;
	cout << "�����¥��: " << n1 << "��" << endl;
	cout << "���¥��: " << n1 << "��" << endl;
	cout << "�ʿ�¥��: " << n1 << "��" << endl;


}