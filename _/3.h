// this fft can be used for summing partials and emitting them throughout fft
// it can be used to do the exact same thing you would normally do with summing radio frequencies here and over there

public final int[] RANGE = new int[] { 40, 80, 120, 180, 300 };

// find out in which range is frequency
public int getIndex(int freq) {
    int i = 0;
    while (RANGE[i] < freq)
        i++;
    return i;
}
    
// result is complex matrix obtained in previous step
for (int t = 0; t < result.length; t++) {
    for (int freq = 40; freq < 300 ; freq++) {
        // Get the magnitude:
        double mag = Math.log(results[t][freq].abs() + 1);

        // Find out which range we are in:
        int index = getIndex(freq);

        // Save the highest magnitude and corresponding frequency:
        if (mag > highscores[t][index]) {
            points[t][index] = freq;
        }
    }
    
    // form hash tag
    long h = hash(points[t][0], points[t][1], points[t][2], points[t][3]);
}

private static final int FUZ_FACTOR = 2;

private long hash(long p1, long p2, long p3, long p4) {
    return (p4 - (p4 % FUZ_FACTOR)) * 100000000 + (p3 - (p3 % FUZ_FACTOR))
            * 100000 + (p2 - (p2 % FUZ_FACTOR)) * 100
            + (p1 - (p1 % FUZ_FACTOR));
}
