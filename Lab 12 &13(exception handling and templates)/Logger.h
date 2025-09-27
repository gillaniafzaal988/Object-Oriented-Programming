#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Logger{
public:
    static void log(T message){
        cout<<"\nLog:"<<message;
    }
};

