#include <iostream>
using namespace std;

int main() {
    int height = 61;
    int weight = 130;
    
 double kg;
 double meters;
//calculations for bmi//
kg = weight * 0.453592; //multiplies weight by the conversion for kg to lbs//
meters = height * 0.0254;

// calculate bmi//

double bmi;
bmi = kg/(meters * meters);

cout <<"The BMI for this person is : " << bmi << endl;

}
