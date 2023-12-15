#include <iostream>

bool checkDigits(int digits)
{
	int k = digits % 10;
	while (digits > 0)
	{
		if (digits % 10 != k)
			return false;
		digits /= 10;
	}
	return true;

}

int main()
{
	// Ввод
	int n;
	std::cin >> n;
	int* mas = new int[n];
	
	for (int i = 0; i < n; i++)
		std::cin >> mas[i];
	
	bool flag = 0;

	for (int i = 0; i < n; i++)
		if (checkDigits(mas[i]))
			flag = 1;
		
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
	
	delete[] mas;
}
