// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Blob.h"
int main()
{
    std::cout << "Hello World!\n";
    StrBlob b1;
    {
        StrBlob b2 = { "a","an","the" };
        b1 = b2;
        b2.push_back("about");
    }
    system("pause");
}
void CRCShet()
{
    bitset<16> CRC(00);
    //int f = 0b0000000000000000;
}
void Foo()
{
   // return 1;
}
template <typename T>
shared_ptr<T> fff(T argc)
{
    
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
