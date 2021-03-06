#include "aux.h"
#include "alignment.h"


void save_timing(long long *nsec,
                  struct timespec st,
                  struct timespec et
)
{
  (*nsec) = (et.tv_nsec - st.tv_nsec);//average
}


//returns the greatest of list of numbers
int max(int numbers[], int len){
  int max = numbers[0];
  for(int i = 1; i< len; i++)
    if(numbers[i] > max)
      max = numbers[i];

  return max;
}

void printMatrix(int lenA, int lenB,int matrix[][lenB]){
  puts("Matrix is:");
  for(int i =0; i< lenA; i++){
    for(int j = 0; j< lenB;j++)
      printf("%d\t", matrix[i][j]);
    puts("");
  }
}

//reverses a string
void strReverse(char *str){
  /* skip null */
  if (str == 0)
  {
  	return;
  }

  /* skip empty string */
  if (*str == 0)
  {
  	return;
  }

  /* get range */
  char *start = str;
  char *end = start + strlen(str) - 1; /* -1 for \0 */
  char temp;

  /* reverse */
  while (end > start)
  {
  	/* swap */
  	temp = *start;
  	*start = *end;
  	*end = temp;

  	/* move */
  	++start;
  	--end;
  }
}
