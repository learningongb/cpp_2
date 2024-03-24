# Урок 1. Одномерные массивы. Базовые алгоритмы на массивах

## Задание 1. Многоквартирный дом

**Что нужно сделать:**  
На вход программе поступают десять фамилий в формате строк. Это фамилии жильцов квартир с первой по десятую. Необходимо прочитать эти фамилии и записать в одномерный массив. Далее пользователь вводит три номера квартир. Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире. Если пользователь введёт некорректный номер квартиры, необходимо сообщить ему об этом.

## Задание 2. Сортировка

**Что нужно сделать:**  
Пользователь вводит в консоль 15 дробных чисел. Необходимо прочитать их и вывести в консоль в порядке от большего к меньшему. По возможности используйте минимум дополнительной памяти и проходов по массиву.

## Задание 3. Использование assert

**Что нужно сделать:**  
Создайте в своей программе функцию float travelTime(float distance, float speed). Она будет находить время в пути и при этом использовать assert, чтобы отбросить нулевую и отрицательную скорость. Вызовите эту функцию в main. Убедитесь, что падение происходит за счёт assert. Не забудьте подключить заголовочный файл cassert.

## Задание 4. Ряд чисел* (дополнительное задание)

**Что нужно сделать:**
В программе инициализирован массив из 15 целых положительных чисел. Эти числа являются множеством из 14 последовательных чисел, начиная с Х (Х может быть любым), а одно число из ряда повторяется. Необходимо найти повторяющееся число и вывести его в консоль. По возможности используйте минимум дополнительной памяти и проходов по массиву.  
**Рекомендации по выполнению**  
Это задание с подвохом. Подумайте, как его можно было бы легко решить за O(n). Н