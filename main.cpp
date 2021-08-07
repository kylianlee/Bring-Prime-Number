//
// Created by Kylian Lee on 2021/08/07.
//

#include <cstdio>

using namespace std;

bool arr[1000001];

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 2; i <= b; ++i) {
    for (int j = 2; i * j <= b; ++j) {
      arr[i * j] = true;
    }
  }
  arr[1] = true;
  for (int i = a; i < b + 1; ++i) {
    if(!arr[i])
      printf("%d\n", i);
  }
  return 0;
}