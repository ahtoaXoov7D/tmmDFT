// this script is an accessory towards the previous script

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
