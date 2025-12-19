#include<stdio.h>
void task1()
{
    int a,b;
    float c;
    a=10;
    b=15;
    c=12.6;
    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);
    printf("The value of c=%f\n",c);

}
void task2()
{
    int height,width;
    int perimeter,area;
    height=7;
    width=5;
    perimeter=2*(height+width);
    area=height*width;
    printf("Perimeter of a rectangle=%d\n",perimeter);
    printf("Area of a rectangle=%d",area);
}
void task3()
{

    int C;
    float F;
    scanf("%d",&C);
    F=(C*9.0)/5+32;
    printf("Temperature=%f",F);
}
void task4()
{
    int r;
    float volume;
    scanf("%d",&r);
    volume=4.0/3*3.1416*r*r*r;
    printf("Volume=%f",volume);

}
void task5()
{
    int r;
    r=3;
    float perimeter,area;
    perimeter=2*3.1416*r;
    area=3.1416*r*r;
    printf("Perimeter=%f\n",perimeter);
    printf("Area=%f",area);

}
void task6()
{
    int h,w,perimeter;
    scanf("%d%d",&h,&w);
    perimeter=2*(h+w);
    printf("Perimeter=%d",perimeter);

}
void task7()
{
    int h,m;
    int total_minute;
    scanf("%d%d",&h,&m);
    total_minute=(60*h)+m;
    printf("Total minute=%d",total_minute);

}
void task8()
{
    float w1,w2,value;
    int p1,p2;
    scanf("%f%f%d%d",&w1,&w2,&p1,&p2);
    value=(p1*w1)+(p2*w2)/(p1+p2);
    printf("Their average value=%f",value);


}
void task9()
{
    int total_second;
    total_second=4000;
    float hours,minutes,seconds;
    hours=total_second/3600;
    minutes=(total_second%3600)/60;
    seconds=total_second%60;
    printf("Total hours=%f\n",hours);
    printf("Total minutes=%f\n",minutes);
    printf("Total second=%f",seconds);

}
void task10()
{
    int id,hour,amount,salary;
    scanf("%d%d%d",&id,&hour,&amount);
    salary=hour*amount;
    printf("An employee's ID=%d\n",id);
    printf("the salary of the employee for a particular month=%d",salary);

}
//lab3
void task11()
{
    int grade_number;
    printf("Enter The Number\n");
    scanf("%d",&grade_number);
    if(grade_number>=60)
    {
        printf("\nPassed\n");
    }


    else
    {

        printf("\nFailed\n");

    }

}
void task12()
{
    int a,b;
    printf("Enter The Number\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Two integers are equal\n");
    }
    else
    {
        printf("Two integers are not equal\n");
    }
}
void task13()
{


        int number;
        printf("Enter The Number\n");
        scanf("%d",&number);
        if(number%2==0)
        {
            printf("\nThe Number is Even\n");
        }

        else
        {

            printf("\nThe Number is odd\n");

        }

    }
    void task14()
    {



            int number,square,cube;
            printf("Enter The Number\n");
            scanf("%d",&number);
            square=number*number;
            cube=number*number*number;
            if(number%2==0)
            {

                printf("\nThe value of square=%d",square);

            }

            else
            {

                printf("\nThe value of cube=%d",cube);

            }


}
void task15()
{
    int number;

printf("Enter The Number\n");

scanf("%d",&number);

if(number>=0){

printf("\nThe number is positive\n"); }

else{

printf("\nThe number is negative\n");

}


}
void task16()
{
    int age;

printf("Enter The age\n");

scanf("%d",&age);

if(age>=18){

printf("\nThe candidate is eligible for casting his / her own vote\n");

}

else{

printf("\nThe candidate is not eligible for casting his / her own vote\n");

}

}
void task17()
{
    int m,n;

printf("Enter The value\n");

scanf("%d",&m);

if(m>0){

n=1;

}

else if(m==0){

n=0;

}

else{

n=-1;

}

printf("The value of n=%d",n);

}
void task18()
{
    int x,y;

printf("Enter The point\n");

scanf("%d%d",&x,&y);

if(x>0&&y>0){

printf("The point is 1st quadrant");

}

else if(x<0&&y>0){

printf("The point is 2nd quadrant");

}

else if(x<0&&y<0){

printf("The point is 3rd quadrant");

}

else if(x>0&&y<0){

printf("The point is 4th quadrant");

}

else if(x==0&&y==0){


printf("The point is origin");

}

else if(x!=0&&y==0){

printf("The point is on x axix");

}

else if(x==0&&y!=0){

printf("The point is on y axix");

    }



}
void task19()
{
    int number;

printf("Enter The Number\n");
 scanf("%d",&number);
 if(number%5==0&&number%11==0){

printf("\nThe number is divisible\n");

}

else{

printf("\nThe number is not divisible\n");

}


}
void task20()
{
    char ch;

printf("Enter The character\n");
 scanf("%c",&ch);



if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("\nThe word is vowel\n");

}

