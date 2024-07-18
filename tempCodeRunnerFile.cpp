// Airline Registration System Project in C++ Programming language 
#include<iostream>
 #include<fstream>  // to handle file operations 
#include<iomanip>  // used for floating point values 
using namespace std;

void mainMenu(); // It is the function prototype 

class Management{

public:

Management(){

mainMenu();

}


};

class Details{
public:

static string name,gender;
int phoneNo;
int age;
string address; // It is the address of the users 
static int customerId;
char a[100];

void information(){
cout<<"\n Enter the customer ID: ";
cin>>customerId;
cout<<"\n Enter the name: ";
cin>>name;
cout<<"\n Enter the age: ";
cin>>age;

cout<<"\n Address : ";
cin>>address;
cout<<"\n Enter the Gender: ";
cin>>gender;
cout<<"Your details are saved with us\n"<<endl;
}

};

int Details::customerId;
string Details:: name;
string Details::gender;

class registration{

public:
static int choice ;
int choice1;
int back;
static float charges;

void flights(){
    // make the array of the flight
string flightN[]={"Dubai","Canada","UK","USA","Australia","India"};
// All these countries show to the users 
for(int i=0;i<9;i++){
cout<<(i+1)<<". flight to "<<flightN[i]<<endl;
}
cout<<"\n Welcome to the Airlines! "<<endl;
cout<<"Press the number of the country of which you want to book the flight: ";
cin>>choice;

switch (choice){
case 1:
{
cout<<"____________________Welcome to Dubai Emirates_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. DUB -498"<<endl;
cout<<"\t 05-07-2024  9:00AM  10hrs  Rs. 20000"<<endl;

cout<<"1. DUB -678"<<endl;
cout<<"\t 06-07-2024  4:00AM  12hrs  Rs. 18000"<<endl;

cout<<"1. DUB -809"<<endl;
cout<<"\t 08-07-2024  8:00AM  9hrs  Rs. 29000"<<endl;

cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=20000;
cout<<"\n You have sucessfully booked the flight DUB-498"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}
else if(choice1==2){
charges=29000;
cout<<"\n You have sucessfully booked the flight DUB-809"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}

else if(choice1==3){
charges=18000;
cout<<"\n You have sucessfully booked the flight DUB-678"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}
else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}

}
case 2:
{
cout<<"____________________Welcome to Canadian Airlines_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. CA -198"<<endl;
cout<<"\t 04-07-2024  9:00AM  10hrs  Rs. 30000"<<endl;

cout<<"1. CA -158"<<endl;
cout<<"\t 06-07-2024  4:00AM  12hrs  Rs. 28000"<<endl;

cout<<"1. CA -208"<<endl;
cout<<"\t 08-07-2024  10:00AM  8hrs  Rs. 49000"<<endl;

cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=30000;
cout<<"\n You have sucessfully booked the flight CA-198"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}
else if(choice1==2){
charges=28000;
cout<<"\n You have sucessfully booked the flight CA-158 "<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}

else if(choice1==3){
charges=49000;
cout<<"\n You have sucessfully booked the flight CA-208"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}
else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}
    
}
case 3:
{

cout<<"____________________Welcome to UK Airways_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. UK -798"<<endl;
cout<<"\t 05-07-2024  10:20AM  11hrs  Rs. 44000"<<endl;



cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=44000;
cout<<"\n You have sucessfully booked the flight UK-789"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}


else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}

}
case 4:
{
cout<<"____________________Welcome to US Airways_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. US -498"<<endl;
cout<<"\t 05-07-2024  9:00AM  10hrs  Rs. 90000"<<endl;

cout<<"1. US -678"<<endl;
cout<<"\t 06-07-2024  4:00AM  12hrs  Rs. 78000"<<endl;


cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=90000;
cout<<"\n You have sucessfully booked the flight US-498"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}
else if(choice1==2){
charges=78000;
cout<<"\n You have sucessfully booked the flight US-678"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}


else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}

}

case 5:{

cout<<"____________________Welcome to Australian Airlines_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. AS -498"<<endl;
cout<<"\t 05-07-2024  9:00AM  10hrs  Rs. 20000"<<endl;

cout<<"1. AS -678"<<endl;
cout<<"\t 06-07-2024  4:00AM  12hrs  Rs. 18000"<<endl;


cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=20000;
cout<<"\n You have sucessfully booked the flight AS-498"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}
else if(choice1==2){
charges=29000;
cout<<"\n You have sucessfully booked the flight AS-809"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}


else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}

}
case 6:{
cout<<"____________________Welcome to European Airlines_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. EU -998"<<endl;
cout<<"\t 05-07-2024  9:00AM  10hrs  Rs. 45000"<<endl;

cout<<"1. EU -607"<<endl;
cout<<"\t 06-07-2024  4:00AM  12hrs  Rs. 58000"<<endl;


cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=45000;
cout<<"\n You have sucessfully booked the flight EU-998"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}
else if(choice1==2){
charges=58000;
cout<<"\n You have sucessfully booked the flight EU-607"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}

else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}

}

