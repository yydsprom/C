#include<stdio.h>
void copy_arr(double t[],double s[],int n);
void copy_ptr(double *t,double *s,int n);
void copy_ptrs(double *t,double *s_first,double *s_last);

int main()
{
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    return 0;
}

void copy_arr(double t[],double s[],int n)
{
    for(int i=0;i<n;i++)
        t[i]=s[i];
}
void copy_ptr(double *t,double *s,int n)
{
    for(int i=0;i<n;i++)
        *(t+1)=*(s+1);
}
void copy_ptrs(double *t,double *s_first,double *s_last)
{
    for(int i=0;(s_last-s_first)>i;i++)
        *(t+1)=*(s_first+i);
}

/*7*/
#define N 5
#define M 12
void copy_2arr(double t[][M],double s[][M],int n)
{
    for(int i=0;i<n;i++)
        copy_arr(t[i],s[i],M);
}
void copy_2ptr(double (*t)[M],double (*s)[M],int n)
{
    for(int i=0;i<n;i++)
        copy_ptr(*(t+1),*(s+1),M);
}
