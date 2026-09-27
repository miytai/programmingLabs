#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a, b, c; // Объявление двух целлых переменных с именами a, b
	printf("Hello World\n"); // Вывод приветсвенного сообщения
	printf("Input a, b:  "); // Вывод сообщения о том, что программа ждёт ввод двух чисел a, b
	scanf("%d%d", &a, &b); // Ввод двух целых чисел a, b
	c = a + b; // Сложение двух чисел: c = a + b
	printf("Result: %d\n", c); // Вывод результата - значение числа c
}