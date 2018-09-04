#include <iostream>
using namespace std;

// Dont worry about it, we shall come to it when discussing functions
int mulplyby3(int num); // function prototype

int main(){
    
    
    //-----------------------------------------------------
    //---------------Variables-----------------------------
    
    //declare variables of integer type
    int x {120};
    int y {130};
    int z;

    //adding numbers and store the result in sum
    z = x + y;
    //print the result
    cout << "The sum is " << z <<endl;  
    
    //------------------------------------------------------
    //-------------Operators and logic----------------------
    
    int p, q;
    int i {10}, j {10};
    p = ++i; //add one to i, store the result back in x
    q = j++; //store the value of j to y then add one to j
    cout << p << endl; //11 the one of ++11
    cout << q <<endl; //10 the one of 10++
    cout <<"\n";


    // Ternary operator
    int big {0};
    int a {5}, b {6};
    big = (a > b) ? a : b;
    cout << big <<endl;

    int won {};
    int A;
    int B;
    cout << "Enter the Variable A:";
    cin >> A;
    cout << "Enter the Variable B:";
    cin >>B;

    won = (A>B)?A:B;

    cout << "Won" << won <<endl;

    cout <<"\n";
    // sizeof operator

    int first{};
    first = sizeof (char); //returns 1
    cout << first <<endl;

    int second{};
    second = sizeof (float); //returns 4
    cout << second <<endl;

    int third {};
    third = sizeof (double); //returns 4
    cout << third << endl;

    int fourth{};
    fourth = sizeof (long); //returns 4
    cout << fourth <<endl;

    int fifth {};
    fifth = sizeof (long long); //returns 4
    cout << fifth <<endl;


    // Strings 
    cout <<"\n";

    string mystring = "This is a string";
    cout << mystring<<endl;
    
    //----------------------------------------------------------------
    //----------------- condition and iteration-----------------------
    
    int m {};
    
    cout << "Enter the number to test:";
    cin >>m; 
    // if statement
    if (m == 100){
        cout << "m is 100" <<endl;
    }
    else {
        cout << "m is not 100"<<endl;
        }
        

 // switch statement
    
     char express;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> express;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    switch (express) 
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2 <<endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2 <<endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2 <<endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2 <<endl;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! operator is not correct";
            break;
    }
    
    //--------------------------------------------------------------------
    //--------------------------Loops-------------------------------------
    
    // for loop in c++
  
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }
    
    cout << "\n" << "\n";
    // while loop in c++ plus
    // initialization expression
    int k = 1;
 
    // test expression
    while (k < 6)
    {
        cout << "Hello World\n";
 
        // update expression
        k++;
    }
    
    cout << "\n" << "\n";
    
  /*  // infinite loop
    
    int inf {};
 
    // This is an infinite for loop as the condition
    // expression is blank
    for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }
     * /
 
    
    /*
    while (inf != 0)
    {
        inf-- ;
        cout << "This loop will run forever.\n";
    }
    */
 
  
    /*
    while (true)
    {
        cout << "This loop will run forever.\n";
    }
    */
    
    // ---------------------------------------------------------------
    // ----------------------Functions--------------------------------
    
    int number, response;
    cout<<"Please enter a number:";
    cin>>number;
    response = mulplyby3(number); //function call
    cout<< "The answer is "<<response <<endl;
    
    return 0;
    
    // We shall build up from here next time!.
    // Nice having your audience
    
    // Big Thanks Mark 
    
    // For further Questions reach me on twitter @okello_mark    
        
    
    }
    
    //multiplyby3 function
    int mulplyby3 (int num)
    {
        int answer;
        //local variable
        answer = 3 * num;
        return (answer);
    }
