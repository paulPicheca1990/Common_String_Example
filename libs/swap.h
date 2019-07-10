#ifndef __SWAP_H__
#define __SWAP_H__

#define SWAP(type, a, b) do{\
  \
  type temp = *a;\
  *a = *b;\
  *b = temp;\
} while(0)

#endif //__SWAP_H__