@class NSDictionary, NSSet;

@interface deoc_iphone_80Output : NSObject <MLFeatureProvider>

@property (nonatomic) long long target;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithTarget:(long long)a0 classProbability:(id)a1;

@end
