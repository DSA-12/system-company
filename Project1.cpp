// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "manger.h"
#include"employee.h"


using namespace std;
fstream inv("inv.txt");

void mangermenu(){
    cout << "welcome to the manger menu" << endl;
    cout << "if u want to view the inventory press 1" << endl;
    cout << "if u want to edit the inventory press 2" << endl;
    cout << "if u want to delete item from the inventory press 3" << endl;
    cout << "if u want to add item to the inventory press 4" << endl;
}
void flieopening()
{
    string line;
    if (inv.is_open())
    {
        while (getline(inv, line))
        {
            cout << line << endl;
        }
    }
    inv.close();
    if (!inv.is_open())
    {
        cout << "file closed" << endl;
    }
}

int main()
{
    Manger manger1(1,"123456789"), manger2, manger3;

   

    string line;
    int cho = 0;
    bool cycle = true;

    cout << "hello to the stor" << "\n" << "if u are a manger or employee press 1" << "\n" << "we have :" << endl;
    cin >> cho;

    if (cho == 1)
    {
        cout << "hello to the system" << "\n" << "if ur a manger press 1 , employee press 2" << endl;
        cin >> cho;
        
        bool temp = true;
        int idtemp{};
        string passtemp;
        while (cycle == true)
            switch (cho)
            {
            case 1:
                cout << "do u want to creat press 1 and if u want to login by enter the id and the password press 2" << endl;
                cin >> cho;
                if (cho == 1)
                {

                    if (!manger1.getIDmanger())
                    {
                        manger1.createmanger();
                        cycle = false;
                    }
                    else if (!manger2.getIDmanger())
                    {
                        manger2.createmanger();
                        cycle = false;
                    }
                    else if (!manger3.getIDmanger())
                    {
                        manger3.createmanger();
                        cycle = false;
                    }
                    else
                    {
                        cout << "the manger crow is full" << endl;

                    }
                }
                break;

            case 2:
                cout << "login pls" << endl;
                cin >> idtemp >> passtemp;
                if (!manger1.getIDmanger())
                {
                    manger1.loginmanger(idtemp, passtemp);
                    mangermenu();
                    cycle = false;

                }
                else if (!manger2.getIDmanger())
                {
                    manger2.loginmanger(idtemp, passtemp);
                    mangermenu();
                    cycle = false;
                }
                else if (!manger3.getIDmanger())
                {
                    manger3.loginmanger(idtemp, passtemp);
                    mangermenu();
                    cycle = false;
                }
                break;
            }
        
        
    }
    return 0;
}
