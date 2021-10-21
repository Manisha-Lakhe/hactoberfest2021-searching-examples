li = []
flag = 0
li = list(map(int,input().split()))
num = int(input())
for i in range(len(li)):
    if li[i] == num:
        print("element found")
        flag = 1
        break
if flag == 0:
    print("Element not found")
