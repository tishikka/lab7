#include <iostream>
#include <string>
#include <algorithm>
#include "calculator.h"

int calculator(std::string str){
    str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
    int result=0;
    int sign=1;
    for (int i=0; i<(int)str.size(); ++i){   
        if (str[i]==')'){
            sign=1;
        }
        else if (str[i]=='-'){
            if (str[i+1]=='('){
                sign=-1;
            }
            else {
                result-=sign*(str[i+1]-'0');
                i++;
            }
        }
        else if ('0'<=str[i] && str[i]<='9'){
            result+=sign*(str[i]-'0');
        } 
        else {
            continue;
        }
    }
    return result;
}