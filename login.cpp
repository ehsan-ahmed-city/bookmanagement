#include <iostream>
#include "login.h"
#include <string>
#include <fstream> //to manage files

using namespace std;

bool logincheck(const string& username, const string& pwd) //function to check if login credentials is validd
{
    ifstream userIndex("users.txt");
    string existUser, existPwd; //existing usernames and password inside userindex file

    if (userIndex.is_open()){
        cout<<"Opening file...\n"; //telling user that the file is found and is opened
            while(userIndex >> existUser >> existPwd){ //loops through each username and password in file
            if(username==existUser && pwd == existPwd){ //checks if username and password entered match those in the file
                cout<<"Login Successful...\n";
                return true;
            }
        }
    
    cout<<"Username and/or password is incorrect :( \n"; //no username and password match those in file
    return false;
    
    }else{
        cerr<<"Error when opening this file \n"; //error message if file is not found or cannot be opened
        return false;
    }

    
    
}