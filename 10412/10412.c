#include <stdio.h>

int main()
{
  int L, W, l, w;
  scanf("%d%d%d%d", &L, &W, &l, &w);
#ifdef DEBUG
  printf("%d%d%d%d\n", L, W, l, w);
#endif
  int L_left = L % l;
  int W_left = W % w;
  int L_num = L / l;
  int W_num = W / w;

  printf("%d\n", W_num * L_num);
  printf("%d\n", W * L_left + L * W_left - L_left * W_left);

  
  
  return 0;
}
