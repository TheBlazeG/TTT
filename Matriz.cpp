// Matriz.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std;
const int ROWS = 3;
const int COLUMNS = 3;
bool win(char board[ROWS][COLUMNS],int choice,bool &win);

int main()
{
	
	bool tie = false;
	int space;
	int choice;

	bool antirepeatwin=false;
	bool repeat = false;
	bool won=false;
	vector<int> Used;
	vector<int>::const_iterator iter;
	
	char board[ROWS][COLUMNS] =
	{ {'1','2','3'},
	  {'4','5','6'} ,
	  {'7','8','9'} };
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
	
	while (!tie&&!won)
	{
		
		
		for (int i = 1; i < 3; i++)
		{
			tie = true;
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLUMNS; j++)
				{
					if (board[i][j] == '1'|| board[i][j] == '2' || board[i][j] == '3' || board[i][j] == '4' || board[i][j] == '5' || board[i][j] == '6' || board[i][j] == '7' || board[i][j] == '8' || board[i][j] == '9')
					{
						tie = false;
					}
				}
			}
			if (!tie&&!won)
			{
				
				do
				{
					repeat = false;
					
					cout << "Escoge tu espacio Jugador " << i << endl;
					cin >> space;
					choice = space;
					iter = find(Used.begin(), Used.end(), space);
					if (iter != Used.end())
					{
						repeat = true;
					}
					system("cls");
				} while (isdigit(space) || repeat == true);
				Used.push_back(space);
			
					
				
			}
			
			
			if (tie==true)
			{
				space = 10;
			}
			
			
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
			win(board, choice,won);
			if (won&&!antirepeatwin)
			{
				cout << "Jugador " << i << " Gana"<<endl;
				antirepeatwin = true;
				for (int i = 0; i < ROWS; i++)
				{
					for (int j = 0; j < COLUMNS; j++)
					{
						cout << board[i][j];
					}
					cout << endl;
				}
			}
			if (!antirepeatwin)
			{
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

}
bool win(char board[ROWS][COLUMNS], int choice, bool &win)
{
	int x = (choice - 1) / 3;
	int y = (choice - 1) % 3;
	if (board[x][0] == board[x][1] && board[x][1] == board[x][2] )
	{
		win= true;
	}
	if (board[0][y]==board[1][y] && board[1][y]==board[2][y] )
	{
		win= true;
	}
	if (x==y)
	{
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] )
		{
			win= true;
		}		
	}
	if (x+y==2)
	{
		if (board[2][0] == board[1][1] && board[1][1] == board[0][2]  )
		{
			win= true;
		}
		
	}
	return true;
		
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
