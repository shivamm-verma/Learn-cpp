## Integer limits
```
INT_MIN = (-1) * 2^31
INT_MAX = (2^31) - 1
```

## Time complexity
```
O(1)
// Single operation, does not depend on N
x = 5
```
```
O(N)
for i <- 0 to N-1; i++
```

```
O(log2N)
for i<-0 to N; i = i * 2
```

```
O(log3N)
for i<-0 to N; i = i * 3
```

```
O(logN)
for (i = 1; i < N; i = i * 2)
```

```
O(loglogN)
for (i = 2; i < N; i = i * i)
```
