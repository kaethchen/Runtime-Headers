@class NSNumber;

@interface CSUBeamSearchConfiguration : NSObject

@property (copy, nonatomic) NSNumber *beamWidth;
@property (copy, nonatomic) NSNumber *maxSteps;
@property (copy, nonatomic) NSNumber *topK;
@property (copy, nonatomic) NSNumber *lengthNormalizationAlpha;

- (id)init;
- (void).cxx_destruct;

@end
