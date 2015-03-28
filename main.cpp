#include <iostream>
#include <fstream>
#include "BMI.h"
#include <cstdlib>

using namespace std;

int main(){
    int Height,Weight;
    BMI bmi1;    


    ifstream inFile("file.in", ios::in);
    if(!inFile) {
	cerr << "Failed opening" << endl;
	exit(1);
    }
    ofstream outFile("file.out", ios::out);
    if(!outFile) {
	cerr << "Failed opening" << endl;
	exit(1);
    }

    while(inFile >> Height >> Weight ){
	if(Height!=0 &&Weight!=0){
        bmi1.set_height(Height);
        bmi1.set_weight(Weight);
        bmi1.calculate();
	outFile<<bmi1.get_bmi()<<"\t"<<bmi1.get_category()<<endl;
	}
    }




}

