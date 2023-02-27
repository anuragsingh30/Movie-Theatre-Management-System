#include <iostream>
#include <fstream>
#include <stdbool.h>
#include <math.h>
#include <string.h>

using namespace std;

class ticket
{
public:
    string name;
    int time;
    int no;
} t;

class admin
{
public:
    string pass = "adminpassword";
    string uid = "admin1";
    int status;
    int tick;
    void showstatus()
    {
        cout << "Occuppancy is :" << status << "%" << endl;
        cout << "Tickets sold  :" << tick << endl;
    }
} a;

class payment : public ticket 
{
public:
    int amount;
   
    void details()
    {
        cout << "\nName: " << t.name;
        cout << "\nPhone: " << t.no;
    }
    // 
} p;
 

void display()
{
    int b, c, x;
    char ans;
    cout << "The timings for the show are:" << endl;
    cout << "\n1. 0800";
    cout << "\n2. 1300";
    cout << "\n3. 1450";
    cout << "\n4. 1800";
    cout << "\n5. 2100";
    cout << "\n6. 0100 \n"; 
    cout << "\nPlease select the timings: ";
    cin >> t.time;
}    
   


void menu()
{
    int w, n;
    while (true)
    {
        cout << "1. Add films" << endl;
        cout << "2. Show films" << endl;
        cout << "3. Check Status" << endl;
        cout << "4. Update Status" << endl;
        cout << "5. Exit" << endl;
        cout << "choose:" << endl;
        cin >> w;
        switch (w)
        {
        case 1:
        {
            ofstream ofile;
            ofile.open("admin.txt");
            cout << "enter no. of films to add" << endl;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                string movies;
                cout << "enter movies" << endl;
                cin >> movies;
                ofile << movies << endl;
            }
            ofile.close();
            break;
        }
        case 2:
        {
            ifstream ifile;
            ifile.open("admin.txt");
            cout << "The movies are" << endl;
            while (!ifile.eof())
            {
                string movie;
                ifile >> movie;
                cout << movie << endl;
            }
            ifile.close();
            break;
        }
        case 3:
            a.showstatus();
            break;
        case 4:
            cout << "enter current occuppancy" << endl;
            cin >> a.status;
            cout << "enter tickets sold" << endl;
            cin >> a.tick;
            break;
        case 5:
            exit(0);
        }
    }
}

int main()
{
    
    int r;
    string id, pwd;
    cout << "Select your role" << endl;
    cout << "1. Administration  2. Customer" << endl;
    cin >> r;
    if (r == 1)
    {
        cout << "enter user id" << endl;
        cin >> id;
        cout << "enter password" << endl;
        cin >> pwd;
        if (id == a.uid && pwd == a.pass)
        {
            cout << "Logged in" << endl;
            menu();
        }
        else
        {
            cout << "invalid credentials" << endl;
        }
    }
    
}