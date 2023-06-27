#include <bits\stdc++.h> 
using namespace std;

bool check_palindrome(string::iterator i,string::iterator j);

int main(void) {
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<check_palindrome(str.begin(),str.end()-1);
    return 0;
}

bool check_palindrome(string::iterator i,string::iterator j) {
    if (i>=j) {
        return true;
    }
    if (*i != *j) {
        return false;
    }
    return check_palindrome(i+1,j-1);
}

