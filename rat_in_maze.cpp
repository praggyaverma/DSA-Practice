#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(int x, int y, int n, vector<vector<int>>& arr, vector<vector<int>>& seen) {
    return (x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == 1 && seen[x][y] == 0);
}

void findPaths(int x, int y, int n, vector<vector<int>>& arr, vector<vector<int>>& seen, string& path, vector<string>& paths) {
    if (x == n - 1 && y == n - 1) {
        paths.push_back(path);
        return;
    }

    seen[x][y] = 1;

    if (isValid(x + 1, y, n, arr, seen)) {
        path.push_back('D');
        findPaths(x + 1, y, n, arr, seen, path, paths);
        path.pop_back();
    }
    if (isValid(x, y + 1, n, arr, seen)) {
        path.push_back('R');
        findPaths(x, y + 1, n, arr, seen, path, paths);
        path.pop_back();
    }
    if (isValid(x - 1, y, n, arr, seen)) {
        path.push_back('U');
        findPaths(x - 1, y, n, arr, seen, path, paths);
        path.pop_back();
    }
    if (isValid(x, y - 1, n, arr, seen)) {
        path.push_back('L');
        findPaths(x, y - 1, n, arr, seen, path, paths);
        path.pop_back();
    }

    seen[x][y] = 0;
}

vector<string> searchMaze(vector<vector<int>>& arr, int n) {
    vector<string> paths;
    vector<vector<int>> seen(n, vector<int>(n, 0));
    string path;

    findPaths(0, 0, n, arr, seen, path, paths);

    sort(paths.begin(), paths.end()); 

    return paths;
}
