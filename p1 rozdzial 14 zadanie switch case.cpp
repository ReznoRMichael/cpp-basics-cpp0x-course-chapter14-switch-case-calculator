#include <iostream>

int main()
{
    int liczba1;
    int liczba2;
    char dzialanie;

    std::cout << "Podaj dzialanie w formacie [liczba1][znak][liczba2]:" << std::endl;
    std::cin >> liczba1 >> dzialanie >> liczba2;

    switch( dzialanie )
    {
    case 47 : // dzielenie /
        std::cout << "Wynik: " << liczba1/liczba2;
        break;
    case 42 : // mnozenie *
        std::cout << "Wynik: " << liczba1*liczba2;
        break;
    case 43 : // dodawanie +
        std::cout << "Wynik: " << liczba1+liczba2;
        break;
    case 45 : // odejmowanie -
        std::cout << "Wynik: " << liczba1-liczba2;
        break;
    default:
        std::cout << "Niepoprawny znak dzialania. Uzyj /, *, + albo -." << std::endl;
        break;
    }

    return 0;

}
