// cppm-homeworks_02_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>



struct BankPersonInfo {
    std::string bankID;
    std::string name;
    float balance;
};

void ask_for_data(BankPersonInfo& human); //заполняет данные банк. аккаунта
void change_balance(BankPersonInfo& human, float new_balance); //меняет баланс аккаунта
void print_info(BankPersonInfo& human); //печатает актуальное банк. инфо


int main()
{    
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    BankPersonInfo human;    
    ask_for_data(human);
    
    float new_balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;
    
    change_balance(human, new_balance);
      
    print_info(human);
    
    return 0;
}

void ask_for_data(BankPersonInfo& human) {
    
    std::cout << "Введите номер счета: ";
    std::cin >> human.bankID;
    std::cout << "Введите имя владельца: ";
    std::cin >> human.name;
    std::cout << "Введите баланс: ";
    std::cin >> human.balance;
    return;
}

void change_balance(BankPersonInfo& human, float new_balance) {
    human.balance = new_balance;
    return;
}

void print_info(BankPersonInfo& human) {
    
    std::cout << "Ваш счет: " << human.name << ", " << human.bankID << ", " << human.balance << std::endl;
    return;
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
