#include <iostream> // includes header files; in this case, cin and cout
using namespace std; // namespaces are to group your code into logical sections --> bad practice, namespaces can clash, however it is ok for now because learning as a beginner

/*
scope:
presidents 
vice presidents
secretary
treasurer
media lead
video lead
*/

int main() // integer is able to hold up to 4 bytes --> up to 9-10 digits of precision 
{
    int youtube;
    youtube = 1;
    youtube = youtube + 1; 
    // youtube + 1 = youtube; NOT THE SAME AS THE ABOVE
    cout << "What is your favorite number? "; 
    cin >> youtube;
    cout << "Your favorite number is " << youtube << endl;
    return 0;
}