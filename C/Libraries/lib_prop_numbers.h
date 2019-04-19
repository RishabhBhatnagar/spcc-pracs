#define print_fact(n) ({              \
    for(int i=1, p=1; i<=n; i++){     \
        p *= i;                       \
        if(i == n) printf("%d", p); } \
    })

#define sum_n(n) n*(n-1)/2
