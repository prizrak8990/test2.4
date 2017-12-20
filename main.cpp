#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,a,b;
    cin >> a >> b;
    int **matrix = new int*[a];
    for (i=0; i < a; i++){
        matrix[i] = new int [b];
    }
    i=j=0;
    int t=0;
    for(int k=1; k < a*b+1; k++) {
        if (i == t && j!= b - 1 - t) {
            matrix[i][j] = k;
            j++;
            continue;
        }
        if (i == t && j == b - 1 - t) {
            matrix[i][j] = k;
            i++;
            continue;
        }
        if (j == b - 1 - t && i != a - 1 - t) {
            matrix[i][j] = k;
            i++;
            continue;
        }
        if (j == b - 1 - t && i == a - 1 - t) {
            matrix[i][j] = k;
            j--;
            continue;
        }
        if (i == a - 1 - t && j != t) {
            matrix[i][j] = k;
            j--;
            continue;
        }
        if (i == a - 1 - t && j == t) {
            matrix[i][j] = k;
            i--;
            continue;
        }
        if (j == t && i != t + 1) {
            matrix[i][j] = k;
            i--;
            continue;
        }
        if (j == t && i == t + 1) {
            matrix[i][j] = k;
            j++;
            t++;
            continue;
        }
    }

    for( i = 0 ; i < a ; i++ )
    {
        for( j=0; j < b ; j++)
            cout << setw(5) <<matrix[i][j] ;
        cout << endl;
    }
    return 0;
}
