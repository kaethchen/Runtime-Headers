@class NSNumber;

@interface SGMISaliencyModelConfigRule : NSObject

@property (readonly) NSNumber *featureName;
@property (readonly) NSNumber *strictLowerBound;
@property (readonly) NSNumber *strictUpperBound;
@property (readonly) NSNumber *output;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithFeatureName:(id)a0 strictLowerBound:(id)a1 strictUpperBound:(id)a2 output:(id)a3;

@end
