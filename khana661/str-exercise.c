#include <stdio.h>
#include <string.h>

int has_exact_n_chars(const char *str, int n){
	int length = strlen(str);

	if (length == n) {
		return 1;
	} else {
		return 0;
	}

}


int main() {
	
	printf("'Hello' has 5 chars? %d\n",has_exact_n_chars("Hello",5));
    printf("'Apple' contains 'A'? %d\n", contains_char("Apple", 'A'));

    return 0;
}



