#include<iostream>
#include<string>
using namespace std;

string str;

int main(void){
    cin >> str;
    for(int i = 0; i<str.size(); i++){
        if(str[i] >= 'a') str[i] -= 32;
        else str[i] += 32;
        
        cout << str[i];
    }
    
}