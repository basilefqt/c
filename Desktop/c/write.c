 #include <unistd.h>

int calc(int val){
    int init = 1;
    while(init<val){
        init*=10;
    }
    init/=10;
    return init;
}

void iw(int a){
    int i = calc(a);
    int stock = 0;
    while(i >= 1){
        int c = a / i;
        c -= stock/i;
        char final = c + 48;
        write(1,&final,1);   
        stock+=c*i;
        i/=10; 
    }
    write(1,"\n",1);
}

int main(){
     iw(123);
}


