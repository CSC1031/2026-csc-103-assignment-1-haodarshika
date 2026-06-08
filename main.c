#include <stdio.h>
#include <stdlib.h>

int main()
{
int m1,m2,m3;
int Total;
float Average;
printf("Enter mathematics Marks:");
scanf("%d",&m1);
printf("Enter science marks:");
scanf("%d",&m2);
printf("Enter english marks:");
scanf("%d",&m3);

Total=m1+m2+m3;
Average=Total/3.0;
printf("Total=%d\n",Total);
printf("Average=%f\n",Average);
if (Average>=80){
    printf("Grade:A\n");
}else if(Average>=70){
    printf("Grade:B\n");
}else if(Average>=60){
    printf("Grade:C\n");
}else if(Average>=50){
    printf("Grade:D\n");
}else{
    printf("Grade:F\n");

}
if(m1>=40&&m2>=40&&m3>=40){
    printf("Pass\n");
}else{
    printf("FAIL\n");
}
 return 0;
}



