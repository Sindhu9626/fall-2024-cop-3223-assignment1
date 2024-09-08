//********************************************************
// Test file for trying out different methods.
// Not ment to be graded.
// //********************************************************



# include <stdio.h>
# include <math.h>
# define PI 3.14


double askForX1(){
    double x1;

    printf("What is the value for x1?\n");
    scanf("%lf", &x1);
    return x1;

}
double askForX2(){
    double x2;

    printf("What is the value for x2?\n");
    scanf("%lf", &x2);
    return x2;

}
double askForY1(){
    double y1;

    printf("What is the value for y1?\n");
    scanf("%lf", &y1);
    return y1;

}
double askForY2(){
    double y2;

    printf("What is the value for y2?\n");
    scanf("%lf", &y2);
    return y2;

}

double calculateWidth(){

    double x_value = askForX2()-askForX1();
    printf("The width of the city encompassed by your request is %.2f\n",x_value);

    return x_value;

}

double calculateHeight(){

    double y_value = askForY2()-askForY1();
    printf("The height of the city encompassed by your request is %.2f\n",y_value);

    return y_value;

}

double  calculateDistance(){



    double x_value = calculateWidth();
    double y_value = calculateHeight();

    x_value = pow(x_value,2);
    y_value = pow(y_value,2);

    double distance = sqrt(x_value+y_value);

    
    return distance;
}

double calculatePerimeter(){
    double radius = calculateDistance()/2;

    double perimeter = 2*PI*radius;
    printf("The perimeter of the city encompoused by your request is %.2f\n", perimeter);

    return 1.0;
}

double calculateArea(){
    double radius = calculateDistance()/2;
    double area = PI*pow(radius,2);
    printf("The area of the city encompoused by your request is %.2f\n", area);

    return 1.0;

}


int main(int argc, char ** argv){
        
    double x1 = askForX1();
    double y1 = askForY1();
    double x2 = askForX2();
    double y2 = askForY2();

    printf("Point 1 has the x1 value is %.2f and the y1 value is %.2f\n",x1,y1);
    printf("Point 2 has the x2 value is %.2f and the y2 value is %.2f\n",x2,y2);

    calculateWidth();
    calculateHeight();

    double distance = calculateDistance();
    printf("The distance between the two points is %.2f\n",distance);

    calculatePerimeter();
    calculateArea();


    return 0;
}

