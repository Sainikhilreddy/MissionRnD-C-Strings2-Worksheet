/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/
#include<stdio.h>

char * get_sub_string(char *,int,int);


int main(){


	//Test Consonants_Vowels

	//Test getFrequencyofWord

	//Test getSubstring

	//Test getLastWord
	char str[] = "abcdefgh.,812639";
	
	char *p = get_sub_string(str, 5,1);
	printf("\n%s", p);
	
	return 0;
}