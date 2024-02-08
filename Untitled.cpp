#include <iostream>

using namespace std;

int main() {

   int number, workedhours;
   double perhours;

   scanf("%d %d %lf",&number, &workedhours, &perhours);
   double salary = workedhours*perhours;

   printf("NUMBER = %d\n",number,workedhours);
   printf("SALARY = U$ %.2lf\n",salary);

    return 0;
}



