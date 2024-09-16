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

        bool check = logincheck(username,password); //calls logincheck function to verify user login details
        if(!check){
            cout<<"exiting program due to incorrect login";
            return 0;//exit the program
        }
    }else{
        cout << "Please enter your username: ";
        cin >> username; //stores input in username

        cout << "Please enter your password: ";
        cin >> password; //stores input in password

        bool login_success = registerUser(username, password); //checks if registration is successful
        if(!login_success){
            cout<<"exiting program due to existing username";
            return 0; //exits program if registration is unsuccessful
        }
    }
    
    string search;
    cout << "What book would you like to look for?: "; 
    cin >> search;
    cout << "Results for "<< search ;
    return 0;
}