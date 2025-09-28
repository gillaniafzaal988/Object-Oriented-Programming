#include <iostream>
using namespace std;

class Printer {
    int pagesToPrint;
public:
    void setPagesToPrint() {
        cout << "Enter number of pages to print: ";
        cin >> pagesToPrint;
    }
    void printDocument() {
        cout << "Printing " << pagesToPrint << " page(s)..." << endl;
    }
};

class Scanner {
    int pagesToScan;
public:
    void setPagesToScan() {
        cout << "Enter number of pages to scan: ";
        cin >> pagesToScan;
    }
    void scanDocument() {
        cout << "Scanning " << pagesToScan << " page(s)..." << endl;
    }
};

class Photocopier : public Printer, public Scanner {
    string deviceName;
public:
    void setDeviceName() {
        cout << "Enter device name (one word): ";
        cin >> deviceName;
    }
    void startPhotocopy() {
        cout << "\n--- Photocopier Info ---" << endl;
        cout << "Device: " << deviceName << endl;
        printDocument();   // call Printer function
        scanDocument();    // call Scanner function
        cout << "Photocopy completed on " << deviceName << "." << endl;
    }
};
