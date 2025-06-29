#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct Employee {
    string name;
    int birthYear;
    int yearsWorked;
    double salaryCoefficient;
};

int main() {
    int n, q;
    cin >> n >> q;

    vector<Employee> employees(n);
    map<string, int> nameCount;
    for (int i = 0; i < n; i++) {
        cin >> employees[i].name >> employees[i].birthYear >> employees[i].yearsWorked >> employees[i].salaryCoefficient;
        nameCount[employees[i].name]++;
    }

    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;
        if (query == "C") {
            cout << n << endl;
        } else if (query[0] == 'F') {
            string name = query.substr(2);
            cout << nameCount[name] << endl;
        } else if (query[0] == 'S') {
            int x = stoi(query.substr(2));
            int count = 0;
            for (const auto &emp : employees) {
                if (emp.yearsWorked >= x) {
                    count++;
                }
            }
            cout << count << endl;
        } else if (query[0] == 'I') {
            string name;
            int year;
            cin >> name >> year;
            employees.push_back({name, year, 0, 2.34});
            nameCount[name]++;
            n++;
        }
    }

    return 0;
}

