#include <iostream>
#include <string>
//#include "fileA.cpp"

using namespace std;

public string fooZ(string input){
	for(int i=0; i<=input.length(); i+=2){
		if(input[i+1] == '?' && input[i+2] == null){
			cout << input << endl;
			return(input);
		}
		else if(input[i+1] != '?' && input[i] != null && i==0){
			fooZ(input.insert(input[i]+1,'?'));
			break;
		}
		else if(input[i+1] != '?' && input[i] != null){
			fooZ(input.insert(input[i]+1,'?'));
			return(input);
		}
	}
//	if(input[1] != '!'){
//		fooA(input);
//	}
	cout << input << endl;
	return(input);
}