@class NSDictionary, NSSet;

@interface shallow_modelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long next_discharge_is_shallow;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithNext_discharge_is_shallow:(long long)a0 classProbability:(id)a1;

@end
