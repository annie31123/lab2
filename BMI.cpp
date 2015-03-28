#include <iostream>
#include <fstream>
#include "BMI.h"
#include <string>

using namespace std;


void BMI::set_weight(int Weight){
    w=Weight;
}

void BMI::set_height(int Height){
    h=Height;
}

float BMI::calculate(){
    bmi=(float)w*10000/(h*h);
    return bmi;
}

float BMI::get_bmi(){
    return bmi;
}

string BMI::get_category(){
    if(bmi<15)
        cat="Very severely underweight" ;
    if(bmi<16 &&bmi>=15)
        cat="Severely underweight ";
    if(bmi<18.5 &&bmi>=16)
        cat="Underweight ";
    if(bmi<25 &&bmi>=18.5)
        cat="Normal";
    if(bmi<30 &&bmi>=25)
        cat="Overweight ";
    if(bmi<35 &&bmi>=30)
        cat="Obese Class I (Moderately obese)  ";
    if(bmi<40 &&bmi>=35)
        cat="Obese Class II (Severely obese)   ";
    if(bmi>=40)
        cat="Obese Class III (Very severely obese)";

    return cat;
}


