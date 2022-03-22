// this can be used for keepign track of specific moments in a piece of music
// it can eventually be used towards keeping tracks of moments to represent towards imprinting audio fft/dft representatiosn

// Class that represents specific moment in a song
private class DataPoint {

    private int time;
    private int songId;

    public DataPoint(int songId, int time) {
        this.songId = songId;
        this.time = time;
    }
    
    public int getTime() {
        return time;
    }
    public int getSongId() {
        return songId;
    }
}
