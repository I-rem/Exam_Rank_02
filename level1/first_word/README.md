# Subject

> Assignment name  : first_word  
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------
> Write a program that takes a string and displays its first word, followed by a
newline.<br>
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.<br>
If the number of parameters is not 1, or if there are no words, simply display
a newline. <br>
Examples: <br>
$> ./first_word "FOR PONY" | cat -e <br>
FOR$ <br> <br>
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e <br>
this$ <br><br>
$> ./first_word "   " | cat -e <br>
$ <br> <br>
$> ./first_word "a" "b" | cat -e <br>
$ <br> <br>
$> ./first_word "  lorem,ipsum  " | cat -e <br>
lorem,ipsum$ <br>
$> <br> <br>

# Code

``` 
  #include <unistd.h>
  int main(int argc, char **argv)
  {
	  if (argc == 2)
	  {
      while (*argv[1] == ' ')
			argv[1]++;
		  while (*argv[1] != ' ' && *argv[1] != '\0')
		  {
        write (1, argv[1], 1);
			  argv[1]++;
		  }
	  }
	  write(1, "\n", 1);
	  return (0);
}
```
