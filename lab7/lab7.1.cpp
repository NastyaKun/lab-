#include <iostream>

int main()
{
	// Ввод
	int mas[10'000];
	int mag[10'000];
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> mas[i];

	for (int i = 0; i < n; i++)
	{
		mag[i] = mas[i];
	}
	
	bool flag = 0;

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int z = mag[i] % 10;
		int k = 1;

		while (mag[i] > 0)
		{
			sum++;
			mag[i] /= 10;
			if (z == mag[i] % 10) k++;
		}

		if (k == sum)
			flag = 1;
	}

	if (flag == 0)
	{
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (mas[i] < mas[j])
				{
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
				}
	}

	// Вывод
	std::cout << flag << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << mas[i] << " ";
}
