import java.util.*;     // Generic import  

class program208
{
    public static void main(String A[])
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String name = sobj.nextLine();

        char Arr[] = name.toCharArray();

        // for(iCnt = 0; iCnt < Arr.length; iCnt++)
        // {
        //     System.out.println(Arr[iCnt]);
        // } 
        
        for(char C : Arr)
        {
            System.out.print(C+" ");
        }
    }
}