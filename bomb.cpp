#include <iostream>
#include <cmath>

#define gravityAccelPerMeter 9.8f //acceleration due to gravity in meters per second squared

namespace Bomb
{
    double BombTimeTilExplodeArma(float height)
    {
        double s = height; // initial height in meters
        double t; // time in seconds

       
        //not really good of a calculation since it can explode 5 seconds before estimated time.
        t = sqrt((2 * s) / gravityAccelPerMeter);
        t = t * 1.5;
        
        std::cout << "Time taken for the bomb to hit the ground at " << height << " feet is: " << t << " seconds" << std::endl;
        
        return t;
    }
}

int main()
{
    Bomb::BombTimeTilExplodeArma(2000, true);
}

