#include<vector>
#include<queue>
#define MAX 101

using namespace std;

bool visited[MAX][MAX]; //방문 기록용 2차원 배열
int dist[MAX][MAX]; //이동한 기록용 2차원 배열

int x_dir[4] = {-1, 1, 0, 0}; //좌우하상 x축
int y_dir[4] = {0, 0, -1, 1}; //좌우하상 y축

queue<pair<int, int>> q; //탐색 좌표 저장용 queue
void bfs(int cur, vector<vector<int>>& maps){
    
}
int solution(vector<vector<int> > maps){
    int answer = 0;
    int m = maps.size();
    int n = maps[0].size();
    
    q.push({0, 0});
    visited[0][0] = true;
    dist[0][0] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i<4; i++){
            int nx = x + x_dir[i];
            int ny = y + y_dir[i];
            if(nx<0 || nx >=m || ny < 0 || ny >= n)
                continue; //map을 초과할때
            if(visited[nx][ny])
                continue; //이미 방문
            if(maps[nx][ny] == 0)
                continue; //막혀있음
            
            visited[nx][ny] = true;
            q.push({nx, ny});
            dist[nx][ny] = dist[x][y] + 1;
        }
    }
    
    if(dist[m-1][n-1] == 0)
        return -1;
    return dist[m-1][n-1];
}