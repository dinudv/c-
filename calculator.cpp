#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    
    cout << "Enter a number: ";  
    cin >> num1;
    cin.clear();
    cin.ignore(1000, '\n');
    
    cout << "Enter a second number: ";  
    cin >> num2;
    
    int sum = num1 + num2;
    
    cout << "The sum is: " << sum;  
}
