@interface IMTranscriptionUtilities : NSObject

+ (void)commitTranscriptionWithString:(id)a0 confidenceSum:(double)a1 numberOfSegments:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)localizedSeparatorString;
+ (id)transcoderBundle;
+ (void)transcribeAudioForAudioTransferURL:(id)a0 withCompletion:(id /* block */)a1;

@end
