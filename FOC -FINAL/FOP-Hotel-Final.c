#include <stdio.h>
#include <string.h>
#include <conio.h>
void items();
struct{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}person;
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    printf ("please enter your name: ");
    gets (person.name);
    person.order_number = 10000+order_count;
    items();
    person.number_of_food = n;
    person.cost = 0;
    person.number_of_food = 0;

    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the size of Burger: 1. 200gm  2. 300gm\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
       getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (130*qu);

        else person.cost += (180*qu);
        break;
    }
    case 12 :{
        printf ("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (750*qu);

        else if (i==2) person.cost += (975*qu);

        else  person.cost += (1250*qu);

        break;
    }
    case 13 :{
        printf ("Enter the amount of Fried Chicken: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (85*qu);

        else if (i==2) person.cost += (320*qu);

        else  person.cost += (790*qu);

        break;
    }
    case 14 :{
        printf ("Enter the size of Grilled Chicken: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (70*qu);

        else if (i==2) person.cost += (140*qu);

        else  person.cost += (250*qu);

        break;
    }
    case 15 :{
        printf ("Enter the size of Noodles: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (130*qu);

        else person.cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Enter the size of Pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (320*qu);

        else person.cost += (440*qu);

        break;
    }
      case 17 :{
        printf ("Enter the amount of Chicken Briyani: 1. single  2. double\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (200*qu);

        else person.cost += (300*qu);

        break;
    }
      case 18 :{
        printf ("Enter the size of Chicken Karahi: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (699*qu);

        else person.cost += (999*qu);

        break;
    }
    case 19 :{
        printf ("Enter the size of BBQ Platter: 1. single  2. double\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (2000*qu);

        else person.cost += (3000*qu);

        break;
    }
    case 20 : {
        printf ("250 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;
        person.cost += (180*qu);
        break;
    }
    case 21 : {
        printf ("\n250 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;
        person.cost += (65*qu);
        break;
    }
    case 22 :{
        printf ("Enter the amount of Espresso: 1. single  2. double\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (200*qu);

        else person.cost += (300*qu);

        break;
    }
    case 23 : {
        printf ("250 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;
        person.cost += (370*qu);
        break;
    }
    case 24 :{
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        person.number_of_food +=qu;

        if (i==1) person.cost += (20*qu);

        else person.cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
       goto level;
    printf ("\nNumber of food ordered %d\n", person.number_of_food);
    printf ("\nThank you %s for your order. Your bill is %d Rupees.\nPlease wait while we prepare the food.\n\n", person.name, person.cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return 0;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return 0;
    }

    printf ("Order no. %d by %s is ready\n", person.order_number,person.name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
   printf("\nYou can get your details in food.txt file\n\n");
   FILE *ifp;
 ifp = fopen("food.txt","w+");
 if(ifp == NULL){
 printf("file cant be opened\n");
}
 else{
 fprintf(ifp,"........DETAILS......\n");
 fprintf(ifp,"\nName : %s\n",person.name);
 fprintf(ifp,"Total order taken: %d\n", (order_count));
 fprintf (ifp,"Number of food ordered %d\n", person.number_of_food);
 fprintf(ifp,"Total number of order served %d\n", served_count);
 fprintf(ifp,"Number of Currently waiting to be served: %d\n", (order_count-served_count));
 fprintf(ifp,"\nThank you %s for your order. ", person.name);
 fprintf (ifp,"Your bill is %d Rupees.\n\n",person.cost);
 fclose(ifp);
}
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description-------------------Size--------------------Price(RS)\n");

    printf("[11]---------Burger---------------------200/300gm------------------130/180\n");
    printf("[12]---------Chicken Pizza--------------small/medium/large---------750/975/1250\n");
    printf("[13]---------Fried Chicken--------------1/4/10 pcs-----------------85/320/790\n");
    printf("[14]---------Grilled Chicken------------quarter/half/full----------250/350/450\n");
    printf("[15]---------Noodles--------------------Half/Full------------------130/250\n");
    printf("[16]---------Pasta----------------------Half/Full------------------320/440\n");
    printf("[17]---------Chicken Briyani------------Single/Double--------------200/300\n");
    printf("[18]---------Chicken Karahi-------------Half/Full------------------699/999\n");
    printf("[19]---------BBQ Platter----------------single/double--------------2000/3000\n");
    printf("[20]---------Oreo Shake-----------------250mg----------------------300\n");
    printf("[21]---------Cold Coffee----------------250mg----------------------250\n");
    printf("[22]---------Espresso-------------------single/double--------------200/300\n");
    printf("[23]---------Cappuccino-----------------250mg----------------------370\n");
    printf("[24]---------Coke-----------------------250/500mg------------------20/30\n");

}
int main ()
{
    printf("\n**************************************************************************\n");
    printf("******************Welcome To Hotel Szabist*******************************\n");
    printf("**************************************************************************\n\n");
    while(1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program \n");
		 printf ("\nSelect Number (1 - 4): ");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                printf ("\nWe are closed come again\n\n");
                printf ("\nTeam Members");
                // string variable
				  char str[20] = "Huzaifa Ahmed 1812337	";
				  char str2[30] = "Muhammad Hashir 2112223";
				  char str3[20] = "Meet kumar 2012122";
				  
				  // pointer variable
				  char *ptr = str;
				  char *ptr2 = str2;
				  char *ptr3 = str3;
				  
				  // print the string
				  while(*ptr != '\0') {
				    printf("%c", *ptr);
				    ptr++;
				    
				  }
				  printf("\n");
				  
				    while(*ptr2 != '\0') {
				    printf("%c", *ptr2);
				    ptr2++;
				  }
				    printf("\n");
				  
				    while(*ptr3 != '\0') {
				    printf("%c", *ptr3);
				    ptr3++;
				  }

  return 0;
            }
        }
    }
}
