#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

struct Employee {
    string name;
    int yearOfBirth;
    int yearsOfService;
    double salaryCoefficient;
};

int main() {
    int n, q;
    cin >> n >> q;
    vector<Employee> employees(n);
    unordered_map<string, int> nameCount;
    int countC = 0;

    for (int i = 0; i < n; ++i) {
        cin >> employees[i].name >> employees[i].yearOfBirth >> employees[i].yearsOfService >> employees[i].salaryCoefficient;
        nameCount[employees[i].name]++;
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
            for (const auto& employee : employees) {
                if (employee.yearsOfService >= x) {
                    countS++;
                }
            }
            cout << countS << endl;
        } else if (query == "I") {
            string name;
            int year;
            cin >> name >> year;
            employees.push_back({name, year, 0, 2.34});
            nameCount[name]++;
            countC++;
        }
    }

    return 0;
}
