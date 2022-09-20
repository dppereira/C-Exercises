#include <stdio.h>
#include <stdlib.h>

typedef struct regis
{
  int key;
} regist;

void sorting(regist *result, int elem)
{
  int i, j, h = 1;

  regist temp;

  do
  {
    printf("%d ", h);
    h = 2 * h + 1;
    
  } while (h < elem);

  do
  {
    h /= 2;
    for (i = h; i < elem; i++)
    {
      temp = result[i];
      j = i;
      while (result[j - h].key > temp.key)
      {
        result[j] = result[j - h];
        j = j - h;

        if (j < h)
        {
          break;
        }
      }
      result[j] = temp;
    }
  } while (h != 1);

  return;
}

int main(void)
{

  int elem, i;

  regist result[10];

  //printf("Elementos no vetor\n");
  scanf("%d", &elem);

  //*result = malloc(elem * sizeof(int));

  for (i = 0; i < elem; i++)
  {
    (scanf("%d", &result[i].key));
  }

  sorting(result, elem);

  printf("\n");

  for (i = 0; i < elem; i++)
  {

    printf("%d ", result[i].key);
  }

  return 0;
}
