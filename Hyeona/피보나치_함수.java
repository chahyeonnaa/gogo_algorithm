package Hyeona;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class 피보나치_함수 {
    static Integer arr[][]=new Integer[41][2];
    public static void main(String[] args) throws IOException {
        BufferedReader sc= new BufferedReader(new InputStreamReader(System.in));

        arr[0][0] = 1;	// N=0 일 때의 0 호출 횟수
        arr[0][1] = 0;	// N=0 일 때의 1 호출 횟수
        arr[1][0] = 0;	// N=1 일 때의 0 호출 횟수
        arr[1][1] = 1;	// N=1 일 때의 1 호출 횟수

        int T=Integer.parseInt(sc.readLine());

        StringBuilder sb=new StringBuilder();
        for(int i=0;i<T;i++)
        {
            int N=Integer.parseInt(sc.readLine());
            fibonacci(N);
            sb.append(arr[N][0]+" "+arr[N][1]+"\n");
        }
        System.out.println(sb);
    }

    static Integer[] fibonacci(int N) {
        // N에 대한 0, 1의 호출 횟수가 없을 떄(탐색하지 않은 값일 때)
        if(arr[N][0] == null || arr[N][1] == null) {
            // 각 N에 대한 0 호출 횟수와 1 호출 횟수를 재귀호출한다.
            arr[N][0] = fibonacci(N - 1)[0] + fibonacci(N - 2)[0];
            arr[N][1] = fibonacci(N - 1)[1] + fibonacci(N - 2)[1];
        }
        // N에 대한 0과 1, 즉 [N][0]과 [N][1] 을 담고있는 [N]을 반환한다.
        return arr[N];

    }
}
