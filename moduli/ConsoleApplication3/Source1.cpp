#include "module_2.h"


struct Toy {
    string name;
    double price;
    int age_min;
    int age_max;
};


void find() {
    ifstream fin("Assort.txt");
    ofstream fout("intermediate.txt");
    int count = 0;
    string line;


    while (getline(fin, line)) count++;
    fin.clear(); fin.seekg(0);


    Toy* toys = new Toy[count];
    for (int i = 0; i < count; ++i) {
        fin >> toys[i].name >> toys[i].price >> toys[i].age_min >> toys[i].age_max;
    }


    cout << "»грушки дл€ возраста 4Ц5 лет:\n";
    fout << "»грушки дл€ возраста 4Ц5 лет:\n";
    for (int i = 0; i < count; ++i) {
        if (toys[i].age_min <= 4 && toys[i].age_max >= 5) {
            cout << toys[i].name << endl;
            fout << toys[i].name << endl;
        }
    }


    fin.close();
    fout.close();
    delete[] toys;
}
