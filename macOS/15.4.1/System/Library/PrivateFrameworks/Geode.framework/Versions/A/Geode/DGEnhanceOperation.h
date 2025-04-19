@class NSNumber, NSString;

@interface DGEnhanceOperation : DGOperation <DGAutoCalculable>

@property (copy, nonatomic) NSNumber *inputContrast;
@property (copy, nonatomic) NSNumber *inputDefinition;
@property (copy, nonatomic) NSNumber *inputSaturation;
@property (copy, nonatomic) NSNumber *inputVibrancy;
@property (copy, nonatomic) NSNumber *inputWhiteUOffset;
@property (copy, nonatomic) NSNumber *inputWhiteVOffset;
@property (copy, nonatomic) NSNumber *inputGrayUOffset;
@property (copy, nonatomic) NSNumber *inputGrayVOffset;
@property (copy, nonatomic) NSNumber *inputGrayBrightness;
@property (copy, nonatomic) NSNumber *inputBlackUOffset;
@property (copy, nonatomic) NSNumber *inputBlackVOffset;
@property (nonatomic) int inputContrastLegacyVersion;
@property (nonatomic) int inputSaturationLegacyVersion;
@property (nonatomic) int inputVibranceLegacyVersion;
@property (nonatomic) int inputDefinitionLegacyVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void)_applyAutoSettings:(id)a0;
- (double)_computeRadiusForExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scalingFactor:(double)a1;

@end
