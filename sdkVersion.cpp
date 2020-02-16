#include "Data.h"
#include <iostream>

using namespace std;

class w_sdk{
	public:
		INT64 size_w;
		INT64 OSExec();
		string version;
	
};

INT64 w_sdk::OSExec(){
	this->size_w = 1;
	this->version = "1";
	
	cout << this->version << endl;
	
	return 0;
}

int main(int argc, char *argv[]){
	w_sdk *sdk=new w_sdk();
	
	sdk->OSExec();
	
}