@class NSNumber;

@interface DGProEdgeSharpenOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSharpness;
@property (copy, nonatomic) NSNumber *inputEdgeScale;
@property (copy, nonatomic) NSNumber *inputFalloff;
@property int inputProEdgeSharpenLegacyVersion;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (BOOL)_doNotScaleFalloff;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;
- (id)_filterWithScalingFactor:(double)a0 pipelineVersion:(long long)a1 legacyVersion:(int)a2;
- (void)setOperationDefaults;

@end
