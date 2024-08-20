#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_print_alphabet(void){
	char harf = 'a' ;
	while (harf <= 'z'){
		write(1,&harf,1);
		harf++;
	}


}


int main(void){

	ft_print_alphabet();
	return 0;

}
