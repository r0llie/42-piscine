#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_reverse_print_alphabet(void){

	char harf = 'z';

	while (harf >= 'a'){

	write(1,&harf,1);
	harf--;
	}

}


int main(void){

	ft_reverse_print_alphabet();
	return 0;

}
