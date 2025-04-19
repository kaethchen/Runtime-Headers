@class FCNewsPersonalizationFeaturePrior;

@interface FCNewsPersonalizationFeaturePriorsConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *baselineFeaturePrior;
@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *generalFeaturePrior;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
