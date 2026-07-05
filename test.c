#include<stdio.h>

struct abc
{
    char a;
    char b;
    int c;
};

int main()
{
  struct abc var;
  printf("%d ",sizeof(var));
}
