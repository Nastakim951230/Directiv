#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POW(X) pow(X,2)
#define Dlina(x,y) sqrtf(x+y)
#define ABC(x) abs(x)
#define x1 5
#define x2 5
#define x3 8
#define y1 7
#define y2 10
#define y3 9


void Koordinat()
{
	double otr1, otr2, otr3, P, S;
#if ((x1 == x2) && (x2 == x3))
	{
		printf("Три точки не образую треугольник, а образуют вектор");
	}
#elif ((y1 == y2) && (y2 == y3))
	{
		printf("Три точки не образую треугольник, а образуют вектор");
	}
#elif ((y1 == y2) && (x1 == x2))
	{
		printf("Три точки не образую треугольник, а образуют вектор");
	}
#elif ((y2 == y3) && (x2 == x3))
	{
		printf("Три точки не образую треугольник, а образуют вектор");
	}
#elif ((y1 == y3) && (x1 == x3))
	{
		printf("Три точки не образую треугольник, а образуют вектор");
	}
#else
	{
		otr1 = Dlina((POW((x2 - x1))), (POW((y2 - y1))));
		otr2 = Dlina((POW((x3 - x1))), (POW((y3 - y1))));
		otr3 = Dlina((POW((x3 - x2))), (POW((y3 - y2))));
		P = otr1 + otr2 + otr3;
		double z = (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);
		S = 0.5 * ABC(z);
		printf("Длина отрезка AB = %.2f\n", otr1);
		printf("Длина отрезка AC = %.2f\n", otr2);
		printf("Длина отрезка BC = %.2f\n", otr3);
		printf("Периметр = %.2f\n", P);
		printf("Площадь = %.2f\n", S);
	}
#endif

}

int main()
{
	system("chcp 1251 > nul");

	Koordinat();
	return 0;

}