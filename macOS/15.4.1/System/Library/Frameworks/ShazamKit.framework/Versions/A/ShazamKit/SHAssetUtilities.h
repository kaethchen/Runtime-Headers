@interface SHAssetUtilities : NSObject

+ (BOOL)buffersFromAudioFile:(id)a0 format:(id)a1 accumulator:(id /* block */)a2 error:(id *)a3;
+ (void)mixedTracksFromAsset:(id)a0 format:(id)a1 accumulator:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (id)pcmBufferFromAudioFile:(id)a0 outputFormat:(id)a1 durationToRead:(double)a2 error:(id *)a3;
+ (id)pcmBufferFromAudioFile:(id)a0 outputFormat:(id)a1 error:(id *)a2;

@end
