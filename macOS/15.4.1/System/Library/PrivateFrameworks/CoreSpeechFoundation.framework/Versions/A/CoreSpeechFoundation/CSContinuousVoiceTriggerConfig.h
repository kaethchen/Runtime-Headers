@class NSString, NSArray;

@interface CSContinuousVoiceTriggerConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float loggingThreshold;
@property (readonly, nonatomic) float twoShotThreshold;
@property (readonly, nonatomic) float twoShotDecisionWaitTime;
@property (readonly, nonatomic) NSArray *voiceTriggerPhIds;
@property (readonly, nonatomic) NSArray *silencePhIds;

- (void).cxx_destruct;
- (id)initWithConfigPathNDAPI:(id)a0 threshold:(float)a1 loggingThreshold:(float)a2 twoShotThreshold:(float)a3 twoShotDecisionWaitTime:(float)a4 voiceTriggerPhIds:(id)a5 silencePhIds:(id)a6;

@end
