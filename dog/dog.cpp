// dog.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "���" << endl;
	}
	void gohome()
	{
		cout << "������" << endl;
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
		cout << "��ѧ" << endl;
	}
	void fangx()
	{
		cout << "��ѧ" << endl;
	}
	int work()
	{
		cout << "mimikkoд��ҵ��" << endl;
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
		cout << "��ҵ" << endl;
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
	Student dogls("f","Ů",17);
	Teacher Eteacher;
	



	dogls.shangx();
	dogls.fangx();
	dogls.gohome();

}