### Base Condition
- **Base Condition** (or the **Stopping condition**), to stop the Infinite recursion.
 ### Recursion Tree
![Recursion Tree](../z_Assets/RecursionTree.png)
- Time complexity & Space complexity: BigO(N)

### Backtracking
- A backtracking algorithm is a problem-solving algorithm that uses a brute force approach for finding the desired output.
- The Brute force approach tries out all the possible solutions and chooses the desired/best solutions.

### Parameterized & functional Recursion
-   ```cpp
    int sumOfFirstN(int N, int ans = 0)
    {
        if (N == 0)
        {
            return ans;
        }
        sumOfFirstN(N - 1, ans + N);
    }
    ```
- ![Image](../z_Assets/RecTreeSumOfFirstN.png)

