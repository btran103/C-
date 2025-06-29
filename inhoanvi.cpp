#include <bits/stdc++.h>
using namespace std;
vector <int> x ;
vector <int> hv ;
int n;
void show() {
    for (int i = 1; i <= n; i++)
    {
        cout << hv[i] << " ";
    }
    cout << "\n";
}
int fNext() {
    int pos = -1;
    for ( int i = n; i >= 2; i--)
    {
        if (hv[i - 1] > hv[i])
        {
            pos = i - 1;
            break;
        }
    }
    return pos;
}
void Next() {
    show();
    while (1)
    {
        int pos = fNext();
        if (pos == -1)
        {
            return;
        }
        else{
            sort(hv.begin() + pos+1, hv.end(), greater());
            int posMax = -1;
            for (int i = pos+1; i <= n; i++)
            {
                if (hv[pos] > hv[i])
                {
                    posMax = i;
                    break;
                }
            }
            int tmp = hv[pos];
            hv[pos] = hv[posMax];
            hv[posMax] = tmp;
            show();
        }
    }
}
int main() {
    cin >> n;
    hv.resize(n + 1);
    int tmp = n;
    for (int i = 1; i <= n; i++)
    {
        hv[i] = tmp;
        tmp--;
    }
    Next();
}

