#include <iostream>

#define MAX_SIZE 50

using namespace std;

// definition of guest class as we are required guest name and seat number

class Guest {

public:

char name[50];

int seatno;

};



// defination of Hall class having function to allote and list guest

class Hall {

public:

       // static member data

static int front, rear;

static Guest allGuest[MAX_SIZE];



       // static member function for alloting the seat to the guest in FIFO order

static int alloteSeat() {

if (rear == (MAX_SIZE - 1)) {

cout<< "Hall is full!";

return 0;

           }



rear++;

cout<< "Enter Guest Name: ";

cin>>allGuest[rear].name;

allGuest[rear].seatno = rear + 1;

return 1;

       }



       // static member function to list the guests with name nad seat number

static void listGuest() {

while(++front <= rear) {

cout<< "\nGuest " <<allGuest[front].name << " is seated on seat S" <<allGuest[front].seatno<< ".";

           }

rear = front = -1;

       }



};



// initlizing the static member data

int Hall::front = -1;

int Hall::rear = -1;

Guest Hall::allGuest[MAX_SIZE] = {};



int main()

{

   // alloting the seat to the guest

   Hall::alloteSeat();

   Hall::alloteSeat();

   Hall::alloteSeat();

   Hall::alloteSeat();



   // listing the guest with seat number

   Hall::listGuest();

return 0;

}

