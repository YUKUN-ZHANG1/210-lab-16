// COMSC-210 | Lab 16: Color Class w/Constructors | Yukun Zhang
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>

using namespace std;

class Color{
    private:    
    int redValue; // Represents red color value (0-255)
    int greenValue; // Represents green color value (0-255)
    int blueValue; // Represents blue color value (0-255)

    public:
    // Default constructor - initializes to black (0, 0, 0)
    Color()
        : redValue(0), greenValue(0), blueValue(0) {}

    // Parameterized constructor - initializes to given values
    Color(int r, int g, int b) 
        : redValue(r), greenValue(g), blueValue(b) {}

    // Partial constructor - initializes red, sets green and blue to 0
    Color(int r) 
        : redValue(r), greenValue(0), blueValue(0) {}
        // Partial constructor - initializes red, sets green and blue to 0
    Color(int r, int g) 
        : redValue(r), greenValue(g), blueValue(0) {}
        
    
    // Setters
    // Setter for red color component
    // arguments: redValue - integer representing the red component
    void setRedValue(int redValue){this->redValue = redValue;}
    // Setter for green color component
    // arguments: greenValue - integer representing the green component
    void setGreenValue(int greenValue){this->greenValue = greenValue;}
    // Setter for blue color component
    // arguments: blueValue - integer representing the blue component
    void setBlueValue(int blueValue){this->blueValue = blueValue;}

    // Getters
    // Getter for red color component
    // returns: integer value of the red component
    int getRedValue()const{return redValue;}
    // Getter for green color component
    // returns: integer value of the green component
    int getGreenValue()const{return greenValue;}
    // Getter for blue color component
    // returns: integer value of the blue component
    int getBlueValue()const{return blueValue;}

    // Print the color values (RGB) in a formatted way
    void print()const{
        cout<<"R :"<<setw(4)<<redValue<<endl;
        cout<<"G :"<<setw(4)<<greenValue<<endl;
        cout<<"B :"<<setw(4)<<blueValue<<endl;
    }
};