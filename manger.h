#ifndef MANGER_H_
#define MANGER_H_
#include"employee.h"
#include<vector>
#include <string>

using namespace std;

class Manger
{
private:
    int ID = 0;
    string password{};
    vector<Employee> employees;
    static const int limite = 0;
public:
    //manger fuction
    Manger();
    ~Manger();
    Manger(int id,string password);
    bool loginmanger(int id, string pass);
    void createmanger();
    bool getIDmanger();

    //employee fuction
    void viewemployee();
    void editemployee(int id);
    void deleteemployee(int id);
    void creatmployee(int id, string pass);
    
    //items fuction
    void viewitem();
    void edititem(int id);
    void deleteitem(int id);    
};


#endif // !MANGER_H_

