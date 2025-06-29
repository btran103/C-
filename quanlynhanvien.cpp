#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

struct Quan_ly_nhan_vien {
    string name;
    int yearOfBirth;
    int yearsOfService;
    double salaryCoefficient;
};

int main() {
    int n, q;
    cin >> n >> q;
    vector<Quan_ly_nhan_vien> Nhanvien(n);
    unordered_map<string, int> nameCount;
    int countC = 0;

    for (int i = 0; i < n; ++i) {
        cin >> Nhanvien[i].name >> Nhanvien[i].yearOfBirth >> Nhanvien[i].yearsOfService >> Nhanvien[i].salaryCoefficient;
        nameCount[Nhanvien[i].name]++;
        countC++;
    }

    string query;
    for (int i = 0; i < q; ++i) {
        cin >> query;
        if (query == "C") {
            cout << countC << endl;
        } else if (query == "F") {
            string name;
            cin >> name;
            cout << nameCount[name] << endl;
        } else if (query == "S") {
            int x;
            cin >> x;
            int countS = 0;
            for (const auto& Quan_ly_nhan_vien : Nhanvien) {
                if (Quan_ly_nhan_vien.yearsOfService >= x) {
                    countS++;
                }
            }
            cout << countS << endl;
        } else if (query == "I") {
            string name;
            int year;
            cin >> name >> year;
            Nhanvien.push_back({name, year, 0, 2.34});
            nameCount[name]++;
            countC++;
        }
    }

    return 0;
}
