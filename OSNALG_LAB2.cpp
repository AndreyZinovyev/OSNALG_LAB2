// OsnalgLAb2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;
class DateStruct
{
public:
    string day;
    int hours, min;
    int free_mesta = 54;
    string city;
    DateStruct()
    {
        cout << "Введите День" << endl;
        cin >> day;
        cout << "hours" << endl;
        cin >> hours;
        cout << "min" << endl;
        cin >> min;
        cout << "Введите city" << endl;

    }
    DateStruct(int _hours, int _min, string _day, string _city, int _free_mesta)
    {

        hours = _hours;
        min = _min;
        day = _day;
        city = _city;
        free_mesta = _free_mesta;


    }
    void Raspisanie() {


    };
    void print() {

        cout << hours << " ";
        cout << min << " ";
        cout << day << " ";
        cout << city << " ";
        cout << free_mesta << endl;
    }
    void random_rzd()
    {

        min = int(0 + (double(rand()) / RAND_MAX) * (60 - 0));
        hours = int(0 + (double(rand()) / RAND_MAX) * (24 - 0));
        switch (int(1 + (double(rand()) / RAND_MAX) * (7 - 1)))
        {
        case 1:
            day = "Понедельник";
            break;
        case 2:
            day = "Вторник";
            break;
        case 3:
            day = "Среда";
            break;
        case 4:
            day = "Четверг";
            break;
        case 5:
            day = "Пятница";
            break;
        case 6:
            day = "Суббота";
            break;
        case 7:
            day = "Воскресенье";
            break;
        default:
            day = "Не выбран";
            break;
        }
        switch (int(0 + (double(rand()) / RAND_MAX) * (3 - 0))) // 3- Колличевство городов
        {
        case 0:
            city = "Волгоград";
            break;
        case 1:
            city = "Ростов";
            break;
        case 2:
            city = "Москва";
            break;
        case 3:
            city = "Санкт-Петербург";
            break;
        default:
            city = "Город не выбран";
            break;
        }
        free_mesta = int(0 + (double(rand()) / RAND_MAX) * (55 - 0));




    }
};
void RST(DateStruct _Raspisanie[], int n, int hours) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (_Raspisanie[i].free_mesta > _Raspisanie[j].free_mesta)
            {
                DateStruct r = _Raspisanie[i];
                _Raspisanie[i] = _Raspisanie[j];
                _Raspisanie[j] = r;
            }
    for (int i = 0; i < n; i++)
        _Raspisanie[i].print();
}
int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "Russian");
    int hours;
    int min;
    string day;
    string city;
    int free_mesta;
    cout << "Введите день";
    cin >> day;
    cout << "Введите Город";
    cin >> city;
    cout << "Введите час отправления";
    cin >> hours;
    cout << "Введите минуты отправления";
    cin >> min;
    DateStruct RZD[5] = { DateStruct(15, 30, "Yesterday", "Moscow", 45),DateStruct(17, 45, "Tuesday", "Rostov", 1),DateStruct(00, 15, "Monday", "Rostov", 12),DateStruct(00, 45, "Saturday", "Saint Petersburg", 0),DateStruct(1, 45, "Saturday", "Volgograd", 30) };
    /*RZD[0] = DateStruct(15, 30, "Yesterday", "Moscow", 45);
    RZD[1] = DateStruct(17, 45, "Tuesday", "Rostov", 1);
    RZD[2] = DateStruct(00, 15, "Monday", "Rostov", 12);
    RZD[3] = DateStruct(00, 45, "Saturday", "Saint Petersburg", 0);
    RZD[4] = DateStruct(1, 45, "Saturday", "Volgograd", 30);*/
    RST(RZD, 5, hours);
    std::cout << "Hello World!\n";
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

