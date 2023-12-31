﻿// DeleteEqual.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "RU_ru");
    std::vector<int> vec;
    int item, size;
    std::cout << "Убери равных!\n";
    std::cout << "Введите размер вектора: ";
    std::cin >> size;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Введите " << i << " элемент вектора: ";
        std::cin >> item;
        vec.push_back(item);
    }
    std::cout << "Введите удаляемое значение в векторе: ";
    std::cin >> item;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == item)
        {
            for (int j = i + 1; j < vec.size(); ++j)
            {
                vec[j - 1] = vec[j];
            }
            vec.pop_back();
            --i;
        }
    }
    for (int i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
