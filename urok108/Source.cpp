#include <iostream>
#include <string>

int main()
{
    std::string hello = "Hello, world!";
    int index;

    do
    {
        std::cout << "Enter an index: ";
        std::cin >> index;

        // Обрабатываем случай, когда пользователь ввел нецелочисленное значение
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            index = -1; // убеждаемся, что index имеет недопустимое значение, чтобы цикл продолжался
            continue; // этот continue может показаться здесь лишним, но он явно указывает на готовность прекратить выполнение этой итерации цикла
        }

    } while (index < 0 || index >= hello.size()); // обрабатываем случай, когда пользователь ввел значение вне диапазона

    std::cout << "Letter #" << index << " is " << hello[index] << std::endl;

    return 0;
}