/* Author: Joseph Flodman
 *         jflodman3@huskers.unl.edu
 * Date: 09/8/2024
 *
 *$$d = \arccos{(\sin(\varphi_1) \sin(\varphi_2) + \cos(\varphi_1) \cos(\varphi_2) \cos(\Delta) )} \cdot R$$
 *
 * $$r = \frac{deg}{180} \cdot \pi$$
 *
 * Write a program that *interactively prompts* the user to enter the latitude and
longitude of two locations and then computes the distance between them
using the above formula.
 *
 */


#include <stdio.h>
#include <math.h>  // for math functions sin, cos, and acos
#include <stdlib.h>



#define PI 3.141592653589793
#define EARTH_RADIUS_KILOMETERS 6371.0


double convertDegreesToRadians(double degrees) {
    return (degrees * PI) / 180.0;  // formula to convert degrees to radians
}

int main() {

    double originLatitudeDegrees, originLongitudeDegrees;
    double destinationLatitudeDegrees, destinationLongitudeDegrees;
    double originLatitudeRadians, destinationLatitudeRadians;
    double differenceLongitudeRadians;
    double airDistanceKilometers;


    printf("Enter the latitude and longitude of the origin:\n");
    scanf("%lf %lf", &originLatitudeDegrees, &originLongitudeDegrees);
    printf("Enter the latitude and longitude of the destination:\n");
    scanf("%lf %lf", &destinationLatitudeDegrees, &destinationLongitudeDegrees);


    originLatitudeRadians = convertDegreesToRadians(originLatitudeDegrees);
    destinationLatitudeRadians = convertDegreesToRadians(destinationLatitudeDegrees);
    differenceLongitudeRadians = convertDegreesToRadians(destinationLongitudeDegrees - originLongitudeDegrees);
    airDistanceKilometers = acos(sin(originLatitudeRadians) * sin(destinationLatitudeRadians) + cos(originLatitudeRadians) * cos(destinationLatitudeRadians) * cos(differenceLongitudeRadians)) * EARTH_RADIUS_KILOMETERS;


    printf("Location Distance\n");
    printf("========================\n");
    printf("Origin:      (%.6f, %.6f)\n", originLatitudeDegrees, originLongitudeDegrees);
    printf("Destination: (%.6f, %.6f)\n", destinationLatitudeDegrees, destinationLongitudeDegrees);
    printf("Air distance is %.6f kilometers\n", airDistanceKilometers);

    return 0;
}
