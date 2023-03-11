# include <stdio.h> 

int main(){

    int age, emergencyPass=1;
    printf("enter your age \n");
    scanf("%d ", &age);

    if (age>=18 && age<=70)
    {
        printf("You can drive");
    }
    else if (emergencyPass==1)
    {
        printf("You can drive");
        
    }
    
    else{
        printf("you cannot drive");
    }


     return 0;
}       