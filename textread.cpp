#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    int sum = 0;
    int x;
    string s;
    ifstream inFile;
    
    inFile.open("C:\\numbers.txt");
    
    
    while(!inFile.eof()){
    	getline (inFile,s);
    	if(s="abraham"){
    		cout<<"the line is there"<<endl;
		}
	}
    
    while (inFile >> s) {
    	
        sum = sum + x;
    }
    
    inFile.close();
    cout << "Sum = " << sum << endl; 
    cout << "Sum = " << sum << endl;
    return 0;
}
