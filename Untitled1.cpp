#include <iostream>

using namespace std;

int main() {
    int code,quantity;
    scanf("%d%d",&code,&quantity);
    if(code == 1){
        printf("Total: R$ %.2lf\n",quantity*4.00);
    }else if(code == 2){
        printf("Total: R$ %.2lf\n",quantity*4.50);

    }else if(code == 3){
        printf("Total: R$ %.2lf\n",quantity*5.00);
    }else if(code == 4){
        printf("Total: R$ %.2lf\n",quantity*2.00);
      }else if(code == 5){
         printf("Total: R$ %.2lf\n",quantity*1.50);
      }
    return 0;
}
