main()
{
    float a,b,c,x1,x2,term;
    printf("enter the values of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    term=b*b-4*a*c;
    if(term<0)
    {
        printf("roots are imaginary");
    }
    if(term==0)
    {
        printf("roots are real and equal");
        x1=-b/(2*a);
        x2=x1;
    }
    if(term>0)
    {
        printf("roots are real and distinct");
        x1=(-b+sqrt(term))/(2*a);
        x2=(-b-sqrt(term))/(2*a);
    }
    printf("X1=%f X2=%f",x1,x2);
    getch();
}
