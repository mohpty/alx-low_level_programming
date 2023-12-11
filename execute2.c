#include "shell.h"
char *arg2_array(char *buffer);
/**
 * remove_newline - removes newline character from string
 * @buffer: string
 *
 * Return: the pointer
 */
void *remove2_newline(char *buffer)
{
	buffer[strcspn(buffer, "\n")] = '\0';
	return (buffer);
}

/**
 * execute_command - executes a command
 * @buffer: buffer with the command to execute
 *
 * Return: void
 */
void execute2_command(char *buffer)
{
	const char *args;
	pid_t pid = fork();
	
	if (pid < 0)
	{
		perror("fork() error");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		args = arg_array(buffer);
		printf("BUFFER: %s\n", buffer);

		execve(args[0], args, NULL);

		perror("execvp() error");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}

/**
 * arg_array - seperate the buffer input to arg array
 *
 * Return: array of arguments
 */
char *arg_array(char *buffer)
{
	char *args[BUFFER_SIZE / 2];
	int i, j, k;
	/* i: going through buffer
	 * j: going through args
	 * k: going through each character of each arg
	 **/
	
	j = k = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] != ' ')
		{
			args[j][k++] = buffer[i];
		}
		else
		{
			args[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	args[0] = strconcat("/bin/", args[0]);
	printf("ARG0: %s\n", args[0]);
	return (*args);
}
