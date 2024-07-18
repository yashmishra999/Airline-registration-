#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype
void mainMenu();

class Management {
public:
    Management() {
        mainMenu();
    }
};

class Details {
public:
    static string name, gender;
    int phoneNo;
    int age;
    string address;
    static int customerId;
    char a[100];

    void information() {
        cout << "\n Enter the customer ID: ";
        cin >> customerId;
        cout << "\n Enter the name: ";
        cin >> name;
        cout << "\n Enter the age: ";
        cin >> age;

        cout << "\n Address : ";
        cin >> address;
        cout << "\n Enter the Gender: ";
        cin >> gender;
        cout << "Your details are saved with us\n"
             << endl;
    }
};

// Static member initialization
int Details::customerId;
string Details::name;
string Details::gender;

class Registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights() {
        // Make the array of the flight
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe", "India"};
        // All these countries show to the users
        for (int i = 0; i < 7; i++) {
            cout << (i + 1) << ". flight to " << flightN[i] << endl;
        }
        cout << "\n Welcome to the Airlines! " << endl;
        cout << "Press the number of the country of which you want to book the flight: ";
        cin >> choice;

        // Handle different flight options based on user choice
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

// Static member initialization
float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details {
public:
    void Bill() {
        string destination = "";
        ofstream outf("records.txt");
        if (outf.is_open()) {
            outf << "______________XYZ Airlines___________________ " << endl;
            outf << "______________Ticket_________________________ " << endl;
            outf << "_____________________________________________" << endl;

            outf << "Customer ID: " << Details::customerId << endl;
            outf << "Customer Name: " << Details::name << endl;
            outf << "Customer Gender: " << Details::gender << endl;
            outf << "\t Description " << endl
                 << endl;

            // Determine destination based on user choice
            if (Registration::choice == 1) {
                destination = "Dubai";
            } else if (Registration::choice == 2) {
                destination = "Canada";
            }
            // Fill in other cases for destinations

            outf << "Destination \t\t" << destination << endl;
            outf << "Flight cost :\t\t" << Registration::charges << endl;

            cout << "Your Ticket is Printed , you can collect it" << endl;
        } else {
            cout << "Error: Unable to create the ticket file!" << endl;
        }
        outf.close();
    }

    void dispBill() {
        ifstream ifs("records.txt");
        if (!ifs) {
            cout << "Error: Unable to open ticket file!" << endl;
            return;
        }

        while (!ifs.eof()) {
            ifs.getline(a, 100);
            cout << a << endl;
        }
        ifs.close();
    }
};

// Main menu function
void mainMenu() {
    int lchoice;
    int back;

    cout << "\t                XYZ Airlines \n "
         << endl;
    cout << "\t________________Main Menu__________" << endl;
    cout << "\t____________________________________" << endl;
    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration        \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to Exit                        \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t_______________________________________________________" << endl;

    cout << "Enter the choice: ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice) {
        case 1:
            cout << "_____________Customers____________\n"
                 << endl;
            d.information();
            cout << "Press any key to go back to Main Menu ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;

        case 2:
            cout << "___________Book a flight using the system______________\n"
                 << endl;
            r.flights();
            break;

        case 3:
            cout << "________GET YOUR TICKET_______\n"
                 << endl;
            t.Bill();
            cout << "Press any key to display your ticket ";
            cin >> back;
            if (back == 1) {
                t.dispBill();
            }
            cout << "Press any key to go back to main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;

        case 4:
            cout << "\n\n\t______________THANK-YOU__________" << endl;
            break;

        default:
            cout << "Invalid input , Please try again! " << endl;
            mainMenu();
            break;
    }
}

int main() {
    Management Mobj;
    return 0;
}
