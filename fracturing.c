//********************************************************
// fracturing.c
// Author: Sindhuja Sesham
// UCFID: si656037
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program is meant to calculate the width, 
// height, distance, perimeter, and area between two points.
// Input: The x and y value of Point 1 and Point 2
//
// Output: x and y values of point 1 and point 2 as well as the
// Width, Height, Distance, Perimeter, and Area of those 
// //********************************************************



# include <stdio.h>
# include <math.h>
# define PI 3.14


//Function to calculate distance
double  calculateDistance(){
    double x1;
    double x2;
    double y1;
    double y2;

    printf("What is the value for x1?\n");
    scanf("%lf", &x1);
    printf("What is the value for x2?\n");
    scanf("%lf", &x2);

    printf("What is the value for y1?\n");
    scanf("%lf", &y1);
    printf("What is the value for y2?\n");
    scanf("%lf", &y2);

    printf("Point 1 has the x1 value is %.2f and the y1 value is %.2f\n",x1,y1);
    printf("Point 2 has the x2 value is %.2f and the y2 value is %.2f\n",x2,y2);


    double x_value = x2-x1;
    double y_value = y2-y1;
    x_value = pow(x_value,2);
    y_value = pow(y_value,2);
    double distance = sqrt(x_value+y_value);

    
    return distance;
}

//Function to calculate Perimeter
double calculatePerimeter(){
    double radius = calculateDistance()/2;

    double perimeter = 2*PI*radius;
    printf("The perimeter of the city encompoused by your request is %.2f\n", perimeter);

    return 1.0;
}

//Function to Calculate Area
double calculateArea(){
    double radius = calculateDistance()/2;
    double area = PI*pow(radius,2);
    printf("The area of the city encompoused by your request is %.2f\n", area);

    return 1.0;

}

//Function to Calculate Width
double calculateWidth(){
    double x1;
    double x2;
    double y1;
    double y2;

    printf("What is the value for x1?\n");
    scanf("%lf", &x1);
    printf("What is the value for x2?\n");
    scanf("%lf", &x2);

    printf("What is the value for y1?\n");
    scanf("%lf", &y1);
    printf("What is the value for y2?\n");
    scanf("%lf", &y2);

    printf("Point 1 has the x1 value is %.2f and the y1 value is %.2f\n",x1,y1);
    printf("Point 2 has the x2 value is %.2f and the y2 value is %.2f\n",x2,y2);


    double x_value = x2-x1;
    printf("The width of the city encompassed by your request is %.2f\n",x_value);

    return 2.0;

}

//Function to Calculate Height
double calculateHeight(){
    double x1;
    double x2;
    double y1;
    double y2;

    printf("What is the value for x1?\n");
    scanf("%lf", &x1);
    printf("What is the value for x2?\n");
    scanf("%lf", &x2);

    printf("What is the value for y1?\n");
    scanf("%lf", &y1);
    printf("What is the value for y2?\n");
    scanf("%lf", &y2);

    printf("Point 1 has the x1 value is %.2f and the y1 value is %.2f\n",x1,y1);
    printf("Point 2 has the x2 value is %.2f and the y2 value is %.2f\n",x2,y2);


    double y_value = y2-y1;
    printf("The height of the city encompassed by your request is %.2f\n",y_value);

    return 2.0;

}

// MAIN function
int main(int argc, char **argv){
    
    double distance = calculateDistance();
    printf("The distance between the two points is %.2f\n",distance); //Distance is only stated once

    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

