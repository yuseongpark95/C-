// chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream> // C++ 기본 입출력
#include <stdio.h> /* c 기본 입출력*/


/*void main()
{
	char M, N;
	M = 'B';
	N = 'e';
	printf("%c\n", M);
	printf("%c", N);
}*/

void main()
{
	/*
	char H, S;
	H = 65;
	S = 97;
	printf("%c\n", H);
	printf("%c\n", S);
	H = 'z';
	S = 'Z';
	printf("%c\n", H);
	printf("%c\n", S);
	*/

	/*
	float S, W;
	S = 32.4;
	W = 213748565.5;
	printf("%f\n%f\n", S, W);f
	*/

	/*
	float circum, area;
	const float pi = 3.141592; // 상수값 
	float radius = 25;
	area = pi*radius*radius; 
	circum = 2*pi*radius;
	printf("area of circle is %f\n", area);
	printf("circum of circle is %f\n", circum);
	*/

	/*
	int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d %d\n", i, i + j);
	printf("%f\n", k);
	printf("%c %d\n", ch, ch);
	*/
	
	/*
	char k, b, s;
	k = 'k';
	b = 66;
	s = 's';
	printf("%c, %c, %c\n", k, b, s);
	printf("%d, %d, %d\n", k, b, s);
	*/

	/*
	printf("%15f\n", 3.141592);
	printf("%-15f\n", 3.141592);
	printf("%15.3f\n", 3.141592);
	*/

	
	char ch = 'A';
	printf("character = %c, ASCII = %d\n\n", ch, ch);
	printf("%12d\n", 123456789);
	printf("%-3d%-3d%-3d\n", 12, 34, 56);
	printf("%3d%3d\n",12,34);
	printf("%03d%3d\n",3,160);
	printf("the " "end \n");
	

	/*
	scanf_s: double(lf), float:f, int:d, 문자열:s
	int java, c, tot;
	printf("JAVA: ");
	scanf_s("%d", &java); // 표준 입력 &: 메모리에 접근
	printf("C: ");
	scanf_s("%d", &c);
	tot = java + c;
	printf("총점은 %d 입니다.\n", tot);
	*/

	/*
	int garo, sero, area;
	printf("사각형의 가로, 세로 길이를 입력하세요: ");
	//scanf_s("%d", &garo);
	//scanf_s("%d", &sero);
	scanf_s("%d %d", &garo, &sero);
	//area = garo * sero;
	//printf("사각형의 넓이 = %d\n", area);
	printf("사각형의 넓이 = %d\n", garo*sero);
	printf("=============================================\n");
	printf("이름을 입력하세요: ");
	*/

	/*
	float baseline, height;
	printf("밑변을 입력 하시오: ");
	scanf_s("%lf", &baseline);
	printf("높이를 입력 하시오: ");
	scanf_s("%lf", &height);
	printf("삼각형의 넓이는 %.2f입니다.", (baseline*height) / 2);
	*/

	/*
	printf("이름을 입력하세요.");
	char irum[10];
	scanf_s("%s", irum, sizeof(irum));
	printf("성명: %s\n", irum);
	*/


}

