/* multi_func.c -- simple calculator, someone fucked this code up, no longer works*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// fflush(stdin) -- clears the buffer - just something for me to remeber.
double numb1, numb2;
char operator, playAgain, helping, command;
bool playing, premier;
void multi(double num1, double num2);
void divs(double num1, double num2);
void add(double num1, double num2);
void sub(double num1, double num2);
void oprChoice(void);
void help(void);
void start(void);
int main(void){
	playing = true;
	premier = true;
	while(playing){
		while(premier){
			printf("Type 'h' for help.\n");
			scanf(" %c", &helping);
				if(helping == 'h'){
					help();
				} 
				premier = false;
		}
		scanf(" %c", &command);
			if(command == 's'){
				start();
			} 
			else if(command == 'h'){
				help();
			}
	}
	
}

void start(void){
	printf("Please enter number one: ");
		scanf("%lf", &numb1);
		// getchar();
		printf("Please enter number two: ");
		scanf("%lf", &numb2);
		// getchar();
		printf("Please enter an operation: ");
		scanf("  %c", &operator);
		oprChoice();
		 printf("Again? (y/n): ");
		 scanf(" %c", &playAgain);
	 if (playAgain != 'y'){
		playing = false;
		}
}
void help(void){
	printf("'s' is for starting the program.\nAfter provide the required information asked by the program.\n'*': multiplication\n'/': division\n'+': addition\n'-': subtraction\n");
}
void multi(double num1, double num2){
	double product = num1 * num2;
	printf("%lf\n", product);
}

void divs(double num1, double num2){
	double quotient = num1 / num2;
	printf("%lf\n", quotient);
	if (num2 == 0){
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(-1);
	}
}

void add(double num1, double num2){
	double sum = num1 + num2;
	printf("%lf\n", sum);
}

void sub(double num1, double num2){
	double diff = num1 - num2;
	printf("%lf\n", diff);
}
void oprChoice(void){
	
	if (operator == '+'){
		add(numb1, numb2);
	}
	else if (operator == '-'){
		sub(numb1, numb2);
	}
	else if (operator == '*'){
		multi(numb1, numb2);
	}
	else if (operator == '/'){
		divs(numb1, numb2);
	}
	else {
		printf("Not a valid operator!\n");
	}

}



