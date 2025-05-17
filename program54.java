import java.util.*;

class program54
{
    public static void main(String A[])
    {
        Scanner sobj = null;
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        sobj = new Scanner(System.in);

        System.out.println("Enetr 1st Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enetr 2nd Number : ");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;
        System.out.println("Addition is : "+iAns);

    }
}
