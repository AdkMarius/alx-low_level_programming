#include "main.h"

/**main - check the code
 * @argc: number of argument
 * @argv: double pointer of argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	n = copy_from_file_to_file(argv[1], argv[2]);
	printf("-> %d\n", n);

	return (0);
}
