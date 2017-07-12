#include <stdio.h>
#include <string.h>

int strindex(char *s, char c)
{
  int wLen = strlen(s);
  char *pTmp = NULL;

  if (wLen == 0)  //如果字符串为空时返回未找到结果
    return -1;
  pTmp = s + wLen - 1;  //指向字符串最后一个字符
  while (pTmp >= s)   //从最å一个字符向前遍历每个字符
  {
    if (*pTmp == c)
      break;  //到相同的字符，则跳出

    pTmp--;
  }

  if (pTmp < s)
    return -1;  //未找到相同的字符

  return (int)(pTmp - s);
}

int  main(void)
{
  printf("%d", strindex("student", 't'));

  return 0;
}
