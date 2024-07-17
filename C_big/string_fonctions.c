#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";

    // strlwr(string1);                            // converts a string to lowercase
    // strupr(string1);                            // convert a string to upercase
    // strcat(string1, string2);                   // append the end of string2 to string2 (BroCode)
    // strncat(string1, string2, n);               // append a n character to from  string2 to string2 (BroCode) (n = 1 ==> BroC)
    //strcpy(string1, string2);                    // copy string2 to string1 (output ==> code)
    //strncpy(string1, string2, n);                // copy n carcters of  string2 to string1 ( n = 1, output ==> cro) 
    // strset(string1, '?');                      // sets all the characters of a string to a given character
    // strnset(string1, 'x', 1)                   // sets first character of a string to a given character
    //strrev(string1);                            // reverse the string (bro ==> orb)

    
    printf("%s", string1);

}
 