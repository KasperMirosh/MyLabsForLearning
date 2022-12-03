#include <iostream>
//#include <cctype> ????
#include <fstream>

namespace Sort
{
	void srt(int Matrix[100][100], int& n, int& m)
	{
		int summStr[100] = {};
		for(int i = 0; i < n; i++)
		{
			int summe = 0;
			for (int j = 0; j < m; j++)
			{
				int number = Matrix[i][j];
				summe += abs(number);
			}
			summStr[i] = summe;
		} 

		
        for ( int j=0; j<n; j++ )
		{ 
			int min = INT16_MAX;
			int tmp = -1;
			for (int i = 0; i < n; i++)
			{
				if (summStr[i] < min)
				{
					min = summStr[i];
					tmp = i;
				}
			}
			summStr[tmp] = INT16_MAX;

			for (int i=0 ; i < m; i++)
			{
				std::cout << Matrix[tmp][i] << " ";
			}
			std::cout << std::endl;
		}
	}
	
}