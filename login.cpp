#include <iostream>
#include "login.h"
#include <string>
#include <fstream> //to manage files

using namespace std;
string existUser, existPwd; //existing usernames and password inside userindex file

bool logincheck(const string& username, const string& pwd) //function to check if login credentials is validd
{
    ifstream userIndex("data/users.txt");
    

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

bool registerUser(const string& username, const string& pwd){

    ifstream userIndexRead("data/users.txt"); //read mode used for checking data
    if(userIndexRead.is_open()){

        if (userIndexRead.is_open()){
            while(userIndexRead >> existUser >> existPwd){
                if(existUser==username){ //compares username to each one in file
                    cout<<"Username already exists\n";
                    userIndexRead.close(); //closes file
                    return false; //exits earlier if user is found
                }
            }
            userIndexRead.close(); //closes file
        }
        else{
            cerr<<"Error opening file"; //error message if file can't be opened
            return false;
        }
        
    }


    ofstream userIndex("data/users.txt", ios::app); //append data in users.txt
    if(userIndex.is_open()){
        cout<<"Saving details...\n";
        userIndex<<"\n"<<username<< " "<< pwd<<"\n"; //saves uersname and password with a space inbetween them
        userIndex.close(); //closes the file
        cout<<"Registration successful!\n";
        return true; //returns true if registration is successful
    }
    else{
        cerr<<"Error opening file";
        return false; ///returns false if file can't be opened
    }
             
}