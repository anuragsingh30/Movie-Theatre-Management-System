#include <iostream>
using namespace std;

class ticket
{
public:
  string name;
  int time;
  int no;
  void friend showDetails();
} t;

class Payment : public ticket
{
private:
  int x, result;

public:
  int paymentAmount(int n)
  {
    cout << "Type of tickets:" << endl;
    cout << "1.basic \t 2.premim" << endl;
    cin >> x;
    if (x == 1)
    {
      result = 100 * n;
    }
    else if (x == 2)
    {
      result = 200 * n;
    }
    else
    {
      cout << "invlaid";
    }
    return (result);
  }
  void friend showDetails();
  void friend ticketDisplay();
} p;

void showDetails()
{
  cout << "Name: " << t.name << endl;
  cout << "Number: " << t.no << endl;
  if (p.x == 1)
  {
    cout << "Seat: Basic" << endl;
  }
  else
  {
    cout << "Seat: Premium" << endl;
  }
  cout << "Amount payable: " << p.result << endl;
}

void ticketDisplay(){
  cout << "\n\nYour ticket is here: ";
    cout << "\n--------TICKET-------\n"
         << endl;
    cout << "\nName 		:" << t.name;
    cout << "\nContact No	:" << t.no;
    cout << "\nSeats        :";
    if (p.x == 1)
    {
        cout << "\tbasic";
    }
    else
    {
        cout << "\tpremium";
    }
    cout << "\nShow timings 	:";
    switch (t.time)
    {
    case 1:
        cout << "08:00";
        break;
    case 2:
        cout << "13:00";
        break;
    case 3:
        cout << "14:50";
        break;
    case 4:
        cout << "18:00";
        break;
    case 5:
        cout << "21:00";
        break;
    case 6:
        cout << "01:00";
        break;
    }
    cout << "\nThank you! Enjoy your film!";

}

int main()
{
  int n, x, b;
  cout<<"Enter name";
  cin>>t.name;
  cout<<"Enter number";
  cin>>t.no;
  cout << "Enter Numbers of Ticket do You Want To Purchase:" << endl;
  cin >> n;
  cout << "The amount payable is : " << p.paymentAmount(n) << endl;

  cout << "1.NET BANKING :" << endl;
  cout << "2.CREDIT CARD :" << endl;
  cout << "3.DEBIT CARD  :" << endl;
  cout << "4.UPI         :" << endl;
  cout << "Enter your choice:" << endl;
  cin >> b;

  switch (b)
  {
  case 1:
  {
    char c;
    showDetails();
    cout << "Do you want to continue?(y/n)" << endl;
    cin >> c;
    if (c == 'y')
    {
      cout<<"Payment Successful!"<<endl;
      ticketDisplay();
    }
    else
    {
      break;
    }
    break;
  }
  case 2:
  {
    char c;
    showDetails();
    cout << "Do you want to continue?(y/n)" << endl;
    cin >> c;
    if (c == 'y')
    {
      cout<<"Payment Successful!"<<endl;
      ticketDisplay();
    }
    else
    {
      break;
    }
    break;
  }
  case 3:
  {
    char c;
    showDetails();
    cout << "Do you want to continue?(y/n)" << endl;
    cin >> c;
    if (c == 'y')
    {
      cout<<"Payment Successful!"<<endl;
      ticketDisplay();
    }
    else
    {
      break;
    }
    break;
  }
  case 4:
  {
    char c;
    showDetails();
    cout << "Do you want to continue?(y/n)" << endl;
    cin >> c;
    if (c == 'y')
    {
      cout<<"Payment Successful!"<<endl;
      ticketDisplay();
    }
    else
    {
      break;
    }
    break;
  }
  }

  return 0;
}
