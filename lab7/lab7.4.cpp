#include <iostream>

int main()
{
	// Ввод
	int mas[20'000];
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> mas[i];

	// Удалить
	int i = 0;
	while (i < n)
	{
		int sum = 0;
		int finger = mas[i];
		while (finger > 0)
		{
			sum += finger % 10;
			finger /= 10;
		}
		if (sum == 10)
		{
			for (int j = i; j < n - 1; j++)
				mas[j] = mas[j + 1];
			n--;
		}
		else i++;
	}

	// Дублировать
	i = 0;
	while (i < n)
	{
		int n1 = mas[i];
		int mirror = 0;
		while (n1 > 0)
		{
			mirror = mirror * 10 + n1 % 10;
			n1 /= 10;
		}
		if (mirror == mas[i])
		{
			for (int j = n; j > i; j--)
				mas[j] = mas[j - 1];
			n++;
			i++;
		}
		i++;
	}

	// Вывод
	for (int i = 0; i < n; i++)
		std::cout << mas[i] << " ";
}
