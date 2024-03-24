#include <iostream>

int main()
{

    int COUNT_NUMBERS = 4;
    double arr[COUNT_NUMBERS];

    std::cout << "Введите " << COUNT_NUMBERS << " дробных чисел:\n";
    for (int i = 0; i < COUNT_NUMBERS; i++)
    {
        std::cin >> arr[i];
    }

    int max;
    for (int i = 0; i < COUNT_NUMBERS - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j <= COUNT_NUMBERS - 1; j++)
            if (arr[j] > arr[max])
                max = j;
        std::swap(arr[i], arr[max]);
    }

    std::cout << "Отсортированный массив:\n";
    for (int i = 0; i < COUNT_NUMBERS; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}