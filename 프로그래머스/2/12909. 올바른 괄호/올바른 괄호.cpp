#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int tmp = 0;
    bool answer = true;
    for(int i = 0; i< s.size(); i++){
        if(s[i] == '(') tmp ++;
        else{
            tmp --;
            if(tmp < 0) {
                answer = false;
                return answer;
            }
        }
    }
    if(tmp > 0) answer = false;

    return answer;
}