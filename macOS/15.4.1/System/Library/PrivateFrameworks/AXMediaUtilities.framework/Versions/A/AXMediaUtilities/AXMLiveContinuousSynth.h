@interface AXMLiveContinuousSynth : AXMSynth

@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) BOOL releasing;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) BOOL muted;

- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1 numSamples:(unsigned long long)a2;
- (void)startRelease;

@end
