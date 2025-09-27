#include <iostream>
#include <fstream>
#include <string>
using namespace std;

  int main() {
ofstream out("notes.txt");
    out << "This is the first line." << endl;
    out << "This is the second line." << endl;
    out.close();

    ifstream in("notes.txt");
    string text;
    cout << "File Content:" << endl;
    while (getline(in, text)) {
        cout << text << endl;
    }
    in.close();

    ofstream appendFile("notes.txt", ios::app);
    appendFile << "My name is afzal" << endl;
    appendFile << "My roll number is 04." << endl;
    appendFile.close();

 
 
 //  ===================== TASK 02 ==========================

ifstream file("notes.txt");
    string s;
    int count = 0;

    while (getline(file, s)) {
        count++;
    }

    file.close();
    cout << "Total number of lines in file = " << count << endl;

    
    
//
// //  ===================== TASK 03 ==========================
//
    fstream filein("notes.txt", ios::in);     // open source file
    fstream fileout("copy.txt", ios::out);    // open destination file

    if (!filein) {
        cout << "Error: notes.txt not found!" << endl;
        return 1;
    }

    string line;
    while (!filein.eof()) {
        getline(filein, line);     // read one line
        if (!filein.eof())         // avoid writing extra blank line at end
            fileout << line << endl;
    }

    filein.close();
    fileout.close();

    cout << "Content copied to copy.txt successfully." << endl;


//
// //  ===================== TASK 04 ==========================
//	
	fstream filestd("Students.txt",ios::out);
	filestd<<"Student details:"<<endl;
	filestd<<"Name        Roll No        Registration No"<<endl;
	filestd<<"Ali        2024-SE-120     ABC123        " <<endl;
	filestd<<"Amir       2024-SE-133     ABC456        " <<endl;
	filestd<<"Ahmed      2024-SE-111     ABC789        " <<endl;
	filestd.close();
	
	fstream filei("Students.txt",ios::in);
	string t;
	while (getline(filei,t)){
		cout<<t<<endl;
	} 
	filei.close(); 
//	
	return 0;
}    





