#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>



class Employee
{

private:
	int ID;
	char password[10];

public:
	Employee();
	Employee(int id, std::string pass);
	~Employee();
	bool loginemployee(int id,std::string pass);
	int getempoyeeID();
	void veiwitems();
	void casher();
};
#endif
