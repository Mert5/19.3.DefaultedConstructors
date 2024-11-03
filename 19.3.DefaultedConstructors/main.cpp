#include <iostream>

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
// (freeCodeCamp.org)

const double Pi {3.1415926535897932384626433832795};

class Cylinder{
    public :
        // Constructors
        Cylinder() = default;        // you can use this as a default constructor
        /*Cylinder(){
            // instead of something like this
        }*/

        // Constructors should be public otherwise you can not call them in main func.

        Cylinder(double base_param, double height_param){
            base_radius = base_param;
            height = height_param;
        }

        // Functions(methods)
        double volume(){
            return Pi * base_radius * base_radius * height;
        }

    private :
        // Member variables
        double base_radius {1};
        double height {1};
};

int main(){

    Cylinder cylinder1; // Object
    
    std::cout << "volume of cylinder : " << cylinder1.volume() << std::endl;
    
    return 0;
}