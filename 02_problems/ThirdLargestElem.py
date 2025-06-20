def ThirdLargestElem(arr):
    for i in range(0, len(arr) - 1):
        if arr[i] > arr[i + 1]:
            temp = arr[i + 1]
            arr[i + 1] = arr[i]
            arr[i] = temp
    # sorted array

    # Third largest element is index 2 of sorted list
    return arr[3-1]

print(ThirdLargestElem(arr=[1, 14, 2, 16, 10, 20]))

# Link: https://www.geeksforgeeks.org/dsa/third-largest-element-array-distinct-elements/