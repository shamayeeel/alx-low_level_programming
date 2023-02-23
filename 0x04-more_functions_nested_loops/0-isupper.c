/**
 * is_uppercase - Checks if a character is uppercase
 *
 * @c: The character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int is_uppercase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}

