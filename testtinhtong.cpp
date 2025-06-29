#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("TEST.INP");
    ofstream outputFile("TEST.OUT");

    int a, b;
    if (inputFile >> a >> b) {
        int sum = a + b;
        outputFile << sum << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

