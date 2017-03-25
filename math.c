#include <stdio.h>

int math(int a, int b, char ch)
{
  switch(ch)
  {
   case "+" : return (a+b);
              break;
   case "-" : return (a-b);
              break;
   case "*" : return a * b;
              break;              
  }
}
