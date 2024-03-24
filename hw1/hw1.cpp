#include <iostream>

int main()
{
    int COUNT_FLATS = 10;
    int COUNT_REQUEST = 3;

    std::string flats[COUNT_FLATS];
    std::cout << "Введите фамилии жильцов:\n";
    for (int i = 0; i < COUNT_FLATS; i++)
    {
        std::cout << i + 1 << ". ";
        std::cin >> flats[i];
    }

    std::cout << "Введите требуемые номера квартир:\n";
    int n = 0;
    while (n < COUNT_REQUEST)
    {
        int number;
        std::cin >> number;
        if (number < 1 || number > COUNT_FLATS)
        {
            std::cout << "Недопустимый номер квартиры\n";
        }
        else
        {
            std::cout << flats[number - 1] << std::endl;
            n++;
        }
    }
    return 0;
}