#include<iostream>
 #include<string.h>
using namespace std;
class student


 
{
	public:
	int rollno;
	char name[15];
	void getdata(int x, char y[])
	{
	 rollno=x;
	 strcpy(name,y);
}
 void putdata()
 {
 	cout<<"   the rollno is ="<<rollno<<endl;
 	cout<<"   the name is ="<<name<<endl;
 	 
 }
};

main()
{
	 
	class student obj[5];
	int r;
	char n[15];
	int i;
	for(i=1;i<=5;i++)
	{
	cout<<"enter the rollno,name =";
	cin>>r>>n;
	 
	obj[i].getdata(r,n);
	}
	cout<<"\n \n";
	for(i=1;i<=5;i++)
	{
		obj[i].putdata();
	}
 
}
