@class NSArray;

@interface CESRAudioSamplingConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *samplingPolicies;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)getSamplingRateFromDimension:(id)a0;
- (id)initWithConfigPath:(id)a0;

@end
