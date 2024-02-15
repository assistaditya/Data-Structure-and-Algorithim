def insertionsort(array):
    print(array)
    
    for i in range(0,len(array)):
        b=i 
        while b > 0 and array[b]<array[b-1]:
            array[b-1],array[b]=array[b],array[b-1]
            b -=1 
            
    print(array)    
        
            
array =[1,6,7,8,3,4]
insertionsort(array)
