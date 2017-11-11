#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, l, t, z;
    cin >> k >> l;
    int a[k][l];
    i = j = z = 0;
    t = 1;
    for (n = 0; n <= k * l; n++) {
        if (i == (k - 1) / 2 && j == (l - 1) / 2 && k % 2 == 1 && k == l) {
            a[i][j] = t++;
            continue;
        }
        if (i == z && j == l - 1 - z) {
            a[i][j] = t++;
            i++;
            continue;
        }
        else if (i == z) {
            a[i][j] = t++;
            j++;
            continue;
        }
        if (i == k - 1 - z && j == l - 1 - z) {
            a[i][j] = t++;
            j--;
            continue;
        }
        else if (j == l - 1 - z) {
            a[i][j] = t++;
            i++;
            continue;
        }
        if (i == k - 1 - z && j == z) {
            a[i][j] = t++;
            i--;
            continue;
        }
        else if (i == k - 1 - z) {
            a[i][j] = t++;
            j--;
            continue;
        }
        if (i == z + 1 && j == z) {
            a[i][j] = t;
            z++;
            continue;
        }
        else {
            if (j == z) {
                a[i][j] = t++;
                i--;
                continue;
            }
        }
    }
    for (i = 0; i < k; i++) {
        for (j = 0; j < l; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
