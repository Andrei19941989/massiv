//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n+2][m+2];

    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            a[i][j] = -1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = 0;
        }
    }
    int num = 0, r = 1, c = 0;

    while (num < n * m) {
        while (a[r][c + 1] == 0) {
            c++;
            num++;
            a[r][c] = num;
        }
        while (a[r + 1][c] == 0) {
            r++;
            num++;
            a[r][c] = num;
        }
        while (a[r][c - 1] == 0) {
            c--;
            num++;
            a[r][c] = num;
        }
        while (a[r - 1][c] == 0) {
            r--;
            num++;
            a[r][c] = num;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n+2][m+2];

    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            a[i][j] = -1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = 0;
        }
    }
    int num = 0, r = 1, c = 0;

    while (num < n * m) {
        while (a[r][c + 1] == 0) {
            c++;
            num++;
            a[r][c] = num;
        }
        while (a[r + 1][c] == 0) {
            r++;
            num++;
            a[r][c] = num;
        }
        while (a[r][c - 1] == 0) {
            c--;
            num++;
            a[r][c] = num;
        }
        while (a[r - 1][c] == 0) {
            r--;
            num++;
            a[r][c] = num;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n+2][m+2];

    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            a[i][j] = -1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = 0;
        }
    }
    int num = 0, r = 1, c = 0;

    while (num < n * m) {
        while (a[r][c + 1] == 0) {
            c++;
            num++;
            a[r][c] = num;
        }
        while (a[r + 1][c] == 0) {
            r++;
            num++;
            a[r][c] = num;
        }
        while (a[r][c - 1] == 0) {
            c--;
            num++;
            a[r][c] = num;
        }
        while (a[r - 1][c] == 0) {
            r--;
            num++;
            a[r][c] = num;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}