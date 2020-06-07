#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	//-------------------------------------------
	char str[] = "Red green blue";
	int k = 0;

	cout << "Исходная строка: " << str << endl;

	for (int i = 0; str[i] != '\0'; i++)
		k++;

	char temp;
	for (int i = 0; i < k / 2; i++)
	{
		temp = str[i];
		str[i] = str[k - i - 1];
		str[k - i - 1] = temp;
	}

	cout << "Перевёрнутая строка: " << str << endl;

	//-------------------------------------------


	char s[] = "Do you like programming?";
	cout << endl << "Исходная строка:" << s << endl;

	char* ptr = strtok(s, " .,!?");
	char* max = ptr;

	do
	{
		if (strlen(max) < strlen(ptr))
			max = ptr;
	} while (ptr = strtok(NULL, " .,!?"));

	cout << "Самое длинное слово: " << max << endl;

	//---------------------------------------------------


	char strng[3][50];
	char temp_str[50];

	strcpy(strng[0], "Do you like programming?");
	strcpy(strng[1], "I love programming!");
	strcpy(strng[2], "But sometimes I lose my head from love.");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			if (strlen(strng[i]) < strlen(strng[j]))
			{
				strcpy(temp_str, strng[i]);
				strcpy(strng[i], strng[j]);
				strcpy(strng[j], temp_str);
			}
	}


	cout << endl << "Отсортированный список предложений:";
	for (int i = 0; i < 3; i++)
		cout << endl << strng[i] << endl;


	return 0;
}
