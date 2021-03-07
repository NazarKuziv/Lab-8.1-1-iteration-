// Lab_8_1-1.cpp
// < Кузів Назар >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
 Вияснити, чи є серед цих символів пара сусідніх букв “SQ” або ”QS”.
*/

bool Include(const char* s)
{

	for (int j = 0; s[j] != '\0'; j++)
		if (( s[j]=='S' && s[j + 1]=='Q') || (s[j] == 'Q' && s[j + 1] == 'S'))
			return true;

	return false;
}

int main()
{
	char s[101]; //Оголошення літерного рядка
	

	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	if (Include(s))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}
