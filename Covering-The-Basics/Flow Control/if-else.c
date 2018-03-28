#include <stdio.h>
int main(int argc, char const *argv[]) {
  //Vowel or consonant
  char c;
  int lowerCase, upperCase;
  printf("Enter an alphabet:");
  scanf("%c",&c );
  upperCase = (c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
  lowerCase = (c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u');

  if ( (c >='a'&& c<='z') || (c >='A'&& c<='Z'))
  {

    if ( lowerCase || upperCase )
    {
      printf("%c is a Vowel\n",c );
    }
    else
    {
      printf("%c is a consonant\n", c);
    }
  }

  else  {
    printf("%c is not an alphabet\n",c );
  }


//even or odd

  int number;
  printf("Enter an integer: " );
  scanf("%d",&number );

  if (number%2 == 0) {
    printf("%d is an even integer\n", number);
  }
  else {
    printf("%d is an odd integer\n", number);
  }

  int x,y,z;
  printf("Enter value for x: ");
  scanf("%d",&x );
  printf("Enter value for y: ");
  scanf("%d",&y );
  printf("Enter value for z: ");
  scanf("%d",&z );

  if (x>y && y>z) {
    printf("%d is maximum\n", x);
  } else if (y>x && y>z) {
    printf("%d is maximum\n", y);
  }
  else
    printf("%d is maximum\n", z);



  return 0;
}
