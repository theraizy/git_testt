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
    cout << "������� ���������� �������: ";
    cin >> n;
    Toy* toys = new Toy[n];


    for (int i = 0; i < n; ++i) {
        cout << "\n������� " << i + 1 << endl;
        cout << "��������: ";
        cin >> toys[i].name;
        cout << "���� (���.): ";
        cin >> toys[i].price;
        cout << "����������� �������: ";
        cin >> toys[i].age_min;
        cout << "������������ �������: ";
        cin >> toys[i].age_max;


        fout << toys[i].name << " " << toys[i].price << " "
            << toys[i].age_min << " " << toys[i].age_max << endl;
    }
    fout.close();
    delete[] toys;
}

