package Hyeona;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class 영일타일 {
    public static int arr[]=new int[1000001];
    public static void main(String[] args) throws IOException {
        BufferedReader sc=new BufferedReader(new InputStreamReader(System.in));

        int N=Integer.parseInt(sc.readLine());

        arr[0]=0;
        arr[1]=1;
        arr[2]=2;

        for(int i=3; i<arr.length;i++)
        {
            arr[i]=-1;
        }

        System.out.println(fibonacci(N));
    }
    public static int fibonacci(int n) {

        if(arr[n]==-1)
        {
            arr[n]=(fibonacci(n-1)+fibonacci(n-2))%15746;
        }
        return arr[n];
    }
}
