#include "module_3.h"


void save() {
    ifstream fin("intermediate.txt");
    ofstream fout("result.txt");
    string line;


    while (getline(fin, line)) {
        fout << line << endl;
    }


    fin.close();
    fout.close();
    cout << "��������� �������� � result.txt\n";
}
