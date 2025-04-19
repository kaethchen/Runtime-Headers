@class NSArray;

@interface AXMContinuousSynth : AXMSynth {
    NSArray *_keyPitches;
}

@property (readonly, nonatomic) double phase;
@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) BOOL releasing;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) BOOL muted;

- (void).cxx_destruct;
- (unsigned long long)_bufferFrameForKeyPitch:(id)a0;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1 keyPitches:(id)a2;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1;

@end
