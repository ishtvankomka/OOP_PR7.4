#include <iostream>
#include <string>
#include <map>
#include <ctime>
#include "Student.h"
using namespace std;

int main() {
    map<int, Student> group;
    int key;
    do
    {
        cout << "[1] Додати запис" << endl;
        cout << "[2] Відобразити записи" << endl;
        cout << "[0] Вийти" << endl;
        do
        {
            cin >> key;
        }
        while (key < 0 || key > 2);
        switch (key)
        {
            case 1:
                add(group);
                break;
            case 2:
                display(group);
                break;
        }
    }
    while (key != 0);
    return 0;
}
