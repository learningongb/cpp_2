#include <iostream>
#include <cassert>

float travelTime(float distance, float speed)
{
    assert(speed > 0);
    return distance / speed;
}

int main()
{

    float distance, speed;

    distance = 10;
    speed = 2;
    std::cout << travelTime(distance, speed) << std::endl;

    distance = 10;
    speed = 0;
    std::cout << travelTime(distance, speed) << std::endl;

    return 0;
}