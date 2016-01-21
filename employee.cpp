/*职员档案管理程序 
设计一个简单的雇员档案管理程序。
其中把雇员的档案数据和对这些数据的设置、修改、删除等操作组成一个程序模块。
程序通过这个模块
----类的公有部分对档案数据进行处理，实现了面向对象程序设计的“封装”功能。
*/


#include <iostream>

using namespace std;

#define MaxCount 30
typedef struct EmployeeCount
{
	int count;
	char *name[MaxCount];
}EmployeeCount;
class Employee
{
public:
	Employee()
	{
		cout << "No Employee in company." << endl;
	}
	Employee(char *name,int empid,char *sex,char *position):Name(name),EmpId(empid),Sex(sex),Position(position)
	{
		em++;
/*		int pos;
		pos = em.count;


		em.name[pos] = name;
*/		WhetherFire = false;
	}
	int EmployeeSSalary(int salary);
	int SerachEmployeeSSalary()
	{
		return Salary;
	}


	bool FireEmloyee();
	void SerachEmployee(char *name)
	{
		if(strcmp(Name,name) == 0)
		{
			if(WhetherFire == false)
			{
				cout << "Name:" << Name << "|id:" << EmpId << "|Position:" << Position << endl; 
			}
			else
			{
				cout << "This employee is fired." << endl;
			}
		}

	}
	void ChangePositon(char *newposition,int newempid)
	{
		if(WhetherFire == false)
		{
			Position = newposition;
			EmpId = newempid;
		}
		else
		{
			cout << "Error: ChangePositon Failed." << endl;
		}
	}
	void fun()
	{
		cout << em << endl;
	}


private:
	char *Name;
	int  EmpId;
	char *Sex;
	int Salary;
	char *Position;
	bool WhetherFire;
	static int em;
};

int Employee :: em = 0;




int Employee :: EmployeeSSalary(int salary)
{
	if(WhetherFire == false)
	{
		Salary = salary;		
	}
	else
	{
		cout << "Error: the employee not found" << endl;
	}
}
bool Employee :: FireEmloyee()
{
	WhetherFire = true;
	return true;
}

int main(int argc, char const *argv[])
{
	Employee em1;
	Employee em2("fangzhenhua",001,"female","CEO");
	em2.EmployeeSSalary(3600);
	cout << em2.SerachEmployeeSSalary() << endl;
	em2.SerachEmployee("fangzhenhua");
	// em2.FireEmloyee();
	em2.SerachEmployee("fangzhenhua");
	em2.ChangePositon("CTO",9527);
	em2.SerachEmployee("fangzhenhua");
	em2.fun();
	Employee em3("lihaomin",002,"female","CEO2");
	em2.fun();
	em3.fun();

	return 0;
}

