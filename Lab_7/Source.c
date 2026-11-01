#include <stdio.h>
#include <locale.h>
#include <math.h>

void TaskOne();
void TaskTwo();
void HomeWork();

double a, b, y;

void main() {
	setlocale(LC_ALL, "RUS");
	//TaskOne();
	//TaskTwo();
	HomeWork();


}

void TaskOne()
{
	char c;

	printf("Введите символы 'a' or 'b' или цифру: ");

	scanf_s("%c", &c);//считывание с консоли

	switch (c)
	{
		case '0': 
		case '1': 
		case '2': 
		case '3':
		case '4':
		case '5':
		case '6': 
		case '7': 
		case '8': 
		case '9':
			printf("'%c' — это цифра\n", c);
			break;
		case 'a':
			printf("Введено 'a'.\n");
			break;
		case 'b':
			printf("Введено 'b'.\n");
			break;
		default:
			printf("Неизвестный символ\n");
	}
}

void TaskTwo()
{
	float x = 0, y = 0;
	char c;

	printf("Введите выражение (например 12.5+3.2): ");

	if (scanf_s("%f", &x) != 1) {
		printf("Ошибка ввода первого числа\n");
		return;
	}

	scanf_s(" %c", &c, 1);

	if (scanf_s("%f", &y) != 1) {
		printf("Ошибка ввода второго числа\n");
		return;
	}

	switch (c)
	{
	case '+': 
		printf("= %f\n", x + y); 
		break;
	case '-': 
		printf("= %f\n", x - y); 
		break;
	case '*': 
		printf("= %f\n", x * y); 
		break;
	case '/':
		if (y != 0.0)
			printf("= %f\n", x / y);
		else
			printf("Деление на ноль!\n");
		break;
	default: printf("Неизвестная операция\n");
	}
}

void HomeWork()
{
	int choice, day;

	printf("Выберите тип нумерации:\n");
	printf("1. С понедельника (Пн=1, Вт=2... Вс=7)\n");
	printf("2. С воскресенья (Вс=1, Пн=2... Сб=7)\n");
	printf("Ваш выбор: ");
	scanf_s("%d", &choice);

	printf("Введите номер дня недели: ");
	scanf_s("%d", &day);

	if (day < 1 || day > 7) {
		printf("Ошибка! Номер дня должен быть от 1 до 7.\n");
		return 1;
	}

	printf("Название дня: ");

	if (choice == 1) {
		// Нумерация с понедельника
		switch (day) {
		case 1: printf("Понедельник\n"); break;
		case 2: printf("Вторник\n"); break;
		case 3: printf("Среда\n"); break;
		case 4: printf("Четверг\n"); break;
		case 5: printf("Пятница\n"); break;
		case 6: printf("Суббота\n"); break;
		case 7: printf("Воскресенье\n"); break;
		}
	}
	else if (choice == 2) {
		// Нумерация с воскресенья (порядок сдвигается)
		switch (day) {
		case 1: printf("Воскресенье\n"); break;
		case 2: printf("Понедельник\n"); break;
		case 3: printf("Вторник\n"); break;
		case 4: printf("Среда\n"); break;
		case 5: printf("Четверг\n"); break;
		case 6: printf("Пятница\n"); break;
		case 7: printf("Суббота\n"); break;
		}
	}
	else {
		printf("Ошибка! Выбран неверный тип нумерации.\n");
	}
}
