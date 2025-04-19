@class NSNumber, NSColor, NSString;
@protocol DGWhiteBalanceRAWProperties;

@interface DGWhiteBalanceOperation : DGOperation <DGAutoCalculable> {
    NSColor *_legacyFaceColor;
}

@property (copy) NSNumber *temperature;
@property (copy) NSNumber *tint;
@property (copy, nonatomic) NSNumber *inputColorType;
@property (copy, nonatomic) NSNumber *inputTemperature;
@property (copy, nonatomic) NSNumber *inputTint;
@property (copy, nonatomic) NSNumber *inputIsDefaults;
@property (copy, nonatomic) NSColor *inputGrayColor;
@property (copy, nonatomic) NSNumber *inputGrayWarmth;
@property (copy, nonatomic) NSNumber *inputGrayY;
@property (copy, nonatomic) NSNumber *inputGrayI;
@property (copy, nonatomic) NSNumber *inputGrayQ;
@property (copy, nonatomic) NSNumber *inputEV;
@property (copy, nonatomic) NSNumber *inputSlope;
@property (copy, nonatomic) NSNumber *inputBias;
@property (copy, nonatomic) NSNumber *inputFaceWarmth;
@property (nonatomic) float faceOrigI;
@property (nonatomic) float faceOrigQ;
@property (nonatomic) float faceStrength;
@property (nonatomic) float warmTemp;
@property (nonatomic) float warmTint;
@property (nonatomic) BOOL warmFace;
@property long long inputLegacyVersion;
@property (retain, nonatomic) id<DGWhiteBalanceRAWProperties> rawProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (struct DGRGBf_t { float x0; float x1; float x2; })YIQFromFaceColor:(id)a0 forRAW:(BOOL)a1;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (void)setDefaultColorType:(long long)a0;
+ (BOOL)supportsAutoCalculatedValues;

- (id)init;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (id)defaultValueForInputKey:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;
- (BOOL)isMigratable;
- (void)_applyAutoSettings:(id)a0;
- (struct DGRGBf_t { float x0; float x1; float x2; })_inputFaceColorYIQValueForRAW:(BOOL)a0;
- (struct DGRGBf_t { float x0; float x1; float x2; })_inputGrayRGBColorConvertedToYIQ;
- (void)_setAsShotTempTint;
- (void)_updateFilter:(id)a0;
- (void)addAutoSettings:(id)a0;
- (BOOL)applySettingsDictionary:(id)a0;
- (void)applySettingsValue:(id)a0 forKey:(id)a1;
- (struct DGRGBf_t { float x0; float x1; float x2; })inputFaceColorYIQValue;
- (struct DGRGBf_t { float x0; float x1; float x2; })inputFaceColorYIQValueForRAW;
- (void)setOperationDefaults;

@end
