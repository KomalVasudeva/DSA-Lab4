#include <stdio.h>
int bits;
void p()
{
int pilani;
printf("Address of Pilani is %u\n",&pilani);
g(1);
}
void g(int n)
{
int goa;
printf("Address of goa is %u\n",&goa);h();
}
void h()
{
int hyderabad;
printf("Address of hyderabad is %u\n",&hyderabad);

}
void d()
{
int dubai;
printf("Address of dubai is %u\n",&dubai);
}

int main()
{
printf("Address of bits is %u \n",&bits);
p();
g(1);
h();
d();

}
