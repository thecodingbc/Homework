/*
https://codebreaker.xyz/problem/milkweed
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;


// step 1) define all the BFS implicit graph required data structure

// char grid & bool grid are standard
char grid[110][110];
bool visited[110][110];


// values given by the Q
int height, width; // graph size
int x, y; // starting vertex


// the milkweed reproduces on 8 directions, so we define 8 pairs to represent the 8 neighbours
int dx[8] = {-1, 0, 0, 1, 1, -1, -1, 1};
int dy[8] = {0, -1, 1, 0, -1, 1, -1, 1};

// this calculates all the distances from starting vertex
int dist[110][110];
int max_dist;


void init_dist() {
    for(int i = 0; i < 110; i++)
    for(int j = 0; j < 110; j++)
    dist[i][j] = INT_MAX;
}

void print_grid() {
    for(int h = height; h >= 1; h--) {
        for(int w = 1; w <= width; w++ ) {
            cerr << grid[h][w];
        }
        cerr << endl;
    }
    cerr << "--------------------" << endl;
}


void bfs(int x, int y) {

    // prepare the queue
    queue<pair<int, int>> q;

    // push / mark / distance
    q.push(make_pair(x, y));
    visited[x][y] = 1;
    dist[x][y] = 0;

    // loop
    while(!q.empty()) {

        // remove the head of the Q
        auto p = q.front();
        q.pop();

        int x1 = p.first;
        int y1 = p.second;
        // (x1, y1) is the coordinates of the current vertex V

        // visist V's 8 neighbours
        int x2, y2;

        for(int i = 0; i <= 7; i++) {

            x2 = x1 + dx[i];
            y2 = y1 + dy[i];

            // validate x2 & y2
            if(x2 < 1 || x2 > width) {
                continue;
            }

            if(y2 < 1 || y2 > height) {
                continue;
            }

            if(grid[x2][y2] == '*') { // stone
                continue;
            }

            if(visited[x2][y2]) { // ignore if already visited
                continue;
            }

            // now, (x2, y2) is a valid and unvisited vertex
            // push / mark / distance
            q.push(make_pair(x2, y2));
            visited[x2][y2] = 1;
            dist[x2][y2] = dist[x1][y1] + 1;

            max_dist = max(max_dist, dist[x2][y2]);

            grid[x2][y2] = 'M'; // LOGGING
        }

        print_grid(); // LOGGING

    }
}

int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    freopen("1504.txt", "r", stdin);

    // step 2) load all data in
    cin >> width >> height >> x >> y;

    // trap 1. (1, 1) being in the lower left corner
    // trap 2. (x, y) x means width, y means height
    for(int y = height; y >= 1; y--) {
        for(int x = 1; x <= width; x++) {
            cin >> grid[x][y];
        }
    }

    // step 3) init dist
    init_dist();

    grid[x][y] = 'M'; // LOGGING
    print_grid(); // LOGGING

    // step 4) bfs
    bfs(x, y);

    // step 5) print result
    cout << max_dist << endl;

    return 0;
}