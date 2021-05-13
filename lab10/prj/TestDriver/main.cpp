#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
#include "ModulesRisovany.h"

using namespace std;

int countOfabz = 23;
int countOfDot = 2;

void Test10_1()
{
    string path_1 = "File.txt";
    string path_2 = "myText.txt";
    string str;
    char abz;
    int counter = 0;
    ifstream fin;
    fin.open(path_2);
    if (path_1 == "File.txt" && path_2 == "myText.txt")
    {
        cout << "Iмена файлiв - Passed" << endl;
    }
    else
    {
        cout << "Iмена файлiв - Failed" << endl;
    }
    while(!fin.eof())
    {
            getline(fin, str);
    }
    if(str.find("Розробник модуля: Рисований Максим Олегович. Центральноукраїнський нацiональний технiчний унiверситет. Кропивницький, Україна. 2021."))
    {
        cout << "Iнформацiя про розробника - Passed" << endl;
    }
    else
    {
        cout << "Iнформацiя про розробника - Failed" << endl;
    }
    fin.close();
    fin.open(path_2);
    while(!fin.eof())
        {
            fin.get(abz);
            if(abz == '\n')
                counter++;
        }
    if (counter == countOfabz)
    {
        cout << "Кiлькiсть абзацiв - Passed" << endl;
    }
    else
    {
        cout << "Кiлькiсть абзацiв - Failed" << endl;
    }
    fin.close();
}

string readFile(const string& fileName)
{
    ifstream f(fileName);
    stringstream ss;
    ss << f.rdbuf();
    return ss.str();
}

void Test10_2()
{
    string path = "myText.txt";
    ifstream fin;
    string str2;
    string test2;
    string test;
    string testTime = "Sun May 09 11:10:29 2021";
    test = readFile(path);
    int a = 0;
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    fin.open(path);
    char dot;
    int counter = 0;
    while(!fin.eof())
    {
        fin.get(dot);
        if(dot == '.')
        counter++;
    }
    if(counter == countOfDot)
    {
        cout << "Кiлькiсть крапок - Passed" << endl;
    }
    else
    {
        cout << "Кiлькiсть крапок - Failed" << endl;
    }
    fin.close();
    fin.open(path);
    while(!fin.eof())
    {
        getline(fin, str2);
    }
    if(test.substr(442,24) == testTime)
    {
        cout << "Дата й час звернення - Passed" << endl;
    }
    else
    {
        cout << "Дата й час звернення - Failed" << endl;
    }
    fin.close();
}

void Test10_3()
{
    string path = "File.txt";
    ifstream fin;
    string test;
    test = readFile(path);
    fin.open(path);
    string testResult_1 = "-102"; // 365
    string testResult_2 = "ffffff9a"; // 407
    string testResult_3 = "00000000000000000000000000000111"; // 444
    if(test.substr(365,4) == testResult_1)
    {
        cout << "Результат у десятковiй системi - Passed" << endl;
    }
    else
    {
        cout << "Результат у десятковiй системi - Failed" << endl;
    }
    if(test.substr(407,8) == testResult_2)
    {
        cout << "Результат у шiстнадцятковiй системi - Passed" << endl;
    }
    else
    {
        cout << "Результат у шiстнадцятковiй системi - Failed" << endl;
    }
    if(test.substr(444, 32) == testResult_3)
    {
        cout << "Число b у двiйковому кодi - Passed" << endl;
    }
    else
    {
        cout << "Число b у двiйковому кодi - Failed" << endl;
    }
    fin.close();
}


int main()
{
    setlocale(LC_ALL,"");
    cout << "TestDriver for Lab10. Risovaniy Maxim. CNTU. 2021" << endl;
    cout << endl;
    cout << "=================================================" << endl;
    Test10_1();
    Test10_2();
    Test10_3();
    cout << endl;
    cout << "=================================================" << endl;
    system("pause");
}
