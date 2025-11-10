
int        ft_strncmp(char* s1, char* s2, unsigned int n)
{
  int i = 0;
  while (s1[i] != '\0' && i < n)
  {
    if (s1[i] == s2[i]) i++;

    else
    {
      char sub = s1[i] - s2[i];

      return (sub > 0) ? 1 : -1;
    }
  }
  
  return 0;
}


/* int main()
{
  char s1[] = "hello, world";
  char s2[] = "hello, xorld";

  printf("%d", ft_strncmp(s1, s2, 8));

  return 0;
} */
