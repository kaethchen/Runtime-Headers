@class NSArray, NSString;
@protocol ISEffect;

@interface ISStackedEffects : NSObject <ISEffect>

@property (copy) NSArray<ISEffect> *effects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEffects:(id)a0;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