else{

printf("\nThe word is cosonant\n");

}

}
void task21()
{
    char ch;

printf("Enter The character\n");
 scanf("%c",&ch);
  if(ch>='a'&&ch<='z'){

printf("\nThe number is small letter\n");

}

else if (ch>='A'&&ch<='Z'){

printf("\nThe character is capital letter \n");

}

else if(ch>=0&&ch<=9){

printf("The number is digit");

}

else{

printf("special symbol");
   }

}
//lab4
void task22()
{
       int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("You enter %d\n",i);
     }

}
void task23a()
{
     int n,i,sum;
    i=1;
    scanf("%d",&n);
    sum=0;
    while(i<=n){

             sum =sum+i;
            if(i!=n){
                printf("%d+",i);
            }
            else{
                printf("%d=\n",i);
            }
              i++;
    }
      printf("Sum=%d",sum);

}
void task23b()
{
    int n,i,sum;
     i=1;
      sum=0;
     scanf("%d",&n);
     while(i<=n){
            sum=sum +i;
        if(i!=n){
            printf("%d+",i);
        }
        else{
            printf("%d=\n",i);
        }
        i=i+2;

     }
     printf("\nsum=%d\n",sum);

}
void task23c()
{
              int i,n,sum;
          sum=0;
          i=2;
          scanf("%d",&n);
          while(i<=n){
                sum=sum+i;
            if(i!=n){
                printf("%d+",i);
            }
          else{
            printf("%d=\n",i);
          }
            i=i+2;


          }
          printf("\nsum=%d",sum);

}
void task23d()
{
              int i,n,sum;
          sum=0;
          i=1;
         scanf("%d",&n);
          while(i<=n){
                sum=sum+1;
            if(i!=n){
                printf("%d+",i);
            }
          else{
            printf("%d=\n",i);
          }
            i=i+sum;


          }
          printf("\nsum=%d\n",sum);


}
void task24()
{
               int x,y,i,result;
           result=1;
           scanf("%d%d",&x,&y);
           for(i=0;i<y;i++){
                result=result*x;
                }
          printf("Result=%d",result);

}
void task25()
{
                int number,count=0;
            double sum=0.0;
            printf("Enter a list of integers(enter 9999 to stop):\n");
            while(1){
                printf("Enter number  ");
                scanf("%d",&number);
                if(number==9999){
                   break;
                   }
                   sum=sum+number;
                   count++;
            }


}
void task26()
{
         int n,sum,i;
     sum=0;
     scanf("%d",&n);
     printf("value\tsum\n");
     for(i=2;i<=n;i=i+2){
            sum=i+sum;
            if(i%2==0){
        printf("%d\t%d\n",i,sum);
        }
        else{
            printf("others number");
        }
     }

}
void task27()
{
               int n, i, first, second, next;
           first=0;
           second=1;
           scanf("%d",&n);
           for(i=0;i<=n;i++){
            if(i<=1){
                next=i;
            }
            else{
               next=first+second;
               first=second;
               second=next;
            }
            printf("%d ",next);
           }

}
void task28()
{
               int n,i,sum;
           scanf("%d",&n);
           sum=1;
           for(i=n;i>=1;i--){
                printf("%d",i);
                 if(i>1){
                    printf("*");
                 }
              sum=sum*i;
             }

           printf("\n%d\n",sum);

}
void task29()
{
    int number, i, sum;
    sum=0;
    scanf("%d",&number);
    for(i=1; i<number; i++)
    {

        if(number%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nsum=%d\n",sum);
    if(number!=sum)
    {
        printf("the number is not perfect");
    }

}
void task30()
{
              int number, i, sum,main_number;
          sum=0;

          printf("Input a number ");
          scanf("%d",&number);
           main_number=number;
          while(number!=0){
                i=number%10;
                sum=sum+(i*i*i);

                number=number/10;
            }
          if(main_number==sum){
            printf("%d is an Armstrong number",main_number);
          }
         else{
printf("%d is not an Armstrong number",main_number);
          }


}
void task31()
{
              int number, i, flag;
          flag=0;
          scanf("%d",&number);
          for(i=2;i<number;i++){

             if(number%i==0){
              printf("%d is not prime number\n",number);
              flag=1;
              break;
             }
             }
           if(flag==0){
            printf("%d is a prime number",number);
           }

}
void task32()
{
             int number,reversed_number=0,i,main_number;
         main_number=number;
         printf("Input a number ");
         scanf("%d",&number);
         while(number!=0){
            i=number%10;
            reversed_number=reversed_number*10+i;
            number=number/10;
         }

                printf("%d\n",reversed_number);

}
void task33()
{
             int number,palindrome_number=0,i,main_number;

         printf("Input a number ");
         scanf("%d",&number);
          main_number=number;
         while(number!=0){
            i=number%10;
            palindrome_number=palindrome_number*10+i;
            number=number/10;
         }
               if(main_number==palindrome_number){
                printf("%d is palindrome number\n",palindrome_number);
               }

}
void task34()
{
              int i,j;
          for(i=1;i<=4;i++){
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
          }

}
void task35()
{
    int i,j;
          for(i=1;i<=4;i++){
            for(j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");

          }

}
void task36()
{
             int i,j,number=1;
         for(i=1;i<=4;i++){
            for(j=1;j<=i;j++){
                printf("%d ",number);
                number++;
            }
            printf("\n");
            }

}
void task37()
{
        int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }

}
//lab5
void task38()
{
        int n,i;
    printf("Input size: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Input elements %d: ",i);
        scanf("%d",&array[i]);
    }
     for(i=0;i<n;i++){
            if(i!=n-1){
            printf("%d,",array[i]);
            }
            else{
                 printf("%d",array[i]);
            }
     }

}
void task39()
{
             int i,n,sum=0;
         printf("Input size: ");
         scanf("%d",&n);
         int array[n];
         for(i=0;i<n;i++){
            printf("Input elements %d: ",i);
         scanf("%d",&array[i]);
         }
         for(i=0;i<n;i++){
           sum=sum+array[i];
         }
         printf("Sum of all elements = %d",sum);

}
void task40()
{
    int n,i,largest_number,second_largest;
          printf("Input size: ");
         scanf("%d",&n);
         int array[n];

         for(i=0;i<n;i++){
         printf("Input elements %d: ",i);
         scanf("%d",&array[i]);
         }
         largest_number=array[0];
         second_largest=array[0];
         for(i=0;i<n;i++){
                if(largest_number<array[i]){
                    largest_number=array[i];
                }
         }

          for(i=0;i<n;i++){
                if(largest_number>array[i]&&second_largest<array[i]){
                    second_largest=array[i];
                }
         }
         printf("The largest number is =%d\n",largest_number);
         printf("The second largest number is =%d",second_largest);

}
void task41()
{
        int n,i;
    printf("Enter n number: ");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        printf("Enter array number %d: ",i);
        scanf("%d",&array[i]);
    }
    int pos;
    printf("Enter pos: ");
    scanf("%d",&pos);
    if(pos<0||pos>=n)
    {
        printf("Invalid position\n");

    }
    for(i=n-1; i>=pos-1; i--)
    {
        array[i+1]=array[i];
    }
    int value;
    printf("Enter value: ");
    scanf("%d",&value);
    array[pos-1]=value;
    n++;
    for(i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            printf("%d,",array[i]);
        }
        else
        {
            printf("%d",array[i]);
        }
    }

}
void task42()
{
        int n,i;
    printf("Enter n number: ");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        printf("Enter array number %d: ",i);
        scanf("%d",&array[i]);
    }
    int pos;
    printf("Enter pos: ");
    scanf("%d",&pos);
    if(pos<0||pos>=n)
    {
        printf("INvalid position");
    }
    for(i=pos;i<n;i++)
    {
        array[i]=array[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        if(i!=n-1){

        printf("%d,",array[i]);
        }
        else{
             printf("%d",array[i]);
        }
    }

}
void task43()
{
              int i,n;
         printf("Input size: ");
         scanf("%d",&n);
         int array[n];
         int reverse_array[n];
          for(i=0;i<n;i++){
         printf("Input elements %d: ",i);
         scanf("%d",&array[i]);
         }
         for(i=0;i<n;i++){
            reverse_array[i]=array[n-1-i];
         }
         for(i=0;i<n;i++){
            printf("%d ",reverse_array[i]);
         }

}
void task44()
{
        int array[10]={0};
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    int  temp=number;
    int digit,i,count=0;

    while(temp!=0)
    {
        digit=temp%10;
        array[digit]++;
        temp=temp/10;
    }
    for(i=0;i<10;i++){
       if(array[i]>1){
            count++;
       }
    }
    printf("Total number of duplicate elements found in the array is=%d",count);

}
void task45()
{
    int number,i;
    printf("Enter any number: ");
    scanf("%d",&number);
    int array[10]={0};
    int digit, temp=number;
    while(temp!=0)
    {
        digit=temp%10;
        array[digit]++;
        temp=temp/10;

    }
    for(i=0;i<10;i++)
    {
        if(array[i]==1)
        {
          printf("%d ",i);
        }
    }

}
void task46()
{
              int i,n,m,j;
         printf("Input size: ");
         scanf("%d%d",&m,&n);
         int array[m][n];

          for(i=0;i<m;i++){
                for(j=0;j<n;j++){
         printf("Input elements %d%d: ",i,j);
         scanf("%d",&array[i][j]);
                }
         }
          for(i=0;i<m;i++){
                printf("\n");
                for(j=0;j<n;j++){
                   printf("%d ",array[i][j]);
                }
          }


}
void task47()
{
              int i,j,m,n;
          printf("Input the size of the square matrix: ");
          scanf("%d %d",&m,&n);
          int array[m][n];
          int n_array[m][n];
          printf("Input elemrnts in the first matrix:\n");
          for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Element-[%d][%d]:",i,j);
                scanf("%d",&array[i][j]);
            }
          }
          printf("The first matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
            for(j=0;j<n;j++){
                printf("%d ",array[i][j]);

            }
          }
          printf("\n");
           printf("Input elemrnts in the second matrix:\n");
          for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Element-[%d][%d]:",i,j);
                scanf("%d",&n_array[i][j]);
            }
          }
          printf("The second matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
            for(j=0;j<n;j++){
                printf("%d ",n_array[i][j]);

            }
          }
          int sum[m][n];
          for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                    sum[i][j]=array[i][j]+n_array[i][j];
            }
          }
           printf("\n");
          printf("The addition of two matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
            for(j=0;j<n;j++){
                    printf("%d ",sum[i][j]);
            }
          }






}
void task48()
{
              int i,j,m,n,p,q,k,sum=0;

          printf("Input the rows and columns of the first matrix: ");
          scanf("%d %d",&m,&n);
          int array[m][n];

          printf("Input elemrnts in the first matrix:\n");
          for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Element-[%d][%d]:",i,j);
                scanf("%d",&array[i][j]);
            }
          }
          printf("The first matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
            for(j=0;j<n;j++){
                printf("%d ",array[i][j]);

            }
          }
          printf("\n");
           printf("Input the rows and columns of the second matrix: ");
          scanf("%d %d",&p,&q);
          int n_array[p][q];
           printf("Input elemrnts in the second matrix:\n");
          for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Element-[%d][%d]:",i,j);
                scanf("%d",&n_array[i][j]);
            }
          }
          printf("The second matrix is:\n");
          for(i=0;i<p;i++){
                printf("\n");
            for(j=0;j<q;j++){
                printf("%d ",n_array[i][j]);

            }
          }
          int result[m][q];
          for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                    sum=0;
                   for(k=0;k<n;k++){
                    sum=sum+array[i][k]*n_array[k][j];
                    result[i][j]=sum;

                   }
            }
          }
           printf("\n");
          printf("The multiplication of two matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
            for(j=0;j<q;j++){
                    printf("%d ",result[i][j]);
            }
          }


}
void task49()
{
              int i,n,m,j;
         printf("Input the rows and columns of the matrixs: ");
         scanf("%d%d",&m,&n);
         int array[m][n];
           printf("Input elements in the first matrix:\n");
          for(i=0;i<m;i++){
                for(j=0;j<n;j++){
         printf(" Element - [%d][%d]: ",i,j);
         scanf("%d",&array[i][j]);
                }
         }
          for(i=0;i<m;i++){
                printf("\n");
                for(j=0;j<n;j++){
                   printf("%d ",array[i][j]);
                }
          }
          printf("\n");
          int n_array[n][m];
          for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        n_array[j][i]=array[i][j];
                }
          }
          printf("The transpose of a matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
                for(j=0;j<n;j++){
                        printf("%d ",n_array[i][j]);
                }
          }

}
void task50()
{
            int i,n,m,j,sum=0;
         printf("Input the size of the square matrix:\n ");
         scanf("%d%d",&m,&n);
         int array[m][n];
         printf("Input elements in the first matrix:\n");
          for(i=0;i<m;i++){
                for(j=0;j<n;j++){
         printf(" Element- [%d][%d]: ",i,j);
         scanf("%d",&array[i][j]);
                }
         }
         printf("\n");
         printf("The matrix is :\n");
          for(i=0;i<m;i++){
                printf("\n");
                for(j=0;j<n;j++){
                   printf("%d ",array[i][j]);
                }
          }
          printf("\n");
           for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    if(i==j){
                        sum=sum+array[i][j];
                    }
                }
           }
           printf("Addition of the right Diagonal elements is: %d",sum);

}
void task51()
{
              int i,n,m,j,flag=0;
         printf("Input number of Rows for the matrix: \n");
         scanf("%d",&m);
         printf("Input number of Columns for the matrix: ");
         scanf("%d",&n);
         int array[m][n];
           printf("Input elements in the first matrix:\n");
          for(i=0;i<m;i++){
                for(j=0;j<n;j++){
         printf(" Element - [%d][%d]: ",i,j);
         scanf("%d",&array[i][j]);
                }
         }
         printf("\n");
         printf("The matrix is:\n");
          for(i=0;i<m;i++){
                printf("\n");
                for(j=0;j<n;j++){
                   printf("%d ",array[i][j]);
                }
          }
          printf("\n");
          for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if((i==j&&array[i][j]!=1)||(i!=j&&array[i][j]!=0)){
                   flag=0;

                }
            }

            }


          if(flag==1){
            printf("The matrix is an identity matrix.");
          }
          else{
            printf("The matrix is not an identity matrix.");
          }

}
void task52()
{
    int i,n,m,j,search,found=0;
    printf("Input number of Rows for the matrix: \n");
    scanf("%d",&m);
    printf("Input number of Columns for the matrix: ");
    scanf("%d",&n);
    int array[m][n];
    printf("Input elements in the first matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" Element - [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    printf("The matrix is:\n");
    for(i=0; i<m; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%d ",array[i][j]);
        }
    }
    printf("\n");
    printf("The given value for searching is: ");
    scanf("%d",&search);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(array[i][j]==search)
            {
                found=1;
                printf("The element Found at the position in the matrix is:%d,%d",i,j);
            }
        }
    }

}
int main()
{
    int flag;
    while(1){
    printf("Enter Task number: ");
    scanf("%d",&flag);
    if(flag==0)
    break;
    switch(flag)
    {
        case 1:task1();
        break;
        case 2:task2();
        break;
        case 3:task3();
        break;
        case 4:task4();
        break;
        case 5:task5();
        break;
        case 6:task6();
        break;
        case 7:task7();
        break;
        case 8:task8();
        break;
        case 9:task9();
        break;
        case 10:task10();
        break;
        case 11:task11();
        break;
        case 12:task12();
        break;
        case 13:task13();
        break;
        case 14:task14();
        break;
        case 15:task15();
        break;
        case 16:task16();
        break;
        case 17:task17();
        break;
        case 18:task18();
        break;
        case 19:task19();
        break;
        case 20:task20();
        break;
        case 21:task21();
        break;
        case 22:task22();
        break;
        case 23:task23a();
        break;
        case 24:task23b();
        break;
        case 25:task23c();
        break;
        case 26:task23d();
        break;
        case 27:task24();
        break;
        case 28:task25();
        break;
        case 29:task26();
        break;
        case 30:task27();
        break;
        case 31:task28();
        break;
        case 32:task29();
        break;
        case 33:task30();
        break;
        case 34:task31();
        break;
        case 35:task32();
        break;
        case 36:task33();
        break;
        case 37:task34();
        break;
        case 38:task35();
        break;
        case 39:task36();
        break;
        case 40:task37();
        break;
        case 41:task38();
        break;
        case 42:task39();
        break;
        case 43:task40();
        break;
        case 44:task41();
        break;
        case 45:task42();
        break;
        case 46:task43();
        break;
        case 47:task44();
        break;
        case 48:task45();
        break;
        case 49:task46();
        break;
        case 50:task47();
        break;
        case 51:task48();
        break;
        case 52:task49();
        break;
        case 53:task50();
        break;
        case 54:task51();
        break;
        case 55:task52();
        break;


    }
    }
}


