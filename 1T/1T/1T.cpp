#include <iostream>
using namespace std;
string a, b;

string add(string a, string b) {
    string result = ""; 

    int temp = 0;

    int size_a = a.size() - 1;
    int size_b = b.size() - 1;

    while (size_a >= 0 || size_b >= 0 || temp == 1) 
    {
        if (size_a >= 0)
        { 
          temp += a[size_a] - '0';
        }
        else
        {
            temp += 0; }

        if (size_b >= 0)
        {
            temp += b[size_b] - '0'; }
        else
        {
            temp += 0; }
        result = char(temp % 2 + '0') + result;

        temp /= 2;
        size_a--; size_b--;

    }
    return result;
}



int main()
{
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << add(a, b) << endl;
}