/*
CLASS (OWN PROBLEM)

INOCANDO

*/

// HEADER
#include <iostream>
#include <cmath>

using namespace std;

class Data{
//INPUTS
    int input;
    int input2;
    int input3;
   
   
public:
    void Display();
    int Ave();
    int Expo();
    int Cal_square();
    int Cal();
    int Atm();
    int Cont();
};

//EXECUTION
int main(void){
   
    Data scan;
    scan.Display();
   
    return 0;
}

// FUNCTIONS //



// DISPLAY FUNCTION

void Data::Display(){
   
do {
       
        cout << "|=============================|" << endl;
        cout << "| M E N U  D R I V E N        |" << endl;
        cout << "|=============================|" << endl;
        cout << " " << endl;
        cout << "================================================" << endl;
        cout << "(1) CALCULATES THE AVERAGE OF YOUR GIVEN GRADE   " << endl;
        cout << "(2) CALCULATES THE EXPONENT                     " << endl;
        cout << "(3) CALCULATES THE SQUARE ROOT                  " << endl;
        cout << "(4) MENU DRIVEN CALCULATOR                      " << endl;
        cout << "(5) AUTOMATED TELLER MACHINE (ATM)               " << endl;
        cout << "================================================"<< endl;
        cout << "ENTER CHOICE: ";
        cin >> input;
        while (cin.fail() || input <= -1 || input >= 6) {
            cout << "INVALID INPUT, TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;
        }
        switch (input) {
        case 1:
            Ave();
            break;

        case 2:
            Expo();
            break;

        case 3:
            Cal_square();
            break;

        case 4:
            Cal();
            break;
        case 5:
            Atm();
            break;
        }
    } while (false);
}

// Average Calculator Function

int Data::Ave() {
    float result = 0 ;
    double average = 0;
    do {
        cout << "\n=======================================" << endl;
        cout << "         GRADING SYSTEM" << endl;
        cout << "ENTER NUMBER OF GRADE PER SUBJECTS: ";
        cout << "\n=======================================" << endl;
        cout << "INPUT NUMBER OF SUBJECTS: ";
        cin >> input;
        while (cin.fail() ||input <= -1 || input == 0) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;

        }
        while (input >= 6) {
            cin.ignore();
            cout << "MAX SUBJECT IS ONLY (5) , PLEASE TRY AGAIN: ";
            cin >> input;
        }


        for (int a = 0; a < input; a++) {
            cout << "\nENTER #" << a + 1 << " GRADE: ";


            cin >> input2;
            while (cin.fail()) {
                cout << "INVALID INPUT! , PLEASE TRY AGAIN: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input2;
            }

            while (input2 <= 59) {

                cout << "GRADE ONLY CONSIST OF (60 +) ABOVE GRADE: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input2;

            }


            result += input2;
            average = result / input;

        }
        cout << "===============================" << endl;
        cout << "YOUR GENERAL AVERAGE IS : " << average << endl;
        cout << "==============================" << endl;

        while (average <= 75 || average <= 79) {
            cout << "3 \n TRY NEXT TIME :(" << endl;
            cin.clear();
            cin.ignore(255, '\n');
            Cont();
        }

        while (average == 80 || average <= 87) {
            cout << "2 \n GOOD JOB!" << endl;
            Cont();
        }
        while (average == 88 || average <= 99) {
            cout << "1 \n YOU'RE DA GOAT" << endl;
            Cont();
        }
        while (average >= 1000) {
            cout << "NAOL EINSTEIN!" << endl;
            Cont();
        }
    } while (false);
    return average;
}


// Exponent Calculation Function

int Data::Expo(){
   
    float result;
do {
       
        cout << "_______________________" << endl;
        cout << " EXPONENT   CALCULATOR " << endl;
        cout << "_______________________" << endl;
        cout << "\n";
        cout << "(NEGATIVE NUMBERS SUCH AS -1 AND SO ON WITH NEGATIVE NUMBERS IS CONSIDERED)" << endl;
        cout << "ENTER NUMBER: ";
        cin >> input;
        while (cin.fail()) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;
        }
        cout << "ENTER EXPONENT: ";
        cin >> input2;

        while (cin.fail()) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input2;
        }


        result = pow(input, input2);
        cout << " •••=======•••" << endl;
        cout << "THE RESULT IS: " << result << endl;
        cout << " •••=======•••" << endl;

        Cont();
    } while (false);
