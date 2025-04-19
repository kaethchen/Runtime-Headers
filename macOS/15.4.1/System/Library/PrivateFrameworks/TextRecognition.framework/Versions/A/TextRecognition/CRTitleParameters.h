@interface CRTitleParameters : NSObject

@property (readonly) float minTitleProbability;
@property (readonly) unsigned long long minTitleLength;

+ (id)defaultTitleParameters;

@end
