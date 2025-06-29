#include <bits/stdc++.h>

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define int long long

using namespace std;

signed main()
{
    int q;
    string a;
    vector<int> A;
    cin >> q;
    cin.ignore();
    getline(cin,a);
    if (a.find("d") == string::npos && a.find("e") == string::npos){
        cout << -1;
    }
    stringstream ss(a);
    string temp;
    while(ss >> temp){
        if (temp == "a"){
            ss >> temp;
            unsigned long long trash = stoull(temp);
            A.push_back(trash);
        }else if (temp == "b"){
            sort(A.begin(),A.end());
        }else if (temp == "c"){
            reverse(A.begin(),A.end());
        }else if (temp == "d"){
            cout << A.size() << " ";
        }else if (temp == "e"){
            for (auto x : A){
                cout << x << " ";
            }
        }else if (temp == "f"){
            sort(A.begin(), A.end(), greater<int>());       
        }
    }
    return 0;
}
