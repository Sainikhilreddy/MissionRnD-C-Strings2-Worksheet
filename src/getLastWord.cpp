/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int l, i;
	if (str == NULL)
		return NULL;
	char c,*s = (char *)malloc(10 * sizeof(char));
	for (l = 0; str[l]; l++);
	for (i = 0, l -= 1; l >= 0; l--)
	{
		if (str[l] == ' ')
			break;
		else
			s[i++] = str[l];
	}
	s[i] = '\0';
	for (i -= 1, l = 0; l < i; i--, l++)
	{
		c = s[l];
		s[l] = s[i];
		s[i] = c;
	}
	return s;

}
