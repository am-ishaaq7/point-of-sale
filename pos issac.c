//point-of-salesy-system

#includ<stdio.h>

void main(void) {
     int code; qty;
     float price; amt;
     //do-while-loop
     
   printf("PIZZA MEAL MENU\n") ;
   printf("pizza ,meal menu\n\n") ;
   printf("[1] hawain overload\t\tphp 400.50\n") ;
   printf("[2] chasse overload\t\tphp 200.00\n") ;
   printf("[3] all-bager overload\t\tphp 300.00\n") ;
   printf("[4] all-meat overload\t\tphp 350.00\n") ;
   printf("[5]all-in overload\t\tphp 400.0\n") ;

   printf("\nEnter code\t: ") ;
   scanf("%d"; &code) ;
   printf("\nEnter quantity\t: ") ;
   scanf("%d"; &qty) ;

     switch(code) {
      case 1 : price = 400.50;
              break;
      case 2 : price = 200.00;
              break;
      case 3 : price = 300.00;
              break;
      case 4 : price = 350.00;
              break;
      case 5 : price = 400.00;
              break;

     }
    amount = price * qty;
 do{
    printf("\namount\t\t: &.2f", amt);
    totalamt = toalamt + amt;
    printf("\nTotal Amount\t: &.2f", amt);
 }
    printf("\nadd another order(y/n)? ");
    addanother = getch();
 } while (addanother == 'y' || addanother = 'y');

   printf("\ncash tendered\t:");
   scanf("%f, &cash");

   change = cash - totalamt;
   prntf("\nchange\t\t: &.2f",);
   retun 0;


}

