// ConsoleApplication_Klass_Neyron.cpp : Этот файл содержит функцию "main". 
//  Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Class Neyron.h>
#include <windows.h>




int main()
{
   // SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток // ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
   // setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
    Class_Neyron neyron[10];

   // SetConsoleOutputCP(1251);

    std::cout << "Hello World!\n" << std::endl;//<< endl;   
   // new Class_Neyron; 
    int i = 0;
    for (i; i<10; i++)
    {
       // Class_Neyron neyron_i;// создаём объект
        neyron[i].attribute_Imia_Ili_Chislo_Neyrona = i;
    }
   
   // Class_Neyron neyron;// создаём объект
    // std::cout << neyron_i.attribute_Imia_Ili_Chislo_Neyrona;
    std::cout <<"Imia_Ili_Chislo_Neyrona это " << neyron[8].attribute_Imia_Ili_Chislo_Neyrona << std::endl;;


    // Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
    // Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

    // Советы по началу работы 
    //   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
    //   2. В окне Team Explorer можно подключиться к системе управления версиями.
    //   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
    //   4. В окне "Список ошибок" можно просматривать ошибки.
    //   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
    //   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
}