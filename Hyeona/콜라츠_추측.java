package Hyeona;

public class 콜라츠_추측 {
    public int solution(int num) {
        int answer = 0;

        long numm=(long)num;
        while(true)
        {
            if(numm==1)
                break;

            if(numm%2==0)
            {
                numm=numm/2;
                answer++;
            }
            else
            {
                numm=numm*3+1;
                answer++;
            }

            if(answer>=500)
            {
                answer=-1;
                break;
            }

        }
        return answer;
    }
}
