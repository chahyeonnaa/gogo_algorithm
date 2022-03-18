package Hyeona;

public class 수박수박수박수 {
    public String solution(int n) {
        String answer = "";
        int i=0;
        while(true)
        {
            if(i%2==0)
                answer=answer+"수";
            else
                answer=answer+"박";

            i++;

            if(i==n)
                break;
        }
        return answer;
    }
}
