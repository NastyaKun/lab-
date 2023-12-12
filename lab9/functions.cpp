#include <iostream>
#include "functions.hpp"
#include <algorithm>


namespace mt
{
    void Read(int matrix[N_Max][N_Max], int& n, int& m)
    {
        std::cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                std::cin >> matrix[i][j];
    }

    void Write(int matrix[N_Max][N_Max], int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                std::cout << matrix[i][j] << " ";
            std::cout << std::endl;
        }
    }

    // Функция для вычисления суммы цифр числа
    int sumDigits(int num)
    {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    void minElems(int matrix[N_Max][N_Max], int& MinElems, int n, int m)
    {
        MinElems = 1000000;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (MinElems > matrix[i][j])
                    MinElems = matrix[i][j];
    }

    void maxElems(int matrix[N_Max][N_Max], int& MaxElems, int n, int m)
    {
        MaxElems = -1000000;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (MaxElems < matrix[i][j])
                    MaxElems = matrix[i][j];
    }

    bool compareEles(int matrix[N_Max][N_Max], int MaxElems, int MinElems, int n, int m)
    {
        if (sumDigits(MinElems) == sumDigits(MaxElems))
            return true;
        return false;
    }

    bool compareRows(int* row1, int* row2, int size)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < size; i++)
        {
            sum1 += sumDigits(row1[i]);
            sum2 += sumDigits(row2[i]);
        }
        return sum1 < sum2;
    }

    void sortingLine(int matrix[N_Max][N_Max], int n, int m)
    {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (compareRows(matrix[i], matrix[j], n))
                    std::swap(matrix[i], matrix[j]);
    }
}
