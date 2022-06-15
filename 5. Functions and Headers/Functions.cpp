double add(double x, double y)
{
    return x + y;
}
//overloading function (not a bad thing) - compilers can tell the difference between two functions with
//the same name, but different amount of arguments!
double add(double a, double b, double c)
{
    return a + b + c;
    //alternatively: return add(add(a,b),c)
}
bool test(bool x)
{
    return x;
}

bool test(double x)
{
    return x > 0;
}