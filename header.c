
int evenodd(int l);
int factorial(int n);
int prime(int a);

int evenodd(int l){
    if(l%2==0){
        return 0;
    }
    return 1;
}

int factorial(int n){
    int prod=1;
    for (int i =1;i<=n;i++){
        prod*=i;
    }
    return prod;
}

int prime(int a){
    int b=0;
    
    for(int i =1;i<=a;i++){ 
        b+=1;
        }
        return b;
        
    } 
