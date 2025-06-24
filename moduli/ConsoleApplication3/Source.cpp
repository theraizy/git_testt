#include "module_1.h"


struct Toy {
    string name;
    double price;
    int age_min;
    int age_max;
};


void enter() {
    ofstream fout("Assort.txt");
    int n;
    cout << "Введите количество игрушек: ";
    cin >> n;
    Toy* toys = new Toy[n];


    for (int i = 0; i < n; ++i) {
        cout << "\nИгрушка " << i + 1 << endl;
        cout << "Название: ";
        cin >> toys[i].name;
        cout << "Цена (руб.): ";
        cin >> toys[i].price;
        cout << "Минимальный возраст: ";
        cin >> toys[i].age_min;
        cout << "Максимальный возраст: ";
        cin >> toys[i].age_max;


        fout << toys[i].name << " " << toys[i].price << " "
            << toys[i].age_min << " " << toys[i].age_max << endl;
    }
    fout.close();
    delete[] toys;
}

