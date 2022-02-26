# include <stdio.h>
# define MAX 400

float f_to_c(int f){
    // formula from Fahrenheit to Celsius  
    // (5/9)*(F-32)
    float result = (f-32)/1.8000;
    return result;
}

float c_to_f(int c){
    // formula from Fahrenheit to Celsius  
    // (5/9)*(F-32)
    float result = c * 1.8000 + 32.0;
    return result;
}

void getUserInput(){
    char text[MAX];
    printf("Scrie un text la libera alegere!\n");
    fgets(text, MAX, stdin);
    printf("Textul tau a fost:\n%s", text);
}


int main(){

    printf("100 grade Fahrenheit sunt %.2f grade Celsius\n", f_to_c(100));
    printf("38 grade Celsius sunt %.2f grade Fahrenheit\n", c_to_f(38));
    getUserInput();
    return 0;
}