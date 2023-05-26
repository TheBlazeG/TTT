// Matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std;



int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	bool win = false;
	int space;
	bool repeat = false;
	vector<int> Used;
	vector<int>::const_iterator iter;

	char board[ROWS][COLUMNS] =
	{ {' ',' ',' '},
	  {' ',' ',' '} ,
	  {' ',' ',' '} };
	cout << "<<<Tic-Tac-Toe>>>\n";

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	while (!win)
	{
		system("cls");
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}
		for (int i = 1; i < 3; i++)
		{
			win = true;
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					if (board[i][j] == ' ')
					{
						win = false;
					}
				}
			}
			if (!win)
			{
				cout << "Escoge tu espacio Jugador " << i << endl;
				cin >> space;
				while (isdigit(space) || repeat==true)
				{
					
					system("cls");
					cout << "Escoge tu espacio Jugador " << i << endl;
					cin >> space;
					Used.push_back(space);
					iter = find(Used.begin(), Used.end(), space);
					if (iter != Used.end())
					{
						repeat = true;
					}
				}
			}
			
			
			if (win==true)
			{
				space = 10;
			}
			/*
			space =11;
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					if (board[j][j] != board[j-1][j-1] || board[i][j] == 'x' || board[i][j]== '0' || board[j][j] == 'x' || board[j][j]=='0')
					{
						space = 11;
						break;
					}
				}
			}*/
			
			switch (space)
			{
			case 1:
				if (i == 1)
				{
					board[0][0] = 'x';
				}
				else
				{
					board[0][0] = '0';
				}
				break;
			case 2:
				if (i == 1)
				{
					board[0][1] = 'x';
				}
				else
				{
					board[0][1] = '0';
				}
				break;
			case 3:
				if (i == 1)
				{
					board[0][2] = 'x';
				}
				else
				{
					board[0][2] = '0';
				}
				break;
			case 4:
				if (i == 1)
				{
					board[1][0] = 'x';
				}
				else
				{
					board[1][0] = '0';
				}
				break;
			case 5:
				if (i == 1)
				{
					board[1][1] = 'x';
				}
				else
				{
					board[1][1] = '0';
				}
				break;
			case 6:
				if (i == 1)
				{
					board[1][2] = 'x';
				}
				else
				{
					board[1][2] = '0';
				}
				break;
			case 7:
				if (i == 1)
				{
					board[2][0] = 'x';
				}
				else
				{
					board[2][0] = '0';
				}
				break;
			case 8:
				if (i == 1)
				{
					board[2][1] = 'x';
				}
				else
				{
					board[2][1] = '0';
				}
				break;
			case 9:
				if (i == 1)
				{
					board[2][2] = 'x';
				}
				else
				{
					board[2][2] = '0';
				}
				break;
			case 10:
				cout << "Empate!!"<<endl;
					break;
			default:
				break;
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					cout << board[i][j];
				}
				cout << endl;
			}
		}
	}

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
