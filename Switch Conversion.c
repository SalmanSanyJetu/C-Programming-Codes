#include<stdio.h>
 void main()
 {
   int x;
   float dl,tk,eu;
   printf("\n Press 1 for Dollar to Taka Conversion. ");
   printf("\n Press 2 for Taka to Dollar Conversion.");
   printf("\n Press 3 for Euro to Taka Conversion.");
   printf("\n Press 4 for Taka to Euro Conversion.");
   printf ("\n Enter your choice :");
   scanf("%d",&x);
   switch(x)
   { case 1:
        printf("\n enter your amount in Dollar: ");
        scanf("%f",&dl);
        tk=dl*119.51;
        printf("\nYour amount in Taka is :%.2f",tk);
        break;
     case 2:
       printf("\n enter your amount in Taka: ");
       scanf("%f",&tk);
       dl=tk/119.51;
       printf("\nYour amount in Dollar is :%.2f",dl);
       break;
    case 3:
       printf("\n enter your amount in Euro: ");
       scanf("%f",&eu); tk=eu*133.91;
       printf("\nYour amount in Taka is :%.2f",tk);
       break;
    case 4:
       printf("\n enter your amount in Taka : ");
       scanf("%f",&eu); tk=eu/133.91;
       printf("\nYour amount in Euro is :%.2f",tk);
       break;
    default :
        printf("\n Invalid Selection!!!!!!");
    }
}

