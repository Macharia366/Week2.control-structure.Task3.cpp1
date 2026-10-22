#include <iostream>
#include <string>

using namespace std;

int main () {
   double num1,num2,result;
   char op;

     cout << "=== Ruiru Electronics Calculator ===" << endl;
     cout<<"Enter first NO: "<<endl;
     cin>>num1;
     
     cout<<"Enter operater(+,-,*,/) " <<endl;
     cin>>op;
      
     cout<<"Enter second NO: "<<endl;
     cin>>num2;
     
     switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
            
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
            
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
            
        default:
            cout << "Error: Invalid operator selected. Please use +, -, *, or /." << endl;
            break;
    }
    return 0;
}