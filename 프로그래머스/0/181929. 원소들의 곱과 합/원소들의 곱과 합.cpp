#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int tmp = 1;
    for(int i = 0; i<num_list.size(); i++){
        answer += num_list[i];
        tmp *= num_list[i];
    }
    answer *= answer;
    
   return (answer > tmp)? 1:0;
    
    return answer;
}