/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<stdio.h>

int count_word_in_str_way_1(char *str, char *word){
	int i, j, l, lw, c;
	for (lw = 0; word[lw]; lw++);
	for (i = 0,j=0,l=0,c=0; str[i]!='\0'; i++)
	{
		if (word[j] == str[i])
		{
			j++;
			l++;
		}
		if (l == lw)
		{
			l = 0;
			j = 0;
			c++;
		}
		
					
	}
	return c;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

