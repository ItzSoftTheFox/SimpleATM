#include <iostream>
#include <limits>
//Banking program
//deposit, withdraw, show balance

double withdraww(double orgBalance, double widthrawAmount);
double depositt(double orgBalance, double depositAmount);

int main(){
    using namespace std;

    string end;
    double balance = 600.00;
    double widthraw;
    double deposit;
    int action;
    bool on = true;



    cout << "Welcome to the Banking app\n";

    while(on == true){
        cout << "----------Bank----------\n";
        cout << "What action do you want\n" << "1. Widthraw\n2. Deposit\n3. Show balance\n4. END\n";
        cout << ">>>";
        cin >> action;
//------INPUTCHECKER------------------------------------------------------------
        if(cin.fail()){
            // Neplatný vstup (např. písmeno)
            cin.clear(); // resetuje chybu
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignoruj všechno, co zbylo ve vstupním bufferu až do konce řádku

            cout << "\nPleas enter whole number\n\n";
            continue;
        }

        switch (action){
//------WIDTHRAW------------------------------------------------------------            
        case 1:
            cout << "\nHow much do you want to widthraw: ";
            cin >> widthraw;
            cout << "\nYour Balance now: " << balance << "\n\n";
            balance = withdraww(balance, widthraw);
            cout << "Your Balance after: " << balance << "\n\n";
            break;
//------DEPOSIT------------------------------------------------------------
        case 2:
            cout << "\nHow much do you want to deposit: ";
            cin >> deposit;
            cout << "\nYour Balance now: " << balance << "\n\n";
            balance = depositt(balance, deposit);
            cout << "Your Balance after: " << balance << "\n\n";
            break;
//------BALANCE------------------------------------------------------------
        case 3:
            cout << "\nYour balance: " << balance << "\n\n";
            break;
//------EXIT------------------------------------------------------------
        case 4:
            cout << "Are you Sure?? (Y/N)\n";
            getline(cin >> ws, end);

            if (end == "N" || end == "n"){
                break;
            }else if (end == "Y" || end == "y"){
                on = false;
                break;
            }else if(end == "Pretty Sure."){
                cout << "Threw a Thrash Bag, Into a Space\n";
                on = false;
                break;
            }else{
                cout << "\nY or N only please\n";
            }
//------WRONG-NUMBER------------------------------------------------------------        
        default:
        cout << "\nWrong choice\n\n";
            break;
        }
    }
    //------------------------------------------------------------------

    cout << "Thanks for using our program <3";

    return 0;

}

double withdraww(double orgBalance, double widthrawAmount){
    double newBalance;
    newBalance = orgBalance - widthrawAmount;
    
    if(newBalance < 0){
        std::cout << "Insufficient Funds\n\n";
        return orgBalance;
    }else{
        return newBalance;
    }   
}

double depositt(double orgBalance, double depositAmount){
    double newBalance;
    newBalance = orgBalance + depositAmount;

    return newBalance;
}