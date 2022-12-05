#include <iostream>
#include <string>

using namespace std;

string letters(char c) 
{
    // base case
    if (c == 'A') {
        return "A";
    }
    
    // recursive step
    return letters(c - 1) + c + letters(c - 1);
}

int main() 
{
    cout << letters('D') << endl;
    return 0;
}