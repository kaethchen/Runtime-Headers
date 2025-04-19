@class NSString;

@interface CSVoiceTriggerFirstPassConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float delaySecondsForChannelSelection;
@property (readonly, nonatomic) float masterChannelScoreBoost;
@property (readonly, nonatomic) float voiceIsolationChannelScoreBoost;
@property (readonly, nonatomic) float processingChunkSeconds;
@property (readonly, nonatomic) unsigned long long processingChannelsBitset;
@property (readonly, nonatomic) int masterChannel;
@property (readonly, nonatomic) int voiceIsolationChannel;

- (void).cxx_destruct;
- (id)initWithConfigPathNDAPI:(id)a0 threshold:(float)a1 delaySecondsForChannelSelection:(float)a2 masterChannelScoreBoost:(float)a3 voiceIsolationChannelScoreBoost:(float)a4 processingChunkSeconds:(float)a5 processingChannelsBitset:(unsigned long long)a6 masterChannel:(int)a7 voiceIsolationChannel:(int)a8;

@end
