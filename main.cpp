#include <iostream>

int main()
{
    int A, B, C = 0;
    std::cout << "Please, enter A, B and C: " ;
    std::cin >> A >> B >> C ;
    short i = 0;

    if((A > B)&&(B > C))
    {
        std::cout << A-B-C;
        i++;
    }

    else if((B>A)&&(B%C==0))
    {
        std::cout << (B/C)+B-A;
        i++;
    }

    else
    {
        std::cout << A+B+C;
    }

    return 0;
}