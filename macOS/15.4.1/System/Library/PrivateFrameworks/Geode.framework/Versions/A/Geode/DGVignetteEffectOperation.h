@class NSNumber;

@interface DGVignetteEffectOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;
@property (copy, nonatomic) NSNumber *inputFalloff;
@property (copy, nonatomic) NSNumber *inputRadius;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)commandIdentifier;
- (id)_filter;
- (BOOL)isMigratable;
- (BOOL)isPostGeometryOperation;

@end
