package Hyeona;


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class 파도반_수열 {
    public static long arr[]=new long[101];
    public static void main(String[] args) throws IOException {
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        arr[3]=1;
        arr[4]=2;
        arr[5]=2;

        BufferedReader sc=new BufferedReader(new InputStreamReader(System.in));

        int N=Integer.parseInt(sc.readLine());

        StringBuilder sv=new StringBuilder();
        for(int i=0;i<N;i++)
        {
            int num=Integer.parseInt(sc.readLine());
            if(num<=5)
                sv.append(arr[num]).append("\n");
            else
                sv.append(sea(num-1)+sea(num-5)).append("\n");
        }
        System.out.println(sv);

    }
    public static long sea(int n)
    {
        if(arr[n]==0)
        {
            arr[n]=sea(n-1)+sea(n-5);
        }

        return arr[n];
    }
}