return result;
}


// Square root Calculator Function

int Data:: Cal_square(){
    float result;
     do {
       
        cout << "________________________" << endl;
        cout << " SQUARE ROOT CALCULATOR" << endl;
        cout << "________________________" << endl;
        cout << "\n";
        cout << "(NEGATIVE NUMBERS SUCH AS -1 AND SO ON WITH NEGATIVE NUMBERS IS (NOT!) CONSIDERED)" << endl;
        cout << "ENTER NUMBER: ";
        cin >> input;
        while (cin.fail() || input <= -1) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;


        }

        result = sqrt(input);
        cout << " •••=======•••" << endl;
        cout << "THE ANSWER IS: " << result << endl;
        cout << " •••=======•••" << endl;

        Cont();


    } while (false);
   
    return result;
}

// M.D.A.S CALCULATOR

int Data::Cal(){
    float result;
 do {
        cout << "========================" << endl;
        cout << " MENU DRIVEN CALCULATOR" << endl;
        cout << "________________________" << endl;
        cout << " (1) ADDITION" << endl;
        cout << " (2) SUBTRACTION" << endl;
        cout << " (3) MULTIPLICATION" << endl;
        cout << " (4) DIVISION" << endl;
        cout << "========================" << endl;
        cout << "ENTER CHOICE: ";
        cin >> input;
        while (cin.fail() || input <= -1 || input == 0 || input >= 5) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;

        }
        switch (input) {

        case 1:
            cout << "YOU'VE CHOOSED ADDITION!" << endl;
            cout << "ENTER FIRST NUMBER: ";
            cin >> input2;
            while (cin.fail() || input2 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input2;


            }
            cout << "ENTER SECOND NUMBER: ";
            cin >> input3;
            while (cin.fail() || input3 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input3;


            }
            result = input2 + input3;
            cout << "••••••••••==================••••••••••" << endl;
            cout << "THE SUM OF " << input2 << "+ " << input3 << " IS EQUAL TO: " << result << endl;
            cout << "••••••••••==================••••••••••" << endl;
            Cont();
            break;

        case 2:
            cout << "YOU'VE CHOOSEN SUBTRACTION!" << endl;
            cout << "ENTER FIRST NUMBER: ";
            cin >> input2;
            while (cin.fail() || input2 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input2;



            }
            cout << "ENTER SECOND NUMBER: ";
            cin >> input3;
            while (cin.fail() || input3 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input3;


            }
            result = input2 + input3;
            cout << "••••••••••==================••••••••••" << endl;
            cout << "THE DIFFERENCE OF " << input2 << "- " << input3 << " IS EQUAL TO: " << result << endl;
            cout << "••••••••••==================••••••••••" << endl;
            Cont();
            break;

        case 3:
            cout << "YOU'VE CHOOSEN MULTIPLICATION!" << endl;
            cout << "ENTER FIRST NUMBER: ";
            cin >> input2;
            while (cin.fail() || input2 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input2;



            }
            cout << "ENTER SECOND NUMBER: ";
            cin >> input3;
            while (cin.fail() || input3 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input3;


            }
            result = input2 * input3;
            cout << "••••••••••==================••••••••••" << endl;
            cout << "THE PRODUCT OF " << input2 << "x " << input3 << " IS EQUAL TO: " << result << endl;
            cout << "••••••••••==================••••••••••" << endl;
            Cont();
            break;

        case 4:
            cout << "YOU'VE CHOOSEN DIVISION!" << endl;
            cout << "ENTER FIRST NUMBER: ";
            cin >> input2;
            while (cin.fail() || input2 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input2;



            }
            cout << "ENTER SECOND NUMBER: ";
            cin >> input3;
            while (cin.fail() || input3 <= -1) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input3;


            }
            while(input3 == 0){
                cout<<"CANNOT BE DIVISIBLE BY ZERO!"<<endl;
                cout<<"ENTER SECOND NUMBER: ";
                cin.clear();
                cin.ignore(255,'\n');
                cin >> input3;
            }
            result = input2 / input3;
            cout << "••••••••••==================••••••••••" << endl;
            cout << "THE QUOTIENT OF " << input2 << "/ " << input3 << " IS EQUAL TO: " << result << endl;
            cout << "••••••••••==================••••••••••" << endl;
            Cont();
            break;
        }

    } while (false);
