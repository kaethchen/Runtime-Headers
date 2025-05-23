@class NSNumber;

@interface DGGNGDefinitionOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;
- (id)_filterWithScalingFactor:(double)a0;

@end
