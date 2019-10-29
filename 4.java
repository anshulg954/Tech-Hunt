class Apratim
{
    protected void getData()
    {
        System.out.println("Apratim");
    }
}
class Apratim2k19 extends Apratim
{
    protected void getData()
    {
        System.out.println("Apratim 2k19");
    }
}

public class Test
{
    public static void main(String[] args)
    {
        Apratim obj = new Apratim 2k19();
        obj.getData();
    }
}
