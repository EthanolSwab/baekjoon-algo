#include <string>
#include <vector>

using namespace std;

//방문 여부를 확인하는 bool 벡터
vector<bool> visited;
void dfs(const vector<vector<int>>& network, int node){
    visited[node] = true; //방문한 배열을 true로 만들어줌
    
    for(int i = 0; i<network[node].size(); i++){
        if(network[node][i] && !visited[i]) //1이고, 아직 방문하지 않았다면
            dfs(network, i);
    }
}

int solution(int n, vector<vector<int>> computers) {
    visited = vector<bool>(computers.size(), false); //visited 배열을 computers.size()로 resize() 후, false로 초기화
    
    int networkCount = 0;
    
    for(int i = 0; i<computers.size(); i++){
        if(!visited[i]){ //아직 배열을 방문하지 않았다면, dfs 실행
            dfs(computers, i);
            networkCount ++;
        }
    }
    
    return networkCount;
}