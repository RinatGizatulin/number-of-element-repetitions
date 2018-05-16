#include "stdafx.h"	
#include <iostream>
#include <string>

using namespace std;
int const N = 600;

int main()
{ 
int i = 0, j = 0, y = 0, letters = 0;
char str[N], str1[] ="AaEeIiOoUuYyBbCcDdFfGgHhJjKkLlMmNnPpQqRrSsTtVvWwXxZz12345678901!?*/\ ;
cout << "enter the text: " << '\n'; 
gets_s(str);
cout << "\nrepeated letters: \n";

do
	{
		letters = 0;
		i = 0;
		do
		{
			if (str[i] == str1[j] || str[i] == str1[j + 1]) 
			{
				letters = letters + 1; 
			}
			i = i + 1;
		} 
		while (str[i] != '\0');

	if (letters > 0)
		{
			cout << "\n" << str1[j+1] << " = " << letters <<endl;
		}
		j = j + 2;
	} 
while (j != 52); 

system("pause");
return 0;
}