#include <iostream>
#include <cctype>
#include <fstream>
#include "CreateMatrix.hpp"
#include "Search.hpp"
#include "Sort.hpp"


int main()
{
	int Matrix[100][100];
	int n;
	int m;
	CreateMatrix::func(Matrix, n, m);
	bool first = Search::Po(Matrix, n, m);
	bool second = Search::esy(Matrix, n, m);
	if (first && second)
	{
		Sort::srt(Matrix, n, m);
	}


}


