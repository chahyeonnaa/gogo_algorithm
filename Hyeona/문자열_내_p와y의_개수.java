package Hyeona;

public class 문자열_내_p와y의_개수 {
    boolean solution(String s) {
        boolean answer = true;
        int p_count=0;
        int y_count=0;

        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='p' || s.charAt(i)=='P')
                p_count++;

            if(s.charAt(i)=='y' || s.charAt(i)=='Y')
                y_count++;
        }

        if(p_count!=y_count)
            answer=false;


        return answer;
    }
}
