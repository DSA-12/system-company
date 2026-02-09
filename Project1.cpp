// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "manger.h"

using namespace std;

int main()
{
    Manger manger1, manger2, manger3;
    fstream inv("inv.txt");
    string line;
    int cho = 0;
    bool cycle = true;
    cout << "hello to the stor" << "\n" << "if u are a manger or employee press 1" << "\n" << "we have :" << endl;
    cin >> cho;
    if (cho == 1)
    {
        cout << "hello to the system" << "\n" << "if ur a manger press 1 , employee press 2" << endl;
        cin >> cho;
        while (cycle == true)
            switch (cho)
            {
            case 1:
                int cho = 0;
                bool temp = true;
                cout << "do u want to creat press 1, login press 2" << endl;
                cin >> cho;
                if (cho == 1)
                {

                    if (!manger1.getIDmanger())
                    {
                        manger1.createmanger();

                    }
                    else if (!manger2.getIDmanger())
                    {
                        manger2.createmanger();

                    }
                    else if (!manger3.getIDmanger())
                    {
                        manger3.createmanger();

                    }
                    else
                    {
                        cout << "the manger crow is full" << endl;

                    }
                }break;


            }
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
        return 0;
    }
}
