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
	 	int i;
	class student obj[5];
	class student *p[5];
     for(i=1;i<=5;i++)
     
   {
	p[i]=&obj[i];
}
	int r;
	char n[15];

	for(i=1;i<=5;i++)
	{
	cout<<"enter the rollno,name =";
	cin>>r>>n;
	 
	p[i]->getdata(r,n);
	}
	cout<<"\n \n";
	for(i=1;i<=5;i++)
	{
		p[i]->putdata();
	}
 
}
