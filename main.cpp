#include <iostream>
using namespace std;
int main() {

printf("What is your name?");
string name;
cin >> name;
cout << " Hello, " + name << endl;

cout << " What is your Student ID?" << endl;
int StudentId;
cin >> StudentId;
cout << "Hello," + name +". Your ID is: " + to_string(StudentId) << endl;




int a, b;

cout << "Please enter a number" << endl;
cin >> a;
cout << "Please enter a number again" << endl;
cin >> b;

cout << "Sum of these numbers:" + to_string(a+b) << endl;
cout << "Diff of these numbers:" + to_string(abs(b-a)) << endl;
cout << "Prod of these numbers:" + to_string(a*b) << endl;

cout << "*\n"
        "**\n"
        "***\n";






return 0;
}
