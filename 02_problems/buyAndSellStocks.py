def buyAndSellStocks(arr):
    mini, maxi = arr[0], arr[0]
    for i in arr:
        if mini > i:
            mini = i

    for j in range(arr.index(mini) + 1, len(arr)):
        # look for maximum after the choosen minimum
        if arr[j] > maxi:
            maxi = arr[j]

    # print("Max profit: ", maxi - mini)
    return maxi - mini


print(buyAndSellStocks([7, 10, 1, 3, 6, 9, 2]))

# Link: https://www.geeksforgeeks.org/dsa/best-time-to-buy-and-sell-stock/
