#include <iostream>
using namespace std;

// Beatrix House

//class declaration section   (header file)

class Circles    
{
    private:
        float radius;
        int center_x;
        int center_y;
    
    public:
    
        // Prints center coordinate
        //void setCenter(int x, int y);
        
        // Returns area
        double findArea();
        
        // Returns circumference
        double findCircumference();
        
        // Prints radius and center point
        void printCircleStats(); 
        
        // Default constructor
        Circles();
        
        // Radius constructor
        Circles (float r);
        
         // Center constructor
        Circles (int x, int y);
        
        // Center and radius constructor
        //Circles (float r, int x, int y);
       
         // Destructor
        ~Circles();
       
};      


const double PI = 3.14;

//Client section   

int main()
{
  Circles sphere1(2);
  sphere1.printCircleStats();
  cout << "The area of the circle is " << sphere1.findArea() << endl;
  cout << "The circumference of the circle is " << sphere1.findCircumference() << endl;
  
  cout << endl;
  
  Circles sphere2;
  sphere2.printCircleStats();
  cout << "The area of the circle is " << sphere2.findArea() << endl;
  cout << "The circumference of the circle is " << sphere2.findCircumference() << endl;
  
  cout << endl;
  
  Circles sphere3(15, 16);
  sphere3.printCircleStats();
  cout << "The area of the circle is " << sphere3.findArea() << endl;
  cout << "The circumference of the circle is " << sphere3.findCircumference() << endl;

  return 0;
}

//___________________________________________________________________________
//Implementation section     Member function implementation

// Default contructor
Circles::Circles()
{
  radius = 1;
  center_x = 0;
  center_y = 0;
}

// Radius constructor
Circles::Circles(float r)
{
    radius = r;
    center_x = 0;
    center_y = 0;
}

// Center constructor
Circles::Circles(int x, int y)
{
    radius = 1;
    center_x = x;
    center_y = y;
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

// Destructor
Circles::~Circles(){}

