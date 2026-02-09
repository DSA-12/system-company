#include <iostream>
#include "manger.h"
#include <string>
using namespace std;

Manger manger1, manger2, manger3;

Manger::Manger()
{
	
	
}

Manger::~Manger()
{
}

Manger::Manger(char password[10])
{
	
}

void Manger::viewitem()
{
}

void Manger::viewemployee()
{
}

bool Manger::loginmanger(int id, char pass[10])
{
	return false;
}

void Manger::createmanger()
{	
	int id;
	string temp{};
	cout << "what the id for the new manger" << endl;
	cin >> id;
	for (int i = 0; i < 3; i++)
	{
		if(id == manger1.ID || id == manger2.ID || id == manger3.ID)
		{
			cout << "this id is taken choose other one " << endl;
			cin >> id;
			
		}
		else
		{
			ID = id;
			cout << "welcome to the store manger ur ID is: " << ID <<endl;
			break;
		}
	}

	cout << "creat the password 10 chars" << endl;
	cin >> temp;
	for (int i = 0; i < temp.length(); i++)
	{
		
		password[i] = temp[i];
		
	}
	cout << "great ur pass word is: ";
	for (int i = 0; i < 10; i++)
	{
		cout << password[i];
	}

}

bool Manger::getIDmanger()
{
	bool temp = false;
	
	if (~ID == 0)
	{
		temp = true;
	}

	return temp;
}




void Manger::edititem(int id)
{
}

void Manger::editemployee(int id)
{
}

void Manger::deleteemployee(int id)
{
}

void Manger::deleteitem(int id)
{
}
