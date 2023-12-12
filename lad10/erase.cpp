#include <iostream>
#include <vector>


int main()
{
    int n;
    std::cin >> n;
    std::vector<int> number = { 1,2,3,4,5,6,7,8,9 };
    std::vector<int>::iterator it = number.begin();
    advance(it, n);
    number.erase(it);
    for (std::vector<int>::iterator i = number.begin(); i != number.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}
