#include "functions.hpp"
#include <iostream>

int main()
{
    // Определение переменных
    int n, m, MinElems, MaxElems, row1, row2, size;
    int matrix[N_Max][N_Max];

    mt::Read(matrix, n, m);
    mt::minElems(matrix, MinElems, n, m);
    mt::maxElems(matrix, MinElems, n, m);
    
    if(mt::compareEles(matrix, MaxElems, MinElems,n,m) and mt::compareRows(row1, row2, size)
    {
        mt::sortingLine(matrix,n,m);
        mt::Write(matrix, n, m);
    }
}
