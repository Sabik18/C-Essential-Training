#include <stdio.h>
int main(int argc, char const *argv[]) {

  //Summation of n natural numbers,n=1,2,3,4,5,6....
  int i,num,sum=0;
  printf("***Summation of n natural numbers***\n\n" );
  printf("Enter a number: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++) {
    sum+=i;
  }
  printf("Summation of %d natural numbers: %d\n",num,sum );

  //Factorial of a number
  int i2,n,f=1;
  printf("\n\n***Factorial of a number***\n\n" );
  printf("Enter a number:" );
  scanf("%d", &n);
  for (i2 = 1; i2 <= n; i2++) {
    f=f*i2;
  }
  printf("Factorial of %d is: %d", n,f);

  //Factorials of a number
  printf("\n\n***Factors of a number***\n\n" );
  printf("Factors of %d are: ", n);
  for (i2 = 1; i2 <= n; i2++) {
    if (n%i2==0) {
      printf("%d ", i2);
    }
  }

  // Multiplication table
  int i3,n2;
  printf("\n\n***Multiplication tabel***\n" );
  printf("Enter a number:" );
  scanf("%d", &n2);
  for (i3 = 1; i3 <= 10; i3++) {
    printf("%d x %d = %d\n",n2,i3,n2*i3 );
  }

  // Alphabets
  char ch;
  printf("\n\nAlphabets: " );
  for (ch = 'a'; ch <= 'z'; ch++) {
    printf("%c ", ch);
  }

  //odd and even numbers
  int i,sum=0;
  printf("\n\nEven numbers between 1 to 100:\n" );
  for (i = 1; i <=5; i++) {
    if (i%2==0) {
      printf("%d %d \n", i,i+1);
      sum=sum+i;
    }
  }
  printf("Sum of even numbers between 1 to 100: %d", sum);

  // Count number of digits in an integer

  return 0;
}
