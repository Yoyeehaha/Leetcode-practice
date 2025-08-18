int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int total_time = 0;

    for(int i = 0;i < timeSeriesSize - 1;i++) {
        int curr = timeSeries[i + 1];
        int last = timeSeries[i];

        if((curr - last) > duration){
            total_time += duration;
        } else {
            total_time += (curr - last);
        }
    }

    total_time += duration;
    return total_time;
}