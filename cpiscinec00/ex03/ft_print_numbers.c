#include <unistd.h>

void ft_print_numbers(void){

	char rakam = '1';
	while(rakam <= '9'){
		write(1,&rakam,1);
		rakam++;
	}
}

int main(void){

	ft_print_numbers();
	return 0;

}

