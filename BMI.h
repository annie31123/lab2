
#include <iostream>

using namespace std;

class BMI{



    public:

        
        void set_weight(int);
        void set_height(int);
        float calculate();
        float get_bmi();
        string get_category();




    private:

        int w,h;
        float bmi;
        string cat;





};