return result;
}


// ATM FUNCTION

int Data:: Atm(){
   
string reg_pass;
string pass;
double savings = 0;
double investment = 0;
double deposit, withdraw, interest;

 do {
       
        cout << "========================" << endl;
        cout << "   WELCOME TO MY ATM" << endl;
        cout << "========================" << endl;
        cout << "REGISTER PASSWORD: ";
        cin >> reg_pass;
        cout << "THANK YOU FOR REGISTERING...\nLOGGING IN!" << endl;
        cout<<""<<endl;
       

        cout << "ENTER PASSWORD: ";
        cin >> pass;

        while (pass != reg_pass) {

            cout << "WRONG PASSWORD!, TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> pass;

        }
            atm:
            cout << "CURRENT SAVINGS or MONEY IN ATM: $" << savings << endl;
            cout << "|==============================|" << endl;
            cout << "|  WELCOME TO BANKO DE ESPAÑA  |" << endl;
            cout << "|==============================|" << endl;
            cout << "| (1) SAVINGS    || (2) DEPOSIT|" << endl;
            cout << "| (3) WITHDRAW   || (4) DISPLAY|" << endl;
            cout << "|==============================|" << endl;
            cout << "ENTER OPTION: ";
            cin >> input;
             
               
            while (cin.fail() || input <= -1 || input >= 5) {
                cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255, '\n');
                cin >> input;
            }

            switch (input) {

             case 1:
            cout << "Your current savings balance is $" << savings << endl;
            cout<<"PRESS 1 TO CONTINUE ATM , PRESS 2 TO GO BACK TO MENU: ";
            cin >> input2;
            while(cin.fail() || input2 <=-1 || input2 == 0 ||input2 >=3 ){
                cout<<"INVALID INPUT PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255,'\n');
                cin >> input2;
               
               
            }
            while(input2 == 1){
                   
                    goto atm;
                }
                while(input2 == 2){
                    Display();
                }
            break;
         case 2:
            cout << "ENTER AMOUNT TO DEPOSIT: ";
            cin >> deposit;
            while(cin.fail() || deposit <=-1 ){
                cout<<"INVALID AMOUNT TO DEPOSIT, TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255,'\n');
                cin>> deposit;
            }
            if (deposit > 0) {
               savings += deposit;
            }
            cout<<"PRESS 1 TO CONTINUE ATM , PRESS 2 TO GO BACK TO MENU: ";
            cin >> input2;
            while(cin.fail() || input2 <=-1 || input2 == 0 ||input2 >=3 ){
                cout<<"INVALID INPUT PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255,'\n');
                cin >> input2;
               
               
            }
            while(input2 == 1){
                   
                    goto atm;
                }
                while(input2 == 2){
                    Display();
                }
            break;
         case 3:
            cout << "ENTER AMOUNT TO WITHDRAW: ";
            cin >> withdraw;
            while(cin.fail() ||savings == 0 ||withdraw <=-1 || withdraw > savings){
                cout<<"YOU DON'T HAVE BALANCE YET TO OUR ATM , DO YOU WANT TO DEPOSIT? , PRESS 1 TO DEPOSIT 2 TO DISPLAY MENU: ";
                cin >> input3;
                if(input3 == 1){
                    goto atm;
                }
                else if(input3 == 2){
                    Display();
                }
            }
           
           
               savings -= withdraw;
           
            cout<<"PRESS 1 TO CONTINUE ATM , PRESS 2 TO GO BACK TO MENU: ";
            cin >> input2;
            while(cin.fail() || input2 <=-1 || input2 == 0 ||input2 >=3 ){
                cout<<"INVALID INPUT PLEASE TRY AGAIN!: ";
                cin.clear();
                cin.ignore(255,'\n');
                cin >> input2;
               
               
            }
            while(input2 == 1){
                   
                    goto atm;
                }
                while(input2 == 2){
                    Display();
                }
            break;
         case 4:
            Display();
            break;
      }
   } while (false);

   return 0;
}

// CONTINUE AND TERMINATION FUNCTION

int Data::Cont(){
    do {
       
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";
        cin >> input;
        while (cin.fail() || input <= -1 || input >= 2) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;
        }
        while (input == 0) {
            cin.ignore();
            cout << "TERMINATED! ";
        }
        while (input == 1) {
            Display();
        }
    } while (false);
    return 0;
}

