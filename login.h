#ifndef LOGIN_H //check if macro is not defined
#define LOGIN_H //defines macro

#include <string>

bool logincheck(const std:: string& username, const std::string& pwd); //const so no changes
void registerUser(const std:: string& username, const std::string& pwd);

#endif