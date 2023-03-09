#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
// the max number of accounts will be in accounts Array
const int max_accounts = 10;

// Bank account class 
class BankAccount{
    private:

        string name; // bank user name 
        double balance; // bank user balance 
        int accountNumber; // bank user account number 
    public:
        // constructor 
        BankAccount(string name="", double balance=0.0,int accountNumber=0){
            this->name = name;
            this->balance = balance;
            this->accountNumber = accountNumber;
        }
        // function that return user name 
        string getName() const { return name; }
        // function that return user balance 
        double getBalance() const { return balance; }
        // function that return user account number  
        int getAccountNumber() const { return accountNumber; }
        // function that make deposit over on user balance
        void deposit(double amount){balance += amount;}
        // function that make withdraw from user balance
        bool withdraw(double amount){
            if (amount <= balance)
            {
                balance -= amount;
                return true;
            }
            else{
                cout << "Your balance is not enough" <<endl;
                return false;
            }   
        }
};

// ATM Class 
class ATM{
    private:
        BankAccount accounts[max_accounts]; // bank users array 
        int account_numbers; // the number of accounts in array
        int current_account_index; // user current index and will initialize with -1 
    public:
        // constructor
        ATM(){
           this->account_numbers = 0;
           this->current_account_index =-1; 
        }

       // function that confirm that user card is insert in atm or not  
        void insertCard(int acc_number){
            for (int i = 0; i < account_numbers; i++)
            {
                if (accounts[i].getAccountNumber()==acc_number) 
                {
                    current_account_index=i;
                    cout << "Welcome To You Mr/s "<<accounts[i].getName() << endl;
                    return;
                }
                else{
                    continue;
                    cout << "Invalid Account Number" << endl;
                }
                
            }
            
        }

        // function that confirm that user card is out of atm or not 
        void removeCard(){
            current_account_index = -1;
            cout << "Thank you for using our atm !" << endl;
        }

        // show user balance
        void showBalance(){
            if (current_account_index==-1)
            {
                cout << "Insert Your Account Card First" << endl;
            }
            else{
                cout << "your current balance is "<< accounts[current_account_index].getBalance() << endl;
            }
        }
        
        // function that make deposit over on user balance from atm 
        void deposit(double amount){
            if (current_account_index==-1)
            {
                cout << "Insert Your Account Card First" << endl;
            }
            else{
                accounts[current_account_index].deposit(amount);
                cout <<"Deposit process done sucessfully ";
                cout << "And you current balance is "<< accounts[current_account_index].getBalance() << endl;
            }
            
        }

        // function that make withdraw from user balance from atm
        void withdraw(double amount){
           if (current_account_index==-1)
            {
                cout << "Insert Your Account Card First" << endl;
            }
            else{
                if (accounts[current_account_index].withdraw(amount)==true)
                {
                   cout <<"Withdraw process done sucessfully ";
                  cout << "And you current balance is "<< accounts[current_account_index].getBalance() << endl;
                } 
            } 
        }

        // function that adding new account from bank to atm accounts 
        void AddNewAccount(BankAccount new_account){
            if (account_numbers < max_accounts)
            {
                accounts[account_numbers] = new_account;
                account_numbers++;
            }
            else{
                cout << "You cannot add new account"<<endl;
            }   
        }
};

// controll Screen 
void projectControlScreen(){
    cout<<"+---------------------------------------------+"<<endl;
    cout<<"|      WELCOME TO OUR BANK SYSTEM PROJECT     |"<<endl;
    cout<<"+---------------------------------------------+"<<endl;
    cout<<"|             1. Insert Your Card             |"<<endl;
    cout<<"|             2. Show Balance                 |"<<endl;
    cout<<"|             3. Deposit                      |"<<endl;
    cout<<"|             4. Withdraw                     |"<<endl;
    cout<<"|             5. Remove Your Card             |"<<endl;
    cout<<"|             6. Quit                         |"<<endl;
    cout<<"+---------------------------------------------+"<<endl;
}

int main()
{
    ATM atm;
    // creating 5 users' accounts in Our bank
    BankAccount a1("user_1",1000.0,123345);
    BankAccount a2("user_2",2400.0,222443);
    BankAccount a3("user_3",3000.0,111002);
    BankAccount a4("user_4",1700.0,324431);
    BankAccount a5("user_5",4000.0,990228);
    // adding them into our atm
    atm.AddNewAccount(a1);
    atm.AddNewAccount(a2);
    atm.AddNewAccount(a3);
    atm.AddNewAccount(a4);
    atm.AddNewAccount(a5);
   
    int choice,acc_num;
    double deposit_amount,withdraw_amount;
    do
    {
        projectControlScreen();
        cout<<"Enter Your Choice Please : "; cin >> choice; cout <<endl;
        cout<<"----------------------------------------------"<<endl;
        switch (choice)
        {
        case 1:
            printf("");
            getchar();
            cout<<"Enter Your Account Number Please : "; cin >> acc_num; cout <<endl;
            atm.insertCard(acc_num);
            printf("");
            getchar();
            break;
        case 2:
            printf("");
            getchar();
            atm.showBalance();
            printf("");
            getchar();
            break;
        case 3:
            printf("");
            getchar();
            cout<<"Enter Your Deposit Amount Please : "; cin >> deposit_amount; cout <<endl;
            atm.deposit(deposit_amount);
            printf("");
            getchar();
            break;
        case 4:
            printf("");
            getchar();   
            cout<<"Enter Your Withdraw Amount Please : "; cin >> withdraw_amount; cout <<endl;
            atm.withdraw(withdraw_amount);
            printf("");
            getchar();               
            break;
        case 5:
            printf("");
            getchar();
            atm.removeCard();
            printf("");
            getchar();
            break;
        }
        printf("\npress any key to continue");
        getchar();
        system("cls");
    } while (choice != 6);

    return 0;
}