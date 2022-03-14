package Hyeona;

public class 서울에서_김서방_찾기 {
    public String solution(String[] seoul) {
        String answer = "";
        int number=0;
        for(int i=0;i<seoul.length;i++)
        {
            if(seoul[i].equals("Kim"))
            {
                number=i;
                break;
            }
        }
        answer="김서방은 "+number+"에 있다";
        return answer;
    }
}
