#include <iostream>
using namespace std;

// Beatrix House

// This program declares a class for a circle that will have 
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles (spheres in the program) 
// initialized  at declaration or set by a function.

//class declaration section   (header file)

class Circles    
{
public:
   void setCenter(int x, int y);
   
   double findArea();  
   
   double findCircumference(); 
   
   // This outputs the radius and center of the circle
   void printCircleStats(); 
   
  // Constructor
   Circles (float r); 
   
   // Default constructor
   Circles();  
   
private: 
   float  radius;
   int    center_x;
   int    center_y;
};      


const double PI = 3.14;

//Client section   

int main()
{
   Circles sphere(8);
   sphere.setCenter(9,10);
   sphere.printCircleStats();
	
   cout << "The area of the circle is " << sphere.findArea() << endl;
   
   cout << "The circumference of the circle is "
	    << sphere.findCircumference() << endl;

   return 0;
}

//___________________________________________________________________________
//Implementation section     Member function implementation

Circles::Circles()
{
   radius = 1;
}

// Fill in the code to implement the non-default constructor
Circles::Circles(float r)
{
    center_x = 0;
    center_y = 0;
    radius = r;
}

// Fill in the code to implement the findArea member function
double Circles::findArea()
{
    return PI * radius * radius;
}

// Fill in the code to implement the findCircumference member function
double Circles::findCircumference()
{
    return PI * 2 * radius;
}

// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
void Circles::printCircleStats()
{
   cout << "The radius of the circle is " << radius << endl;
   cout << "The center of the circle is (" << center_x 
        << "," << center_y << ")" << endl;
}

// This procedure will take the coordinates of the center of the circle from 
// the user and place them in the appropriate member data.
void Circles::setCenter(int x, int y)
{
   center_x = x;
   center_y = y;
}