#include<iostream>
#include<fstream>
using namespace std;

int main(){
 	//task 01
 	fstream out("greet.txt", ios::out);
 	cout<< "Position of write pointer before writing: " << out.tellp() << endl;
 	out<<"A";
 	cout<< "Position of write pointer after writing a single character: " << out.tellp() << endl;
 	out.close();
 	//task 02
 	fstream in("Greet.txt", ios::in);
 	cout<< "Position of read pointer before reading: " << in.tellg() << endl;
 	char ch;
 	in.get(ch);
 	cout<< "Position of read pointer after reading a single character: " << in.tellg() << endl;
 	in.close();
 	//task 03
 	fstream file("student.txt", ios::in | ios::out | ios::trunc);
 	file << "01,Awais,3.5 ";
 	file << "02,Kashig,3.8 ";
 	file << "03,Zahid,,2.5 ";
 	file << "04,Ahmed,4.0 ";
 	cout<< "Position of write pointer after writing: " << file.tellp() << endl;
 	file.seekp(-13, ios::cur);
 	file << "05,Nadir,2.78";
 	file.close();
   	//task 04
 	fstream file2("Student.txt", ios::in | ios::out);
 	cout<< "Position of pointer before reading: " << file2.tellg() << endl;
 	cout<< "Move the read pointer position to 13" << endl;
 	file2.seekg(13);
 	while(file2.get(ch)){
 		cout<< "Character Read: "<< ch << " Position of pointer after reading: " << file2.tellg() << endl;
	 }
 	file2.close();

 	return 0;
}

