# include <stdio.h>
# include <math.h>
# define PI 3.14



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
double calculateWidth(){

}

double calculateHeight(){

}

int main(void){
    
    double distance = calculateDistance();
    printf("The distance between the two points is %.2f\n",distance);

    calculatePerimeter();
    calculateArea();
    //calculateWidth();
    //calculateHeight();

    return 0;
}

