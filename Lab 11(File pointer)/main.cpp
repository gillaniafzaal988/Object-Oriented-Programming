#include<iostream>
#include<fstream>
using namespace std;

int main(){
 	
 	fstream out("greet.txt", ios::out);
 	cout<< "Position of write pointer before writing: " << out.tellp() << endl;
 	out<<"A";
 	cout<< "Position of write pointer after writing a single character: " << out.tellp() << endl;
 	out.close();
 	
 	fstream in("Greet.txt", ios::in);
 	cout<< "Position of read pointer before reading: " << in.tellg() << endl;
 	char ch;
 	in.get(ch);
 	cout<< "Position of read pointer after reading a single character: " << in.tellg() << endl;
 	in.close();
 	
 	fstream file1("student.txt", ios::in | ios::out | ios::trunc);
 	file1 << "01,Awais,3.5 ";
 	file1 << "02,Kashig,3.8 ";
 	file1 << "03,Zahid,,2.5 ";
 	file1 << "04,Ahmed,4.0 ";
 	cout<< "Position of write pointer after writing: " << file1.tellp() << endl;
 	file1.seekp(-13, ios::cur);
 	file1 << "05,Nadir,2.78";
 	file1.close();

 	fstream file("Student.txt", ios::in | ios::out);
 	cout<< "Position of pointer before reading: " << file.tellg() << endl;
 	cout<< "Move the read pointer position to 13" << endl;
 	while(file.get(ch)){
 		cout<< "Character Read: "<< ch << " Position of pointer after reading: " << file.tellg() << endl;
	 }
 	file.close();

 	return 0;
}

