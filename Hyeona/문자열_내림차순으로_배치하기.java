package Hyeona;

import java.util.Arrays;

public class 문자열_내림차순으로_배치하기 {
    public String solution(String s) {
        String answer = "";
        char arr[]=new char[s.length()];
        for(int i=0;i<s.length();i++)
        {
            arr[i]=s.charAt(i);
        }
        Arrays.sort(arr);
        for(int i=arr.length-1;i>=0;i--)
        {
            answer=answer+arr[i];
        }
        return answer;
    }
}
