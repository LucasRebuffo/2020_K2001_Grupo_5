int main(int valor , double xxx)
{   
    int x=14;
    double t=0;
    double m=4;
    double a;
    double n;
    double z;
    int j=1;
    for(int i=1;i<=100;i=i+x)
    {
        char c = 'A';
        a=4;
        m = a + m/x;
        if(a > 34)
        {
            t=a/x;
        }
        else
        {
            t=x/a;
        }
        n=m*t;
        printf("Vuelta numero %d del ciclo\n",j);
        j++;
    }
    z= sqrt(n);
    printf("z vale: %.3lf\n",z);
}


