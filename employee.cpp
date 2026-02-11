#include "employee.h"
#include "manger.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Employee::Employee()
{
}
Employee::Employee(int id,string pass )
{
}

Employee::~Employee()
{
}

bool Employee::loginemployee(int id,string pass)
{
	if (id == ID && pass == password)
	{
		cout << "wellcome employee " << id << endl;
		return true;
	}
	else
	{
		cout << "wrong password or id " << endl;
		return false;
	}
	
}

int Employee::getempoyeeID()
{
	return 0;
}

void Employee::veiwitems()
{
}

void Employee::casher()
{
}
