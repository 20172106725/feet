// feet.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int ft,int in);
	~CFeet();
	void display();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::CFeet(int ft, int in)
{
	feet = ft;
	inches = in;
	cout << "���๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
void CFeet::display()
{
	cout << "display" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet:public CFeet
{
public:
	CMyfeet();
	CMyfeet(int ft, int in);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout << "������Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::CMyfeet(int f, int i):CFeet(f,i)
{
	cout << "�����๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "��������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CMyfeet of1(8, 5);
	of1.display();
    return 0;
}

