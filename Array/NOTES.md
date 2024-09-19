### Array 

``` cpp
    int arr[6]={1, 2, 3, 4}; 
    cout << arr[1] << endl; 
    cout <<arr[5];  // 0 default value
```


``` cpp
int arry[5];
     arry[1] = 5;
     arry[0] = 23;

    *arry = 10;

    int *arryP = arry;
    arryP++;
    *arryP = 100;

```
>arry is continus location 

>  as arry name pointer points to first location incriment in that points to secont and then assign changes value 

> updating the pointer changes the value 

#### intergers 

> 

``` cpp
#include<cstdint> // using int libaray for no ambugity in size 
        // eg. int16_t uint32_t (unassigned are + ints)

    // 1 byte is 8bit

    printf("size of data type is %ld bits\n", sizeof(uint16_t)*8);

    int binary_num = 0b0011; // 0b then binary to assign binary 

```

