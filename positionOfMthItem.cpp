int findPosition(int N , int M , int K) {
    if (N == 1){
        return 1;
    }
    return (M + K - 1) % N == 0 ? N : (M + K - 1) % N;
}