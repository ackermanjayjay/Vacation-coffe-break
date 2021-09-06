package Project.ackerman;
import java.util.*;

public class overriding 
{
    Scanner Untuk  = new Scanner(System.in);

    String inputajah;
    void input()
    {
        System.out.println("Superclass input :");
        inputajah=Untuk.nextLine();

    }
}
class Hasil extends overriding
{
   
    public void input()
    {
        super.input();
        System.out.println("Hasil input superclass tapi ini Subclass: "+inputajah);
    }

}

class NigerunDaiyo
{
    public static void main(String[]args)
     {
        Hasil run1 = new Hasil();
        run1.input();
    }
}
