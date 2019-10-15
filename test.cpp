//프로그램 개요
//작성자:
//작성일: 
#include <stdio.h>
#include <math.h>
#define PI 3.14

//사각형의 넓이를 구하는 함수 
double Area_of_Rectangle(double x, double y){
   return x*y;
}

//삼각형의 넓이를 구하는 함수
double Area_of_Triangle(double x, double y, double z){
   double s=0;
   s = (x+y+z)/2;
   return sqrt(s*(s-x)*(s-y)*(s-z));
}

//원의 넓이를 구하는 함수
double Area_of_Circle(double x){
   return x*x*PI;
} 

//평행사변형의 넓이를 구하는 함수
double Area_of_Parallelogram(double x, double y){
   return x*y;
} 

//최댓값을 구하는 함수
double maxi(double x, double y, double z){
   double max=0;
   if(x>=y){
      max = x;
      if(max>=z){
         max = max;
      }
      else if(max<z){
         max = z;
      }
   }
   else if(x<y){
      max = y;
      if(max>=z){
         max = max;
      }
      else if(max<z){
         max = z;
      }
   }
   return max;
} 

//main 함수 
int main(){
   char menu;
   double sum=0, max_s;
   double x, y, z;
   
   //'q'가 나오기 전까지 계속 반복 
   while(menu!='q'){
      // 초기메뉴 공지 및 메뉴 입력 
      printf("1:사각형의 넓이 구하기\n2:삼각형의 넓이 구하기\n3:원의 넓이 구하기\n4:평행사변형의 넓이 구하기\nq:프로그램 종료\n원하는 메뉴를 선택하시오: ");
      scanf("%c", &menu); 
      
      //1번 메뉴를 선택했을 때 
      if(menu == '1'){
         printf("가로와 세로의 길이를 입력하시오: ");
         scanf("%lf %lf",&x,&y);
         if(x==0 || y==0){
            printf("0은 유효하지 않은 입력 값입니다.\n");
            scanf("%lf%lf", &x, &y);
         }
         else if(x<0 || y<0){
            printf("음수는 유효하지 않은 입력 값입니다.\n");
            scanf("%lf%lf", &x, &y);
          }
         sum = Area_of_Rectangle(x,y);
         printf("사각형의 넓이는 %lf입니다.\n", sum);
      }
      
      //2번 메뉴를 선택했을 때 
      else if(menu == '2'){
         printf("세변의 길이를 입력하시오: ");
         scanf("%lf%lf%lf", &x, &y, &z);
         max_s = maxi(x, y, z);
         if(x==0 || y==0 || z==0){
            printf("0은 유효하지 않은 입력 값입니다.\n");
            scanf("%lf%lf%lf", &x, &y, &z);
         }
         else if(x<0 || y<0 || z<0){
            printf("음수는 유효하지 않은 입력 값입니다.\n");
            scanf("%lf%lf%lf", &x, &y, &z);
         }
         else if(max_s>x+y+z-max_s){
            printf("가장 긴 변의 크기가 나머지 두변을 더한값 보다 큽니다.\n");
            scanf("%lf%lf%lf", &x, &y, &z);
         }
         sum = Area_of_Triangle(x, y, z);
         printf("삼각형의 넓이는 %lf입니다.\n", sum);
      }
      
      //3번 메뉴를 선택했을 때 
      else if(menu == '3'){
         printf("반지름을 입력하시오: ");
         scanf("%lf", &x);
         if(x==0){
            printf("0은 유효하지 않은 입력 값입니다.\n");
            scanf("%lf", &x);
         }
         else if(x<0){
            printf("음수는 유효하지 않은 입력 값입니다.\n");
            scanf("%lf", &x);
         }
         sum = Area_of_Circle(x);
         printf("원의 넓이는 %lf입니다.\n", sum); 
      }
      
      //4번 메뉴를 선택했을 때 
      else if(menu == '4'){
         printf("밑변과 높이를 입력하시오: ");
         scanf("%lf%lf", &x, &y);
         if(x==0 || y==0){
            printf("0은 유효하지 않은 입력 값입니다.\n");
            scanf("%lf%lf", &x, &y);
         }
         else if(x<0 || y<0){
            printf("음수는 유효하지 않은 입력 값입니다.\n");
            scanf("%lf%lf", &x, &y);
         }
         sum = Area_of_Parallelogram(x,y);
         printf("평행사변형의 넓이는 %lf입니다.\n", sum);
      }
      
      scanf("%c");
      //초기 메뉴에 없는 메뉴를 선택했을 때 
      if(menu != '1' && menu != '2' && menu != '3' && menu != '4' && menu != 'q'){
         printf("선택할 수 없는 메뉴입니다.\n %c\n",menu);
      }

   }

}