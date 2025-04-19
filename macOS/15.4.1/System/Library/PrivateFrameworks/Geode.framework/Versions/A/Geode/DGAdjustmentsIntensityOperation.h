@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)_filter;
- (BOOL)isPostGeometryOperation;

@end
