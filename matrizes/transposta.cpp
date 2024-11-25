#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    
    int matriz[n][m]; 
    int transposta[m][n]; 

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j]; 
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposta[j][i] = matriz[i][j]; 
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposta[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}