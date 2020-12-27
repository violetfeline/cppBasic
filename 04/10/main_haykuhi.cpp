#include <iostream>
#include <queue>
using namespace std;

void find_path(int n, int row, int col, char** lab, int** visited, int** path, queue<int>& plan){
	if(!visited[row][col]){
		
		if ((row+1) < n && (row+1) >= 0 && !visited[row+1][col] &&
			(lab[row+1][col] == '0' || lab[row+1][col] == '1')) {
				path[row+1][col] = path[row][col] + 1;
				plan.push(row+1);
				plan.push(col);
		}
		if((row-1) < n && (row-1) >= 0 && !visited[row-1][col] && 
			(lab[row-1][col] == '0' || lab[row-1][col] == '1')) {
				path[row-1][col] = path[row][col] + 1;
				plan.push(row-1);
				plan.push(col);
		}
		if((col + 1) < n && (col + 1) >= 0 && !visited[row][col+1] && 
			(lab[row][col+1] == '0' || lab[row][col+1] == '1')) {
				path[row][col+1] = path[row][col] + 1;
				plan.push(row);
				plan.push(col+1);
		}
		if((col - 1) < n && (col - 1) >= 0 && !visited[row][col-1] && 
			(lab[row][col-1] == '0' || lab[row][col-1] == '1')) {
				path[row][col-1] = path[row][col] + 1;
				plan.push(row);
				plan.push(col-1);
		}
		visited[row][col] = 1; 
	}
}
 
int main() {
	int n, x_start, y_start, x_end, y_end, x, y;
	queue <int> plan; 
	n = 10;
	char** lab = new char* [n];
	int** visited = new int * [n];
	int** path = new int * [n];
	for(int i=0; i<n; i++){
		lab[i] = new char [n];   
		visited[i] = new int [n]; 
		path[i] = new int [n];  
		for(int j=0; j<n; j++){
			visited[i][j] = 0;  
			path[i][j] = -1;   
			cin >> lab[i][j]; 
		}
		x_start = 0;
		y_start = 0;
		plan.push(0);  
		plan.push(0);  
		path[0][0] = 1;
		x_end = 9;
		y_end = 9;	
			
		
	}
	while(!plan.empty()){ 
		x=plan.front();
		plan.pop();
		y=plan.front();
		plan.pop();
		find_path(n, x, y, lab, visited, path, plan); 
	}
	if(!visited[x_end][y_end]){
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		}
		   
	return 0;
}
