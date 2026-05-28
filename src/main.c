#include <stdio.h>

int main() {
	char users[3][6] = {"user1", "user2", "admin"};
	char passwords[3][13] = {"goodpassword", "badpassword", "adminpassword"};

   	for (int i = 0; i < 3; i++) { // this syntax looks just like javascript! :)
   		printf(users[i]);
     	printf(":");
      	printf(passwords[i]);
      	printf("\n");
    }

   	return 0;
}


/*
*

char arr_name[r][m] = {s1, s2, ...., sn};

arr_name: Name of the variable.
r: Maximum number of strings to be stored in the array
m: Maximum number of character values that can be stored in each string.
s1, s2, ...., sn: Strings to be stored.

*
*/
