#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    char ch;

    // Open input.txt in read mode
    input = fopen("input.txt", "r");

    // Check if input file exists
    if (input == NULL)
    {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output.txt in write mode
    output = fopen("output.txt", "w");

    // Check if output file can be opened
    if (output == NULL)
    {
        printf("Error: Cannot open output.txt\n");
        fclose(input);
        return 1;
    }

    // Read each character from input.txt
    while ((ch = fgetc(input)) != EOF)
    {
        // Convert lowercase character to uppercase
        ch = toupper(ch);

        // Write the character into output.txt
        fputc(ch, output);
    }

    // Close both files
    fclose(input);
    fclose(output);

    printf("Text converted successfully.");

    return 0;
}