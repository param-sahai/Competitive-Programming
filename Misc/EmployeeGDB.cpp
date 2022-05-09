#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class employee

{

int ecode;

char name[20];

public:

void get()

{

cout<<"\nEnter EmpCode & Name: \n";

cin>>ecode>>name;

}

void put()

{

cout<<"\n"<<ecode<<"\t\t";

cout<<name<<"\t";

}

};

class manager:virtual public employee

{

char desig[20];

int clubd;

public:

void get_m()

{

cout<<"\nEnter designation & Clubdub:\n ";

cin>>desig>>clubd;

}

void put_m()

{

cout<<desig<<"\t";

cout<<"\t"<<clubd<<"\t";

}

};

class scintist:virtual public employee

{

public:

char dname[20];

char publ[20];

public:

void get_s()

{

cout<<"\nEnter Department name & publication name : \n";

cin>>dname>>publ;

}

void put_s()

{

cout<<"\t"<<dname;

cout<<"\t\t"<<publ;

}

};

class lab: public scintist,public manager

{

public:

void getinfo()

{

get();

get_m();

get_s();

}

void disp()

{

put();

put_m();

put_s();

}

};

int main()

{

int n,m;

char nm[20];

lab l[10];



do

{

cout<<"\n\n\tMENU:\n1.To accept details of employees";

cout<<"\n2.To display the information";

cout<<"\n3.To display all the scientist from Chemistry Department.";

cout<<"\n4.Exit\n";

cout<<"\n\t\tEnter youer choice: ";

cin>>n;

switch(n)

{

case 1:

cout<<"\nHow many employee Record’s: ";

cin>>m;

for(int i=0;i<m;i++)

{

l[i].getinfo();

}

break;

case 2:

cout<<"\n\tEMPLOYEE INFORMATION:\n ";

cout<<"\nEmp_code\tName\tDesignation\tClubdub\tDepartment name\tPublication name\n";

cout<<"=====================================\n";

for(int i=0;i<m;i++)

{

l[i].disp();

cout<<"\n\n";

}

break;

case 3:

cout<<"\n\nEnter Department name: ";

cin>>nm;

for(int i=0;i<m;i++)

{

if(strcmp(l[i].dname,nm)==0)

{

l[i].put();

l[i].put_s();

}

}

break;

case 4:

break;

}

}while(n!=4);

getch();

}