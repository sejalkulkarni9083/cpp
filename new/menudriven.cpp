#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Account
{  
private:
        double balance ;
        int id;
        string holderName;
public:
        Account(int b=0,int i=0,string holdernm=" "):balance(b),id(i),holderName(holdernm){}
        friend istream &operator>>(istream &is, Account& acc)
        {
            is >> acc.balance;
            is.ignore();
            getline(is, acc.holderName );
            is >> acc.id;
            is.ignore();
            return is;
        }
    
        friend ostream &operator<<(ostream &os, const Account& acc)
        {
            os << acc.balance<< endl;
            os << acc.holderName << endl;
            os << acc.id << endl;
        
            return os;
        }
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Invalid withdrawal amount or insufficient balance!" << endl;
            }
        }

        void display(){
            cout<<"holdername="<<holderName<<endl;
            cout<<"id="<<id<<endl;
            cout<<"balance="<<balance<<endl;
          
        }
        void serialize(Account account)
        {
            ofstream outFile("bank.txt");
            if (outFile.is_open())
            {   
                outFile <<holderName<<endl;
                outFile << id<<endl;
                outFile << balance<<endl;
                outFile.close();
            }
            else
            {
                cerr << "File error" << endl;
            }
        }
        
        void deserialize(Account& account){
            ifstream infile("bank.txt");
            if (infile.is_open())
            {
                infile >>id;
                infile.ignore(); 
                infile >> balance;
                infile >>holderName;
                infile.close();
            }
            else
            {
                cerr << "File error" << endl;
            }
        }
        static void showMenu(){
            cout<<"Welcome to the bank"<<endl;
            cout<<"---------------------"<<endl;
            cout << "\nChoose an operation"<<endl;
            cout << "1. Deposit"<<endl;
            cout << "2. Withdraw"<<endl;
            cout << "3. Display"<<endl;
            cout << "4. Serialize"<<endl;
            cout << "5. Deserialize"<<endl;
            cout << "6. Exit"<<endl;
            cout<<"---------------------"<<endl;
            cout << "Enter your choice:"<<endl;
            
        }
    };
   int main(){ 
    int choice;
    double amount;
    Account account;
    bool exit=false;

    while(!exit){
         Account::showMenu;
         cin>>choice;
    
    switch (choice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.display();
                break;
            case 4:
                account.serialize(account);
                break;
            case 5:
                account.deserialize(account);
                account.display();  
                exit=true;
                break;

            case 6:
                cout << "Exit" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }
    return 0;   
}
   }