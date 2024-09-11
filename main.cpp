#include <iostream>
#include <fstream>
#include <string>
#include "login.h"

using namespace std;

int main()
{
    
    string ans;
    cout << "Are you registered? (y/n)"<<"\n"; //user response is y=yes or n=no
    cin >> ans;

    string username;
    string password;
    if(ans=="y"){

        cout << "Please enter your username: ";
        cin >> username; //stores input in username


        cout << "Please enter your password: ";
        cin >> password; //stores input in password

    logincheck(username,password); //calls logincheck function to verify user login details
    }else{
        cout << "Please enter your username: ";
        cin >> username; //stores input in username

        cout << "Please enter your password: ";
        cin >> password; //stores input in password

        registerUser(username, password);
    }
    
    string search;
    cout << "What book would you like to look for?: "; 
    cin >> search;
    cout << "Results for "<< search ;
    return 0;
}