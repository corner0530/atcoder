import sys
def input():
  return sys.stdin.readline()[: - 1]

N = int(input())
a = N % 9

if a == 0:
  print("Yes")
else:
  print("No")
