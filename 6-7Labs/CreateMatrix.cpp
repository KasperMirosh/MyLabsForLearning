#include <iostream>
#include <cctype>
#include <fstream>

namespace CreateMatrix
{
	void func(int Matrix[100][100], int& n, int& m)
	{
		std::cout << "Enter the n values: " << std::endl;
		std::cin >> n;
		std::cout << "Enter the m values: " << std::endl;
		std::cin >> m;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				std::cout << "Enter the matrix values: [" << i << "],[" << j << "] " << std::endl;
				std::cin >> Matrix[i][j];
				std::cout << std::endl;
			}

			for (int i = 0;i < n;i++)
			{
				for (int j = 0;j < m;j++)
				{
					std::cout << Matrix[i][j] << " ";
				}
				std::cout << std::endl;
			}

		}

		std::ofstream out;
		out.open("D:/ÁÔÓ_ÏÌ/Ïðîã/Ëàáû/laba6/matrix.txt");
		if (out.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					out << Matrix[i][j] << " ";
				}
				out << "\n";
			}
			std::cout << "Write complite" << std::endl;
		}
		else
		{
			std::cout << "No!" << std::endl;
		}

	}

}