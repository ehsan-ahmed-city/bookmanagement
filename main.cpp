#include <iostream>

using namespace std;

int main()
{
    
    string ans;
    cout << "Are you registered? (y/n)"<<"\n"; //user response is y=yes or n=no
    cin >> ans;

    if(ans=="y"){
        string username;
        cout << "Please enter your username: ";
        cin >> username; //stores input in username

        string password;
        cout << "Please enter your password: ";
        cin >> password; //stores input in password

    //logincheck(username,password)
    }
    
    string search;
    cout << "What book would you like to look for?: "; 
    cin >> search;
    cout << "Results for "<< search ;
    return 0;
}