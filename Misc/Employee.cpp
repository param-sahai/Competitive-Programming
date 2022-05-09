#include<iostream>
#include<string.h>
using namespace std;
class Employee{
public:
char empcode[10];
char empname[20];
void get_e()
{
cout<<"Enter the employee's code and name: "<<endl;
cin>>empcode>>empname;
}
void show_e()
{
    cout<<"\nEmployee code: "<<empcode;
    cout<<"\nEmployee name: "<<empname;
}
};
class manager: virtual public Employee{
public:
char designation[10];
int clubdues;
void get_m()
{
cout<<"Enter the employee's designation and clubdues: "<<endl;
cin>>designation>>clubdues;   
}
void show_m(){
    
    cout<<"\nEmployee designation: "<<designation;
    cout<<"\nEmployee clubdues: "<<clubdues;   
}
};
class Scientist: virtual public Employee{
public:
char dname[10];
char publication[10];
void get_s()
{
cout<<"Enter the employee's despartment name and publication: "<<endl;
cin>>dname>>publication;    
}
void show_s()
{
    cout<<"\nEmployee department: "<<dname;
    cout<<"\nEmployee publication: "<<publication;      
}
};
class labourer: public manager,public Scientist{
public:
void get_data()
{
    get_e();
    get_m();
    get_s();
}
void show_data()
{
    show_e();
    show_m();
    show_s();
}
};
int main()
{
    labourer l[10];
    int ch;
    int n;
    do{
    cout<<"\nEnter your choice:\n";
    cout<<"\n1 to accept the details of the Employees";
    cout<<"\n2 to display the details of the Employees";
    cout<<"\n3 to display all the scientist from Chemistry department";
    cout<<"\n4 to EXIT\n\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter the number of Employees: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            l[i].get_data();
        }
        cout<<"DATA SUCCESFULLY SAVED!\n\n";
        break;
        case 2:
        cout<<"---------Employee Details--------";
        for(int i=0;i<n;i++)
        {
            l[i].show_data();
        }
        break;
        case 3:
        cout<<"---------Chemistry department---------";
        for(int i=0;i<n;i++)
        {
            if(stricmp(l[i].dname,"Chemistry")==0){
                l[i].show_data();
            }
        }
        break;
        case 4:
        exit(0);
    }

    }while(ch!=4);
   return 0; 
}