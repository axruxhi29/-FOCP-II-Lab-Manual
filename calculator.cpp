#include<stdio.h>
int main(){
    int marks; 
    printf("enter your marks (0-100): ");
    scanf("%d", &marks);
    switch (marks / 10){
        case 10:
        case 9:
        printf("grade: A\n");
        break;
        case 8:
        printf("grade: B\n");
        break;
        case 7:
        printf("grade: c\n");
        break;
        case 6:
        printf("grade: D\n");
        case 5:
        printf("grade: E\n");
        break;
        default:
        printf("grade: F (Fail)\n");
        break;
    
    }
    return 0;
}