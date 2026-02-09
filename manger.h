#ifndef MANGER_H_
#define MANGER_H_

class Manger
{
private:
    int ID = 0;
    char password[10]{};
    static const int limite = 0;
public:
    Manger();
    ~Manger();
    Manger(char password[10]);
    void edititem(int id);
    void editemployee(int id);
    void deleteemployee(int id);
    void deleteitem(int id);
    void viewitem();
    void viewemployee();
    bool loginmanger(int id, char pass[10]);
    void createmanger();
    bool getIDmanger();
};


#endif // !MANGER_H_

