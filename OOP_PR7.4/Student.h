#pragma once
#include <iostream>
#include <string>
#include <map>
#include <ctime>
using namespace std;

struct Student {
    string surname;
    int programming;
    int history;
    int english;
};

void add(map<int, Student> &c)
{
    unsigned long pos = c.size();
    Student tmp;
    int mark;

    cout << "Surname : ";
    cin >> tmp.surname;
    
    do
    {
        cout << "Programming mark: ";
        cin >> mark;
        
    }
    while (mark <= 0 || mark > 5);
    tmp.programming = mark;

    do
    {
        cout << "Histoty mark: ";
        cin >> mark;
        
    }
    while (mark <= 0 || mark > 5);
    tmp.history = mark;

    do
    {
        cout << "English mark: ";
        cin >> mark;
        
    }
    while (mark <= 0 || mark > 5);
    tmp.english = mark;
    
    c.insert({ pos, tmp });
}

void display(map<int, Student> c)
{
    for (int i = 0; i < c.size(); i++)
    {
        cout << " Surname: " << c[i].surname << endl;
        cout << " Programming: " << c[i].programming << endl;
        cout << " History: " << c[i].history << endl;
        cout << " English: " << c[i].english << endl;
        cout << endl;
    }
}

void set_student(Student &s, string a, int b, int c, int d)
{
    s.surname = a;
    s.programming = b;
    s.history = c;
    s.english = d;
}

string get_surname (Student s) { return s.surname; };
int get_programming (Student s) { return s.programming; };
