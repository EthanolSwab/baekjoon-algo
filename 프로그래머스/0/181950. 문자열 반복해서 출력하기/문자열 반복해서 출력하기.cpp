#include<iostream>
#include<string>
using namespace std;

string str;
int n;

int main(void){
    cin >> str >> n;
    for (int i = 0; i< n; i++){
        cout << str;
    }
    cout << endl;
    
    return 0;
}