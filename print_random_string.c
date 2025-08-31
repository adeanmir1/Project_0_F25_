#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// random string generator wrapper function
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size); 
     }
     return s;
}



int main()

{
    char *str;
    size_t size = 10;  

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size );
    printf("%s",str);
    free (str);
    

	return(0);
}