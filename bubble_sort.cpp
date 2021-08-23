#include <iostream>
using namespace std;

int N;
pair<int, int> coord[100];

long long moliu_index(int i) {
    long long x = coord[i].first;
    long long y = coord[i].second;
    return x * x + y * y;
}

int main()
{
    int i, j, x, y;
    cin >> N;
    for (i=0; i<N; i++) {
        cin >> x >> y;
        coord[i] = {x, y};
    }

    for (i=1; i<N; i++) {
        for (j=1; j<N; j++) {
            if (moliu_index(j-1) > moliu_index(j)) {
                swap(coord[j-1], coord[j]);
            }
        }
    }

    for (i=0; i<N; i++) {
        cout << coord[i].first << " " << coord[i].second << endl;
    }
    return 0;
}

