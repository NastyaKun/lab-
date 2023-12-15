#include <iostream>

int main()
{
	int n, m, pos;
	int maxsum = INT_MIN;
	std::cin >> n >> m;
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) 
		matrix[i] = new int[m];


	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> matrix[i][j];

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int el;
		for (int j = 0; j < n; j++)
		{
			el = matrix[i][j];
			sum += el;
		}
		if (sum > maxsum)
		{
			maxsum = sum;
			pos = i;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == pos) matrix[i][j] += 1;
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}


	for (int i = 0; i < n; i++) 
		delete[] matrix[i];

	delete[] matrix;
}
