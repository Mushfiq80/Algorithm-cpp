#include<stdio.h>

int main()
{
    int marks;
   printf("Enter your percentage:\n");
   scanf("%d", &marks);
   if(marks>=80)
   {
       /* Percentage between 80-100 */
        printf("Your Grade : A+(Plus) GP 4.00\n" );
   }
   else if(marks>=75)
   {
       /* Percentage between 75-79 */
        printf("Your Grade : A(Plain) GP 3.75\n" );
   }
   else if(marks>=70)
   {
       /* Percentage between 70-74 */
        printf("Your Grade : A-(Minus) GP 3.50\n" );
   }
   else if(marks>=65)
   {
       /* Percentage between 65-69 */
        printf("Your Grade : B+(Plus) GP 3.25\n" );
   }
   else if(marks>=60)
   {
       /* Percentage between 60-64 */
        printf("Your Grade : B(Plain) GP 3.00\n" );
   }
   else if(marks>=55)
   {
       /* Percentage between 55-59 */
        printf("Your Grade : B-(Minus) GP 2.75\n" );
   }
   else if(marks>=50)
   {
       /* Percentage between 50-54 */
        printf("Your Grade : C+(Plus) GP 2.50\n" );
   }
   else if(marks>=45)
   {
       /* Percentage between 45-49 */
        printf("Your Grade : C(Plain) GP 2.25\n" );
   }
   else if(marks>=40)
   {
       /* Percentage between 40-44 */
        printf("Your Grade : D (Plain) GP 2.00\n" );
   }
   else
   {
       /* Percentage less than 40 */
        printf(" F (Fail) GP 0.00\n" );
   }
   return 0;
}
