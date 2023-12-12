#pragma once
#define N_Max 100

namespace mt
{
	void Read(int matrix[N_Max][N_Max], int& n, int& m);

	void Write(int matrix[N_Max][N_Max], int n, int m);

	int sumDigits(int num);

	void minElems(int matrix[N_Max][N_Max], int& MinElems, int n, int m);

	void maxElems(int matrix[N_Max][N_Max], int& MaxElems, int n, int m);

	bool compareEles(int matrix[N_Max][N_Max], int MaxElems, int MinElems, int n, int m);

	bool compareRows(int* row1, int* row2, int size);

	void sortingLine(int matrix[N_Max][N_Max], int n, int m);
}
