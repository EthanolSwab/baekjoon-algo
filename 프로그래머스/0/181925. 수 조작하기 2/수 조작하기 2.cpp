#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 0; i< numLog.size()-1;i++){
        int p = numLog[i+1]-numLog[i];
        switch(p){
            case 1:
                answer += "w";
                break;
            case -1:
                answer += "s";
                break;
            case 10:
                answer += "d";
                break;
            case -10:
                answer += "a";
        }
    }
    return answer;
}