### LOOPS

> ####  WHILE

``` cpp
int arr[] = {1 ,2 ,3 ,4};
    int i;
    while(i<4){
        if (i == 2)
        {  
            i++;
            cout <<"slkoip"<<endl;
            continue;            
        }        
        cout<<arr[i]<<endl;
        i++;
    }
```

> continue -> says that skip this one itartion 

> break -> stop itration 

<hr>

> #### DO WHILE

``` cpp
    do{
        cout << arr[i] << endl;
        i++;
    } while(i<3);
```

> firsts run one then checks constrain 

<hr>

> #### FOR 
> Range Based for itrators 

``` cpp
    int arr[]={1,2,3,4,5,6};
    for (int i: arr){
        cout<<i;
    }

``` 

> itrator  with char 

``` cpp
    char name[] = "aman";
    char arr_name[] = {'a', 'm', 'a', 'n', 0};
    // string array od char used 0 for termination 


    for (int i = 0; arr_name[i] != 0; i++)
    {
        cout << arr_name[i];
    };
    //runs till not became 0;

    for (int i = 0; arr_name[i]; i++) 
     // last is 0 so it bacame false and breaks itration !
    {
        cout << arr_name[i];
    };
```

> #### pointer based 

``` cpp
    for (char * cp = arr_name; *cp != 0 ; cp++)
    {
        cout << *cp;
    };
      // cp is char pointer initial from 0 till value 0 and incriment in pointer 


    for (char i:arr_name) //range based 
    {   
        if (i == 0)
        {
            break;
        }
        
        cout << i;
    };
```    