#include <unistd.h>

void ft_print_comb(void) {
    int h, t, u;

    for (h = 0; h <= 9; h++) {
        for (t = h + 1; t <= 9; t++) {
            for (u = t + 1; u <= 9; u++) {
                if(h == 7 && t == 8 && u == 9){
			char last[] = {h + '0', t + '0', u + '0'};
			write(1,last,3);
		}
		else{
			char digits[] = {h + '0', t + '0', u + '0', ',', ' '};
                	write(1, digits, 5);
		}
            }
        }
    }
}

int main(void) {
    ft_print_comb();
    return 0;
}

