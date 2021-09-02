package Project.ackerman;
import java.lang.FunctionalInterface;
import java.util.*;

@FunctionalInterface 
interface coba
{
        String reserve(String n);
}

public class lamda 
{
    String coba;
    Scanner stringTebolak = new Scanner(System.in);

    public void jalanin()
    {
    coba ref = (str) -> 
    {
    
        System.out.println("Masukkan string anda :");
        coba=stringTebolak.nextLine();
        //reserve string
        for(int i = str.length()-1;i>=0;i--)
        {
       
            coba+=str.charAt(i);
        }
        return coba;
    };
    System.out.println("Reserved  = "+ref.reserve(coba));
    
}
}

 class Jalan
 {
    public static void main (String[]args)
    {
        lamda cetak=new lamda();    
        cetak.jalanin();
    }
 }
