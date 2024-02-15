def bubblesort(arr):
    
    n=len(arr)
    
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
    return arr
    
array =list(map(int,input("Enter the elements in array = ").split()))
print("array = ",array)

print("Sorted array = ",bubblesort(array))
