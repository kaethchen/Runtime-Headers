@class NSNumber;

@interface DGShadowHighlightOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputHighlightAmount;
@property (copy, nonatomic) NSNumber *inputShadowAmount;
@property (copy, nonatomic) NSNumber *inputRadius;
@property (copy, nonatomic) NSNumber *inputColorCorrection;
@property (copy, nonatomic) NSNumber *inputHighlightTonalWidth;
@property (copy, nonatomic) NSNumber *inputMidtoneContrast;
@property (copy, nonatomic) NSNumber *inputShadowTonalWidth;
@property int inputShadowHighlightLegacyVersion;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;
- (id)_filterForPipelineVersion:(unsigned long long)a0;
- (void)setOperationDefaults;

@end
