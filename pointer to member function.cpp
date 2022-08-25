// pointer to member function#include<iostream>
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
	int rollno;
	char name[18];
	void getdata(int x, char y[])
	{
	rollno=x;
	strcpy(name,y);
}
void putdata()
{
cout<<"rollno is ="<<rollno<<endl;
	cout<<" name is  ="<<name<<endl;
	}
};
main()
{
	class student obj,*p;
	p=&obj;
	void(student::*ptr)(int,char[])=&student::getdata;
(	obj.*ptr)(10,"vivu");
	obj.putdata();
	
	(p->*ptr)(20,"vam");
	p->putdata();
}
