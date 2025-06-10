import java.util.Scanner;       // Specific import

class program216                // CountEven
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements : ");
        int isize = sobj.nextInt();

        int Arr[] = new int[isize];     // dynamic mem alloc

        int iCnt = 0;

        System.out.println("Enter the Elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        int iCount = 0;

        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }   
        System.out.println("Even Elements in the array are : "+iCount);    
        
        Arr = null;         // used to deallocate memory
        sobj = null;        // if finalize method is there then this will be in finalize  
    }
}