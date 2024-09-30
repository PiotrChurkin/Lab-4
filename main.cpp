#include <iostream>

int main()
{
    short N = -1;
    std::cout << "Please, enter the status code: " ;
    std::cin >> N;

    switch(N)
    {
        case 0: std::cout << "Status code " << N << " - Successful completed"; break;
        case 1: std::cout << "Status code " << N << " - File read error!"; break;
        case 2: std::cout << "Status code " << N << " - File write error!"; break;
        case 3: std::cout << "Status code " << N << " - Not all fields are defined!"; break;
        default: std::cout << "Unknow status"; break;
    }
    return 0;
}