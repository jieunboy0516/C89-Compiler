### Steps to assemble a simple function:

```
int f(){
    return 5;
}
```

- evaluate return expression (5 in this case)
- `ret`


### our stack:

----------------    higher address
               |         
content old    |
---------------|    
content new    |    
               |
----------------    lower address


To access the content new, we access with the lower address.