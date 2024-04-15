//1. 
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h> 
#include <conio.h> 
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	printf("Числа типу int займають %d байт.\n", sizeof(int));
	printf("Числа типу char займають %d байт.\n", sizeof(char));
	printf("Числа типу float займають %d байт.\n", sizeof(float));
	printf("Числа типу double займають %d байт.\n", sizeof(double));

}

//2.
// Префіксний та постфіксний
// інкремент ++ і декремент -- 
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h> 
#include <conio.h> 
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n = 1;
	printf("n=%d \n", n);
	// n++; 
	printf("prefix: ++n=%d\n", ++n);
	printf("postfix: n++=%d\n", n++);
	printf("after-postfix: n=%d\n", n);
	// n--; 
	printf("prefix: --n=%d\n", --n);
	printf("postfix: n--=%d\n", n--);
	printf("after-postfix: n=%d\n", n);
}

//3.
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h> 
#include <conio.h> 
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n = 4, m = 4, res1, res2;
	res1 = n++ * m;
	printf("res1=%d\n", res1);
	res2 = n++ / m;
	printf("res2=%d", res2);
	return 0;

}


// 4 пукт
//a)
#include <stdio.h>
#include <conio.h> 
int main() {
	int a, b = 3;
	float c;
	c = b % 2 + (a = ++b / 2) + 1.1;
	printf("a=%d,c=%4.1f\n", a, c);
}

//б)
#include <stdio.h> 
int main() {
	int x = 2, z;
	float y = 2.1;
	z = x++ * y + y / x * 3;
	printf("x=%d z=%d\n", x, z);
}

//в)
#include <stdio.h> 
int main() {
	float x = 1.1, y = 0, z;
	int a;
	z = (a = x++) * y + 3 * x; printf("z=%4.1f\n", z);
}
