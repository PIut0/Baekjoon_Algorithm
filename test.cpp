//���α׷� ����
//�ۼ���:
//�ۼ���: 
#include <stdio.h>
#include <math.h>
#define PI 3.14

//�簢���� ���̸� ���ϴ� �Լ� 
double Area_of_Rectangle(double x, double y){
   return x*y;
}

//�ﰢ���� ���̸� ���ϴ� �Լ�
double Area_of_Triangle(double x, double y, double z){
   double s=0;
   s = (x+y+z)/2;
   return sqrt(s*(s-x)*(s-y)*(s-z));
}

//���� ���̸� ���ϴ� �Լ�
double Area_of_Circle(double x){
   return x*x*PI;
} 

//����纯���� ���̸� ���ϴ� �Լ�
double Area_of_Parallelogram(double x, double y){
   return x*y;
} 

//�ִ��� ���ϴ� �Լ�
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

//main �Լ� 
int main(){
   char menu;
   double sum=0, max_s;
   double x, y, z;
   
   //'q'�� ������ ������ ��� �ݺ� 
   while(menu!='q'){
      // �ʱ�޴� ���� �� �޴� �Է� 
      printf("1:�簢���� ���� ���ϱ�\n2:�ﰢ���� ���� ���ϱ�\n3:���� ���� ���ϱ�\n4:����纯���� ���� ���ϱ�\nq:���α׷� ����\n���ϴ� �޴��� �����Ͻÿ�: ");
      scanf("%c", &menu); 
      
      //1�� �޴��� �������� �� 
      if(menu == '1'){
         printf("���ο� ������ ���̸� �Է��Ͻÿ�: ");
         scanf("%lf %lf",&x,&y);
         if(x==0 || y==0){
            printf("0�� ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf%lf", &x, &y);
         }
         else if(x<0 || y<0){
            printf("������ ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf%lf", &x, &y);
          }
         sum = Area_of_Rectangle(x,y);
         printf("�簢���� ���̴� %lf�Դϴ�.\n", sum);
      }
      
      //2�� �޴��� �������� �� 
      else if(menu == '2'){
         printf("������ ���̸� �Է��Ͻÿ�: ");
         scanf("%lf%lf%lf", &x, &y, &z);
         max_s = maxi(x, y, z);
         if(x==0 || y==0 || z==0){
            printf("0�� ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf%lf%lf", &x, &y, &z);
         }
         else if(x<0 || y<0 || z<0){
            printf("������ ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf%lf%lf", &x, &y, &z);
         }
         else if(max_s>x+y+z-max_s){
            printf("���� �� ���� ũ�Ⱑ ������ �κ��� ���Ѱ� ���� Ů�ϴ�.\n");
            scanf("%lf%lf%lf", &x, &y, &z);
         }
         sum = Area_of_Triangle(x, y, z);
         printf("�ﰢ���� ���̴� %lf�Դϴ�.\n", sum);
      }
      
      //3�� �޴��� �������� �� 
      else if(menu == '3'){
         printf("�������� �Է��Ͻÿ�: ");
         scanf("%lf", &x);
         if(x==0){
            printf("0�� ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf", &x);
         }
         else if(x<0){
            printf("������ ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf", &x);
         }
         sum = Area_of_Circle(x);
         printf("���� ���̴� %lf�Դϴ�.\n", sum); 
      }
      
      //4�� �޴��� �������� �� 
      else if(menu == '4'){
         printf("�غ��� ���̸� �Է��Ͻÿ�: ");
         scanf("%lf%lf", &x, &y);
         if(x==0 || y==0){
            printf("0�� ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf%lf", &x, &y);
         }
         else if(x<0 || y<0){
            printf("������ ��ȿ���� ���� �Է� ���Դϴ�.\n");
            scanf("%lf%lf", &x, &y);
         }
         sum = Area_of_Parallelogram(x,y);
         printf("����纯���� ���̴� %lf�Դϴ�.\n", sum);
      }
      
      scanf("%c");
      //�ʱ� �޴��� ���� �޴��� �������� �� 
      if(menu != '1' && menu != '2' && menu != '3' && menu != '4' && menu != 'q'){
         printf("������ �� ���� �޴��Դϴ�.\n %c\n",menu);
      }

   }

}