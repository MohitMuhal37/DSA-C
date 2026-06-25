public class test2
{
    public static void count(int n)
    {
        if(n < 1)
        {
            return;
        }
        System.out.println(n);
        count(n-1);
    }
    public static void main(String[] args) 
    {
        count(10);
    }
}