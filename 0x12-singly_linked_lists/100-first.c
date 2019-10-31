#include<stdio.h> 

/**
 * beforeMain - print before main
 *
 * Return: On succes 1.
 * On error.
 */

void beforeMain (void) __attribute__ ((constructor)); 

void beforeMain (void) 
{ 
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"); 
}
