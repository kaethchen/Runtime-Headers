@class NSDictionary, NSSet;

@interface deoc_two_stage_sequential_low_secondOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long target;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithTarget:(long long)a0 classProbability:(id)a1;

@end
