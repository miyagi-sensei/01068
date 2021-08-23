// sort the moliu index separately to get a rank index for printing
#include <iostream>
#include <algorithm>
using namespace std;

int N;
pair<int, int> coord[100];
pair<long long, int> Ranks[100];

int main()
{
    int i, j, x, y;
    cin >> N;
    for (i=0; i<N; i++) {
        cin >> x >> y;
        coord[i] = {x, y};
        Ranks[i] = {(long long) x * x + y * y, i};
    }
    sort(Ranks, Ranks+N);
    for (i=0; i<N; i++) {
        j = Ranks[i].second;
        cout << coord[j].first << " " << coord[j].second << endl;
    }
    return 0;
}

