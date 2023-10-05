#include "main_utils.h"




void pointers(){
     int age = 56;
     int* p_age = &age;
     int grades[][4] = {{12,23,45,56},{78,89,45,56},{32,65,98,54}};
     for(int i = 0; i < 3; i++){
          printArray(grades[i], 4);
          printf("\n");

     }

}

void printArray(int arr[], const int SIZE){
     for(int i = 0; i < SIZE; i++){
          printf("%d ", arr[i]);
     }
}

void functions(){
     int factor = 5;
     printf("%d", factorial(factor));// 120
}

int factorial(int factor){
     int factorial = 1;
     for (int i = factor; i > 1; i--){
          factorial *= i;
     }
     return factorial;
}

void arrays(){
     int student_grades[] = {60,68,79,81};
     int students_grades[][4] = {{60,68,79,81},{70,71,89,90},{80,85,89,86}};
     char item[11];
     printf("Please enter item name: ");
     scanf("%10s", item);
     printf("Item: %s\n", item);
     //printf("%d ", students_grades[2][2]);
     for (int i = 0; i < 3; i++){
          for(int k = 0; k < 4; k++){
               printf("%d\t", students_grades[i][k]);
          }
          printf("\n");
     }
     printf("%d", strlen(item));

}

void break_continue(){
     int target_number = 119;
     int search = 0;

     while(true){
          if(search == (target_number - 1)){
               search++;
               continue;
          }
          printf("%d ", search);
          if(search == target_number){
               printf("We found it");
               break;
          } 
          search++;

     }
}

void while_do_while(){
     int count_down = 10;
     int i = 0;
     int k;
     while(i <= count_down){
          k = i;
          while(k >= 0){
               printf("%d\t", k);
               k--;
          }
          printf("\n");
          i++;
     }

     int age;
     do{
          printf("Please enter age if above 20: ");
          scanf("%d", &age);
          

     }while((age > 0) && (age < 20));
}

void get_prime_numbers(){
     printf("Please input maximum number: ");
     int input_number;
     scanf("%d", &input_number);
     int prime_number_count = 0;
     //bool is_prime = true;
     int prime_numbers[input_number];

     
     for( int j = input_number; j > 1; j--){
          /*
               is_prime =  true;
               for(int i = (j - 1); i > 1; i--){
                    if((j % i) == 0){
                         is_prime = false;
                    }
               }
          */
          if(is_prime(j)){
               prime_numbers[prime_number_count] = j;
               prime_number_count++;
          }
     }
     //printf("input :%d", input_number);
     for(int i = prime_number_count; i > 0; i--){
          printf("%d\t", prime_numbers[i - 1]);
     }
     printf("\nThere are %d prime numbers between 1 and %d", prime_number_count, input_number);
}

bool is_prime(int number){

     for(int i = sqrt(number); i > 1; i--){
          if((number % i) == 0){
               return false;
          }
     }
     return true;
}

void for_loops(){
     //Initialisation ; Comparison ; Update
     //ICU
     /*
          printf("Please enter number of iterations: ");
          int max_iteration;
          scanf("%d", &max_iteration);
          for (int i = 0; i < max_iteration; i++){
               printf("%d\t", i);
          }
          for(; max_iteration > 0; max_iteration -= 2){
                    printf("%d\t", max_iteration);

          }
     */
     for(int i = 1; i < 10+1; i++){
          for(int j = i-1; j >= 0 ; j-- ){
               printf(" %d\t",  j);
          }
          printf("\n");

     }
}

void ternary_operator(){
     double cost = 25.89;
     double money = 200;
     
     (cost > money) ? printf("Sorry, You need $%lf more to purchase this item.", cost - money) : printf("You've got your item.");
}

void input_buffer(){
     printf("Please enter your name: ");
     char first_name[10] ;
     char last_name[10] ;
     
     scanf("%s", first_name);
     //getchar();
     scanf("%s", last_name);
     printf("My name is: %s %s", first_name, last_name);
}

void healthy_eating(){
     printf("Please enter the amount of rollers you had today: ");
     unsigned int rollers;
     double calories = 250;
     scanf("%i", &rollers);

     switch(rollers){
          case 1:
               printf("You're doing great job.\n");
               break;
          case 2:
               printf("You're doing great job but watch your food.\n");
               break;
          case 3:
               printf("You're having too much please cut down.\n");
               break;
          case 4:
               printf("You're on the verge of attaining health complications.\n");
               break;
          default:
               printf("Good Luck with your heart disease.\n");
               break;
     }
     printf("You had %f calories\n", (double) calories * rollers);
}

