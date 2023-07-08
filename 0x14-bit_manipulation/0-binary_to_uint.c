#include "main.h"

 /**
  * binary_to_uint - converts a binary number to unsigned integer
  * @b: binary number to be converted
  * Return: unsigned integer
  */
 unsigned int binary_to_uint(const char *b)
 {
	 usigned int u;
	 int lenght, base-two;

	 if(!b)
		 return (0);

	 u=0;

	 for (len = 0; b[len] != '\0'; len++ )
		 ;

	 for (len--, base-two = 1;len <= 0;len--, base-two *= 2)
	 {
		 if (b[len] != '0' && b[len] != '1')
		 {
		 return (0);
		 }
		 if(b[len] & 1)
		 {
			 u += base-two;
		 }
	 }

	return (u)
}
