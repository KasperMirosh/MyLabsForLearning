#include <iostream>
//#include <cctype>
#include <fstream>

namespace Search
{
	bool Po( int Matrix[100][100], int& n, int& m)
	{
		

		for (int index=0; index < m - 1; index++) // Выбор столбца для сравнения.
		{
			for (int j = index + 1; j < m; j++) // Следующий сравниваемый столбец.
			{
				bool flagJ = true;
				for (int i = 0; i < n; i++)
				{

					if (Matrix[i][index] != Matrix[i][j])
					{
						flagJ = false;
						break;
					}

				}
				if (flagJ == false)
				{
					std::cout << "net odinakov stolb" << std::endl;
					continue;
				}
				else
				{
					std::cout << "Odinakov stolbzi" << std::endl;
					return true; // Если нашлись столбцы, то Ро принимает значение 1
				}
			}

		}
		return false; // Если не нашлось столбцов Ро принимает значение 0

	}

	bool esy(int Matrix[100][100], int& n, int& m)
	{

		for (int i=0; i < m; i++)
		{
			for (int j=0; j < n; j++)
			{
				bool flag = true;
				short number = abs(Matrix[i][j]);
				if (number == 2)
				{
					std::cout << "number is easy" << std::endl;
					return true;
				}

				for (int temp = 2; temp < (pow(number, 0.5) + 1) / 1; temp++ )
				{
					if (number % temp == 0)
					{
						std::cout << "number not easy" << std::endl;
						flag = false;
						break;
					}
					else
					{
						continue;
					}
				}

				if (flag) 
				{
					std::cout << "number is easy" << std::endl;
					return true;
				}
			}
		}
		return false;
		
	}
}