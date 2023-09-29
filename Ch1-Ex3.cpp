#include <iostream>
#include <string>
using namespace std;

int main() {                          // Denotes main function.
    string userName = "Heather";      // Creates a string function called "userName" and assigns my name to it.
    int age = 18;                     // Creates an integer function called "age" and assigns my age to it.
    string homeTown = "St. Dominick"; // Creates a string function called "homeTown" and assigns the name of my home town to it. 
    cout << "Name: " + userName + "\n" + "Age: " + std::to_string(age) + "\n" + "Hometown: " + homeTown; // Strings everything together. I had to convert age's "int" to "str" and this took ages to figure out.
    return 0;                         // Return statement.
}                                     // Ends main function.
