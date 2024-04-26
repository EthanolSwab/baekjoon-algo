#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int tmp = ceil((100.0 -progresses[0])/speeds[0]);
    int cnt = 1;
    
    for(int i = 1; i< progresses.size(); i++){
        int now = ceil((100.0-progresses[i])/speeds[i]);
        if(tmp < now) {
            answer.push_back(cnt); 
            tmp = now;
            cnt = 1;
        }
        else{
            cnt ++;
        }
    }
    answer.push_back(cnt);
    return answer;
}