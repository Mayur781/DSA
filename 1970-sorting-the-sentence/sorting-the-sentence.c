#include <string.h>
#include <stdlib.h>

char * sortSentence(char * s)
{
    char *words[10] = {NULL};
    char *token;

    // Split the string using space
    token = strtok(s, " ");

    while (token != NULL)
    {
        int len = strlen(token);

        // Last character is the position
        int pos = token[len - 1] - '0';

        // Remove the digit
        token[len - 1] = '\0';

        // Store the word
        words[pos] = token;

        token = strtok(NULL, " ");
    }

    // Allocate memory for result
    char *result = (char *)malloc(201 * sizeof(char));
    result[0] = '\0';

    for (int i = 1; i <= 9; i++)
    {
        if (words[i] != NULL)
        {
            strcat(result, words[i]);

            if (i < 9 && words[i + 1] != NULL)
            {
                strcat(result, " ");
            }
        }
    }

    return result;
}