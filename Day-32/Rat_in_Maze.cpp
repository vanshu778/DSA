#include <iostream>
#include <vector>
#include<string>
using namespace std;

bool isSafe(int srcx, int srcy, int row, int col, int maze[][3], vector<vector<bool> > &visited){
  if (((srcx >= 0 && srcx < row) && (srcy >= 0 && srcy < col)) &&
      (maze[srcx][srcy] == 1) && (visited[srcx][srcy] == false)) {
    return true;
  } else {
    return false;
  }
}

void solveMaze(int maze[3][3], int row, int col, int srcx, int srcy, vector<vector<bool>> &visited, vector<string> &path, string output) {
  // base case
  if (srcx == row - 1 && srcy == col - 1) {
    // answer found
    path.push_back(output);
    return;
  }

  // down -> i+1,j
  if (isSafe(srcx + 1, srcy, row, col, maze, visited)) {
    visited[srcx + 1][srcy] = true;
    solveMaze(maze, row, col, srcx + 1, srcy, visited, path, output + 'D');

    // backtrack
    visited[srcx + 1][srcy] = false;
  }

  // left -> i,j-1
  if (isSafe(srcx, srcy - 1, row, col, maze, visited)) {
    visited[srcx][srcy - 1] = true;
    solveMaze(maze, row, col, srcx, srcy - 1, visited, path, output + 'L');

    // backtrack
    visited[srcx][srcy - 1] = false;
  }

  // right -> i,j+1
  if (isSafe(srcx, srcy + 1, row, col, maze, visited)) {
    visited[srcx][srcy + 1] = true;
    solveMaze(maze, row, col, srcx, srcy + 1, visited, path, output + 'R');

    // backtrack
    visited[srcx][srcy + 1] = false;
  }

  // up -> i-1,j
  if (isSafe(srcx - 1, srcy, row, col, maze, visited)) {
    visited[srcx - 1][srcy] = true;
    solveMaze(maze, row, col, srcx - 1, srcy, visited, path, output + 'U');

    // backtrack
    visited[srcx - 1][srcy] = false;
  }
}

int main() {
  int maze[3][3] = {{1, 0, 0}, {0, 0, 0}, {0, 0, 1}};

  if(maze[0][0]==0){
    cout<<"No path exists"<<endl;
    return 0;
  }
  
  int row = 3;
  int col = 3;

  vector<vector<bool>> visited(row, vector<bool>(col, false));
  // src ki value ko true mark krdo
  visited[0][0] = true;

  vector<string> path;
  string output = "";

  solveMaze(maze, row, col, 0, 0, visited, path, output);

  cout << "printing the results" << endl;
  for (auto i : path) {
    cout << i << " ";
  }
  cout << endl;

  if(path.size() == 0){
    cout<<"No path exists"<<endl;
  }
}