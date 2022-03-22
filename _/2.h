// this fft can be used for representing audio domain signals into the fft
// with it, you can possibly use a dft/fft representation towards polarizing and inizing yourself with audio
// probably you will need some more code but that's the basis for it

byte audio [] = out.toByteArray()
int totalSize = audio.length
int sampledChunkSize = totalSize/chunkSize;
Complex[][] result = ComplexMatrix[sampledChunkSize][];

for(int j = 0;i < sampledChunkSize; j++) {
  Complex[chunkSize] complexArray;

  for(int i = 0; i < chunkSize; i++) {
    complexArray[i] = Complex(audio[(j*chunkSize)+i], 0);
  }

  result[j] = FFT.fft(complexArray);
}