int hospital_menu(){
     int service;
     printf("Please select options (0 - 4): \n");
     printf("1. Add a patient\n");
     printf("2. select a patient\n");
     printf("3. review a patient\n");
     printf("0. Exit\n");
     while(scanf("%d", &service)){
          if(service == 1){
               printf("Adding a patient...\n");
               break;
          } else if (service == 2){
               printf("selected a patient...\n");
               break;
          } else if (service == 3){
               printf("reviewing a patient...\n");
               break;
          }else if (service == 0){
               printf("Do you want to save your changes? Y/N: ");
               char save;
               while((getchar() != '\n'));
               scanf("%c", &save);
               if(save == 'Y'|| save == 'y'){
                    printf("Saving...\n");
               } else if (save == 'N'|| save == 'n'){
                    printf("Wait as we exit...\n");
               } else{
                    printf("Wrong character, you are being suspeciouse...\n");
               }
               printf("Exiting...\n");
               break;
          } else{
               printf("Invalid input, please enter values from (0 - 4): \n");
          }
     /*
          switch(service){
               case 1:
                    printf("Adding a patient...\n");
                    return 0;
               case 2:
                    printf("Selected a patient...\n");
                    return 0;
               case 3:
                    printf("Reviewing a patient...\n");
                    return 0;
               case 0:
                    printf("Exiting...\n");
                    return 0;
               default:
                    printf("Invalid input, please enter values from (0 - 4): \n");
               
          }

     */
     }
     return 0;
}

void guess_random_number(){
     srand(time(NULL));
     int max_value = 10;
     int random_number = rand() % (max_value + 1);
     printf("Random Number: %d\n", random_number);
     int number_guess;
     printf("Please guess a number from 0 to %d: ", max_value);
     while(true){
          scanf("%d", &number_guess);
          if(number_guess == random_number){
               printf("Congratulations you guessed the number: %d\n", number_guess);
               break;
          } else if (number_guess > random_number) {
               printf("Sorry your guess was wrong, try guessing lower: ");
          } else if (number_guess < random_number) {
               printf("Sorry your guess was wrong, try guessing higher: ");
          }
     }
}

void flow_control(){
     bool katoIsHustle;
     printf("Do you feel Kato?(0 : true, 1 : false): ");
     scanf("%d", &katoIsHustle);

     if(katoIsHustle){
          printf("Welcome to C programming with Kato Kenneth");
     }
}

double get_hypotenuse(double a, double b){
     a *= a;
     b *= b;
     double result = sqrt(a+b);
     return result;
}

void operators(){
     //Unary Binary Ternary
     // Arithmetic Logical Assignment Realtional

     int age = 50; 
     int myAge = ++age;
     int remainder = myAge % 12;
     printf("%d\n", remainder);
     remainder--;
     printf("%d\n", remainder);
     printf("%d\n", myAge);
     printf("%d\n", age);

     int cars = 100;
     cars += 100;
     cars -= 100;
     cars *= 2;
     cars /= 5;
     cars %= 2;
     printf("%d", cars);

}

void booleans(){
     _Bool todayIsThursday = 100;
     bool youAreTripping = false;
     printf("Today is Thursday, (0 is false, 1 is true): %i", todayIsThursday);
     switch(youAreTripping){
          case 1:
               printf("Facts: %d\n", youAreTripping);
               break;
          case 0:
               printf("False: %d\n", youAreTripping);
               break;


     }
}

void characters(){
     char character;
     printf("Please enter character: ");
     scanf("%c", &character);
     printf("%c\t %d\n", character, character);

     char character1 ;
     char character2 ;
     printf("Please enter character: ");
     scanf("%c %c", &character1, &character2 );
     int sum = character2 + character1;
     printf("Sum of %d and %d is %c(%d)", character1, character2, sum, sum );
}

void numeric_values(){
     double dog_count;
     printf("Please enter value: ");
     scanf("%lf", &dog_count);
     printf("There are %f \t %e \t %g Dogs.\n", dog_count, dog_count, dog_count); //float exponential computer decision
     printf("%d %f %f\n", 90, 90.156f, 90.156);
}

void string_test(){
     char name[31]; //null termination character +1
     printf("Please enter your name: ");
     scanf("%s", name);
     printf("Hey %s, How are you doing?\n", name);
}

void static_casting(){
     int eggs;
     printf("Please enter the number of eggs: ");
     scanf("%d", &eggs);
     double dozen_count = (double) eggs / 12;
     printf("You have %f dozens of eggs.\n", dozen_count);
}

void input_output(){
     double radius = 0;
     printf("Please enter a radius: ");
     scanf("%lf", &radius);
     double area = M_PI * (radius * radius);
     printf("The area of a circle with radius (%f) is: %f/n", radius, area);
}

void print(){
     int x = 10;
     int y = x / 2;
     printf("Hallo World\n%d / 2 is %d", x, y);
     //printf("%i",y);
     //printf("%i\n", y);
}