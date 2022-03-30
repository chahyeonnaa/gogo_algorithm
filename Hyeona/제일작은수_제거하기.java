package Hyeona;

public class 제일작은수_제거하기 {
    public int[] solution(int[] arr) {
        if(arr.length == 1) return new int[]{-1};

        int min= arr[0];
        for(int i=1; i<arr.length; i++) {
            if(arr[i] < min) {
                min=arr[i];
            }
        }

        int[] answer = new int[arr.length-1];
        int cnt = 0;
        for(int i=0; i<arr.length; i++) {
            if(arr[i]==min) continue;
            answer[cnt++] = arr[i];
        }

        return answer;
    }
}
