#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream file(filename);
    
    if (!file) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    string line;
    int lineCount = 0, wordCount = 0, byteCount = 0;
    
    while (getline(file, line)) {
        lineCount++;
        byteCount += line.size();
        
        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();

    cout << "Total Lines: " << lineCount << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Size: " << byteCount << " bytes" << endl;

    return 0;
}