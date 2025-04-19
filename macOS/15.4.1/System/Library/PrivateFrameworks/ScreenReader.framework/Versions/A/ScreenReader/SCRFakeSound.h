@interface SCRFakeSound : SCRSound

- (BOOL)stop;
- (BOOL)isPlaying;
- (BOOL)play;
- (BOOL)stopImmediately;
- (void)audioCompletedCleanup;

@end
