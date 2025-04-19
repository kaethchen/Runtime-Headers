@interface SSRVoiceActivityDetector : NSObject

- (void)endAudio;
- (void)resetWithContext:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;

@end
