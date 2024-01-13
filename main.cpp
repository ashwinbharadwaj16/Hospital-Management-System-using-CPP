#include<iostream>
using namespace std;
class hosp
{
protected:
char hn[20],to[20],dn[20];
public:
void get()
{
cout<<"\n Hospital's Details";
cout<<"\n\n Enter the hospital's name:";
cin>>hn;
cout<<"\n Enter the town's name:";
cin>>to;
cout<<"\n Enter the Doctor's name:";
cin>>dn;
}
void put()
{
cout<<"Hospital Management System\n";
cout<<"**********\n";
cout<<"\n\t\t\t"<<hn;
cout<<"\n\t\t\t"<<to;
cout<<"\n\t\t\t"<<dn<<" MBBS";
}
};
class inpt:virtual public hosp
{
protected:
char pn[10][20],dis[10][20];
int n,i,rom[10],d[10];
public:
void getpat()
{
cout<<"\n In-Patient's Details";
cout<<"\n _______";
cout<<"\n\n Enter the no.of.patient's admitted:\n";
cin>>n;
for(i=0;i<n;i++)
{
cout<<(1+i)<<"Patient's name:";
cin>>pn[i];
cout<<"\n Affected by:";
cin>>dis[i];
cout<<"\n Room no:";
cin>>rom[i];
cout<<"\n No.of.days stayed:";
cin>>d[i];
}
}
void putpat()
{
cout<<"\n In-patient's Details";
cout<<"\n _______";
cout<<"\n\n No.of.patient's:"<<n;
for(int i=0;i<n;i++)
{
cout<<"\n name:"<<pn[i];
cout<<"\n Affected by:"<<dis[i];
cout<<"\n No.of.days admitted:"<<d[i];
cout<<"\n The amount to be paid:Rs."<<d[i]*250;
}
}
};
class outpt:virtual public hosp
{
protected:
char name[10][20],odis[10][20];
int n1,j,t[10];
public:
void getpt()
{
cout<<"\n Outpatient's Details";
cout<<"\n ^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n Enter the no.of.outpatient's:\n";
cin>>n1;
for(j=0;j<n1;j++)
{
cout<<(1+j)<<" Patient's name:";
cin>>name[j];
cout<<"\n Token no:";
cin>>t[j];
cout<<"\n Affected by:";
cin>>odis[j];
}
}
void putpt()
{
cout<<"\n Outpatient's Details";
cout<<"\n ^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n No.of.outpatient's:"<<n1;
for(int j=0;j<n1;j++)
{
cout<<"\n Name:"<<name[j];
cout<<"\n Token no:"<<t[j];
cout<<"\n Affected by:"<<odis[j];
cout<<"\n Amount to be paid Rs.100";
}
}
};
class display:public outpt,public inpt
{
public:
void result()
{
put();
putpat();
putpt();
}
};
int main()
{
cout<<"\n Hospital Management Using Hybrid Inheritance";
cout<<"\n ****************";
display x; //Object declaration for the derived class "display"
x.get(); //Get the details of Doctors
x.getpat(); // Get In-Patient Details
x.getpt(); // Get Out-Patient Details
x.result(); //Display All details about the Hospital
return 0;
}


