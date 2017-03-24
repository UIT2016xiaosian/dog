// dog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
using namespace std;
#include <iostream>
#include <string>
class People
{
public:
	string name;
	string xingbie;
	int  age;
	People()
	{}
	People(string a, string b, int c)
	{
		name = a;
		xingbie = b;
		age = c;
	}
	~People()
	{}
	void setName(string name)
	{
		this->name = name;
	}
	void setNianji(string nianji)
	{
		this->xingbie = nianji;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void outdoor()
	{
		cout << "外出" << endl;
	}
	void gohome()
	{
		cout << "到家了" << endl;
	}
};
class Student:public People
{
private:
	string nianji;
public:
	Student()
	{}
	Student(string a, string b, int c) :People(a, b, c){}
	void setNianji(string nianji)
	{
		this->nianji = nianji;
	}
	void shangx()
	{
		cout << "上学" << endl;
	}
	void fangx()
	{
		cout << "放学" << endl;
	}
	int work()
	{
		cout << "mimikko写作业了" << endl;
	}
};
class Teacher:public People
{
private:
	string kemu;
public:
	void setKemu(string kemu)
	{

	}
	int homework()
	{
		cout << "作业" << endl;
	}
};
class heiban
{
	void work()
	{

	}
};
void  main()
{
	Student dogls("f","女",17);
	Teacher Eteacher;
	



	dogls.shangx();
	dogls.fangx();
	dogls.gohome();

}