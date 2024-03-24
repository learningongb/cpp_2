#include <iostream>

int main()
{
    int arr[] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    // Вариант решения 1 - годится для поиска повторящихся элементов, необязательно последовательных.
    // Отсортировать массив и после этого за 1 проход проверить на равенство
    // соседние элементы отсортированного массива.

    // Сортировка используется такая же как в задаче 2
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int max;
    for (int i = 0; i < array_size - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j <= array_size - 1; j++)
            if (arr[j] > arr[max])
                max = j;
        std::swap(arr[i], arr[max]);
    }

    for (int i = 1; i < array_size; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            std::cout << "Повторяется элемент " << arr[i] << std::endl;
            break;
        }
    }

    // Вариант 2 - математический.
    // Найти минимум в массиве (в задаче это Х) и сумму всех чисел. Математически посчитать ожидаемую сумму ряда
    // и по разности ожидаемой и фактической суммы найти повторящийся элемент.
    int min = 0;
    int sum = arr[0];
    for (int i = 1; i < array_size; i++)
    {
        sum += arr[i];
        if (arr[min] > arr[i])
            min = i;
    }
    int sum_series = (arr[min] * 2 + array_size - 1) * (array_size / 2) + (array_size % 2 == 0, 0, arr[min] + array_size / 2);
    std::cout << sum - (sum_series - (arr[min] + array_size - 1)) << std::endl;

    return 0;
}