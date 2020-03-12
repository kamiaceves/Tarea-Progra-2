#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int number, data, counter = 0;

	srand(time(NULL));
	data = 1 + rand() % (10);

	do 
	{
		cout << "Digite un numero: "; cin >> number;
		
		if(number>data)
		{
			cout << "\n El numero secreto es menor\n";
		}
		if (number < data)
		{ 
			cout << "\n El numero secreto es mayor\n";
		}
	} while (number != data);
	cout << "\n El numero secreto es el mismo wex... hasta la procsima\n";
	cout << "Numero de intentos: " << counter;
	system("pause");
	return 0;
}