case 7:{

cout<<"____________________Welcome to Air India_______________________\n"<<endl;

cout<<"Your comfort is our priority. Enjoy the journey! "<<endl;

cout<<"following are the flights\n"<<endl;

cout<<"1. IND -298"<<endl;
cout<<"\t 05-07-2024  9:00AM  10hrs  Rs. 30000"<<endl;

cout<<"1. IND-678"<<endl;
cout<<"\t 06-07-2024  4:00AM  12hrs  Rs. 29000"<<endl;



cout<<"\n Select the flight you want to book: ";
cin>>choice1;
if(choice1==1){
charges=30000;
cout<<"\n You have sucessfully booked the flight IND-298"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;

}
else if(choice1==2){
charges=29000;
cout<<"\n You have sucessfully booked the flight IND-678"<<endl;
cout<<"You can go back to menu and take the ticket"<<endl;


}

else{
    cout<<"Invalid input , shifting to the previous menu "<<endl;
    flights();
}
cout<<"Press any key to go back to the main menu: "<<endl;
cin>>back;
if(back==1){
    mainMenu();
}
else{
    mainMenu();
}


}
default:
{
cout<<"Invalid Input , shifting you to the main menu !"<<endl;
mainMenu();
break;

}
}

}


};

// we want to reuse the registration into ticket class(Charges, choice )
float registration:: charges;
int registration:: choice;
// In class ticket we used the variable  of both of the classes (Details , registration ) inside the ticket class Using multiple inheritance:
class ticket: public registration,Details
{
public:
void Bill(){
string destination=" ";
  ofstream outf("records.txt");// used to create and write informations of the files  and (outf) is the objects
  {
    
    outf<<"______________XYZ Airlines___________________ "<<endl;
    outf<<"______________Ticket_________________________ "<<endl;
    outf<<"_____________________________________________"<<endl;

    outf<<"Customer ID: "<<Details::customerId<<endl;
    outf<<"Customer Name: "<<Details::name<<endl;
    outf<<"Customer Gender: "<<Details::gender<<endl;
    outf<<"\t Description "<<endl<<endl;

    if(registration::choice==1){
        destination="Dubai";

    }
else if(registration::choice==2){
destination="Canada";

}
else if(registration::choice==3){
destination="UK";

}

else if(registration::choice==4){
destination="USA";

}
else if(registration::choice==5){
destination="Australia";

}
else if(registration::choice==6){
destination="Europe";

}
else if(registration::choice==7){
destination="India";

}

outf<<"Destination \t\t"<<destination<<endl;
outf<<"Flight cost :\t\t"<<registration::charges<<endl;

  }
// Now close the object 
outf.close();

}

void dispBill(){
// here we used the ifstream class to read the varibles 
ifstream ifs("records.txt") ;   // create ifstream object  

if(!ifs){
    cout<<"file error!"<<endl;
}

while(!ifs.eof()){
ifs.getline(a,100);  // getline is used to read content of the file and while loop is used for iterate in that
cout<<a<<endl;

}
ifs.close();


}


};




void mainMenu(){

int lchoice;
int schoice;
int back;

// create some layout to the menu:
cout<<"\t                XYZ Airlines \n "<<endl;
cout<<"\t________________Main Menu__________"<<endl;

cout<<"\t____________________________________"<<endl;
cout<<"\t\t\t\t\t\t\t\t|"<<endl;

// to create a structure asked the user to press the particular functionality 
cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;  // to Customer Details we make Customer class
cout<<"\t|\t Press 2 for Flight Registration        \t|"<<endl;  // For flight registration we make Flight Registration class
cout<<"\t|\t Press 3 for Ticket and Charges         \t|"<<endl;  // similarly make for Tickets and charges we also make class 
cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
cout<<"\t|\t\t\t\t\t\t|"<<endl;
cout<<"\t_______________________________________________________"<<endl;

cout<<"Enter the choice: ";
cin>>lchoice;

Details d;  // make the object of the class 
registration r;
ticket t;

switch(lchoice){

case 1:
{
 cout<<"____________Customers___________\n"<<endl;
d.information();
cout<<"Press any key to go back to Main Menu ";
cin>>back;

if(back==1){
    mainMenu();
}
else{
    mainMenu();
}
break;
}

case 2:
{
cout<<"_________Book a flight using the system______________\n"<<endl;
r.flights();
break;

}

case 3:
cout<<"________GET YOUR TICKET_______\n"<<endl;
t.Bill();

cout<<"Your Ticket is Printed , you can collect it\n"<<endl;
cout<<"Press 1 to display your ticket ";

cin>>back;

if(back==1)
{
t.dispBill();
cout<<"Press any key to go back to main menu: ";
cin>>back;
if(back==1){

    mainMenu();
}
else{
    mainMenu();
}
}
else{
    mainMenu();
}
break;

case 4:
{
    cout<<"\n\n\t______________THANK-YOU__________"<<endl;
    break;
}

default:
{

cout<<"Invalid input , Please try again! "<<endl;
mainMenu();  // so that user trys to main menu 
break; // and after that we put break statement

}

}





}



int main(){

Management Mobj;   // management class the objects 
return 0;
}