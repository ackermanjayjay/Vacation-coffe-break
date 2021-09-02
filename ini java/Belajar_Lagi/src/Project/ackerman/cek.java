package Project.ackerman;
import java.util.*;
public class cek 
{
    Scanner inputData = new Scanner(System.in);
    Scanner inputMatkul = new Scanner(System.in);
    Scanner inputSks = new Scanner(System.in);
    int Sks[]=new int[100],
    umur,
    totSks,
    bayar=200000,
    diskon=100000; 
    String Matkul[]=new String[100],
    nama;

    public void inputUser()
    {
        System.out.println("Masukkan nama anda : ");
        nama=inputData.nextLine();
        System.out.println("Masukkan umur anda : ");
        umur=inputData.nextInt();
    }
     public void matkul()
    {
        System.out.println("Mata kuliah dan Sks anda :");
        for (int z=1;z<=5;z++)
        {
            System.out.println("No."+z+": Mata kuliah");
            // v for store data in array 
            Matkul[z]=inputMatkul.nextLine();
            System.out.println(+z+": Sks anda ");
            Sks[z]=inputSks.nextInt();
            totSks+=Sks[z];
        }
       
        

        
    }
    public void OutputUser()
    {
        System.out.println("Hasil Output anda: ");
        System.out.println("Nama anda : "+nama);
        System.out.println("Umur anda : "+umur);
        System.out.println("Hasil mata kuliah anda :");
        for(int v =1;v<=5;v++)
        {
            System.out.println(v+"."+" Matkul anda :"+Matkul[v]);
            System.out.println(v+"."+" Sks anda :"+Sks[v]);
        }
       
        System.out.println("Total sks Anda "+totSks);
    }
    public void bayar()
    {
        System.out.println("Pembayaran anda : ");
        bayar*=totSks;
        if(totSks>10)
        {
            System.out.println("Anda mendapat diskon : Rp"+diskon);
            System.out.println("Anda membayar sebesar : "+(bayar-diskon));
        }
        else if(totSks<10)
        
        {
            System.out.println("Anda tidak mendapat diskon: Rp"+bayar);
        }
    }
    

}
class Run
{
public static void main(String[]args) 
    {
        cek jalanin=new cek();
            jalanin.inputUser();
            jalanin.matkul();
            jalanin.OutputUser();
            jalanin.bayar();    
    }
}