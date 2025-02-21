#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{

  int len;   /* current line lenght*/
  int max;   /* maxline length seen so far*/
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)
    printf("%s", longest);
  return 0;

}


/* Function to read a line s , return lenght called getLine:::::*/
int getLine(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
  s[i] = '\0';
  return i;
}

/*  copy function to copy from into to */

void copy(char to[], char from[])
{

  int i;
  i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;

}
