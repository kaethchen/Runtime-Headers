@class NSMutableDictionary, VCAudioRuleCollection;

@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig

@property (retain, nonatomic) VCAudioRuleCollection *audioRules;
@property (nonatomic) unsigned int preferredMediaBitrate;
@property (readonly, nonatomic) NSMutableDictionary *v2CodecConfigurations;

- (void)dealloc;
- (id)init;
- (void)addV2CodecConfiguration:(id)a0;

@end
