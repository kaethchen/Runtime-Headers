@class NSDictionary;

@interface BWAudioConverterNode : BWNode {
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor { } *_audioCompressionSBP;
    BOOL _cinematicAudioCapture;
}

@property (readonly, nonatomic) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeType;
- (id)settings;
- (void)setSettings:(id)a0;
- (void)acquireHardware;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)isCinematicAudioCapture;
- (id)nodeSubType;
- (void)relinquishHardware;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setCinematicAudioCapture:(BOOL)a0;

@end
