#include <iostream>
#include "login.h"
#include <string>
#include <fstream> //to manage files

using namespace std;

bool logincheck(string& username, string& pwd) //function to check if login credentials is validd
{
    ifstream userIndex("users.txt");
    string existUser, existPwd; //existing usernames and password inside userindex file

    if (userIndex.is_open()){
        cout<<"Opening file...\n"; //telling user that the file is found and is opened
        return true;
    }
    else{
        cerr<<"Error when opening this file \n"; //error message if file is not found or cannot be opened
        return false;
    }


    
}