def bisearch(arr, low, high, x):
 
    
    if high >= low:
 
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
 
       
        elif arr[mid] > x:
            return bisearch(arr, low, mid - 1, x)
 
        
        else:
            return bisearch(arr, mid + 1, high, x)
 
    else:
      
        return -1
 

arr = [ 2, 3,68,24,90]
x = 10
 

result = bisearch(arr, 0, len(arr)-1, x)
 
if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")
