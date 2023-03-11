# include <stdio.h>

// int main(){
//     int length, breadth;
//     printf("enter the lenth of the rectangle : \n");
//     scanf("%d", &length);

//     printf("enter the breadth of the rectangle : \n");
//     scanf("%d", &breadth);

//     int rect_area = length * breadth;
//     printf("Area of the Rectangle is :  %d unit square" , rect_area);

//     return 0;
// } 



int main(){
    
    int radius, height;
    float Pi= 3.14;
    // float circle_volume; redeclaration of the vzriable not allowed

    printf("enter the radius of the circle \n");
    scanf("%d", &radius);

    printf("enter the height of the circle \n");
    scanf("%d", &height);


    float circle_area= Pi*radius*radius;
    float circle_volume= circle_area*height;

    printf("the area of the circle is : %f \n", circle_area);

    printf("the volume of the circle is %f", circle_volume);

    return 0;
}