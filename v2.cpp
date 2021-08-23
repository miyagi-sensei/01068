// use pair of pair to store 3 numbers: (moliu index, x, y)
// sort by moliu index using built-in sort function
#include <iostream>
#include <algorithm>
using namespace std;

int N;
pair<long long, pair<int, int> > coord[100];

int main()
{
    int i, j, x, y;
    cin >> N;
    for (i=0; i<N; i++) {
        cin >> x >> y;
        coord[i] = {(long long)x*x + y*y, {x, y}};
    }
    sort(coord, coord+N);
    for (i=0; i<N; i++) {
        cout << coord[i].second.first << " " << coord[i].second.second << endl;
    }
    return 0;
}

