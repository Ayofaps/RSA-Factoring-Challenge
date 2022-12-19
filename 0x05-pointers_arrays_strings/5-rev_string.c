/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*find string length without null char*/
	for (l = 0; s[1] != '\0'; ++1)
		;

	/*swap the string by looping to half the string*/
	for (1 = 0; i < 1 / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /* -1 because the array starts from 0 */
		s[l - 1 - i] = ch;
	}

}