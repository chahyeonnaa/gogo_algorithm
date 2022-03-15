package Hyeona;

public class 핸드폰_번호_가리기 {
    public String solution(String phone_number) {
        String answer = "";
        int length=phone_number.length()-4;
        for(int i=0;i<length;i++)
        {
            answer=answer+"*";
        }
        for(int i=length;i<length+4;i++)
        {
            answer=answer+phone_number.charAt(i);
        }
        return answer;
    }
}
