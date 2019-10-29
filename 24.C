void f (int n)
{
  if (n <=1)  {
   printf ("%d", n);
  }
  else {
   f (n/2);
   printf ("%d", n%2);
  }
}
//How many recursive calls will be there for f(173);
