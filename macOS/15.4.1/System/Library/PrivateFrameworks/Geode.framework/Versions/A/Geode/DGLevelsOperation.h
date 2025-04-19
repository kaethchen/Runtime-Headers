@class NSString, IPAColorProfile;

@interface DGLevelsOperation : DGOperation <NSCopying, DGAutoCalculable>

@property (nonatomic) int inputMode;
@property (nonatomic) double inputBlackSrcRGB;
@property (nonatomic) double inputBlackDstRGB;
@property (nonatomic) double inputShadowSrcRGB;
@property (nonatomic) double inputShadowDstRGB;
@property (nonatomic) double inputMidSrcRGB;
@property (nonatomic) double inputMidDstRGB;
@property (nonatomic) double inputHilightSrcRGB;
@property (nonatomic) double inputHilightDstRGB;
@property (nonatomic) double inputWhiteSrcRGB;
@property (nonatomic) double inputWhiteDstRGB;
@property (nonatomic) double inputBlackSrcRed;
@property (nonatomic) double inputBlackDstRed;
@property (nonatomic) double inputShadowSrcRed;
@property (nonatomic) double inputShadowDstRed;
@property (nonatomic) double inputMidSrcRed;
@property (nonatomic) double inputMidDstRed;
@property (nonatomic) double inputHilightSrcRed;
@property (nonatomic) double inputHilightDstRed;
@property (nonatomic) double inputWhiteSrcRed;
@property (nonatomic) double inputWhiteDstRed;
@property (nonatomic) double inputBlackSrcGreen;
@property (nonatomic) double inputBlackDstGreen;
@property (nonatomic) double inputShadowSrcGreen;
@property (nonatomic) double inputShadowDstGreen;
@property (nonatomic) double inputMidSrcGreen;
@property (nonatomic) double inputMidDstGreen;
@property (nonatomic) double inputHilightSrcGreen;
@property (nonatomic) double inputHilightDstGreen;
@property (nonatomic) double inputWhiteSrcGreen;
@property (nonatomic) double inputWhiteDstGreen;
@property (nonatomic) double inputBlackSrcBlue;
@property (nonatomic) double inputBlackDstBlue;
@property (nonatomic) double inputShadowSrcBlue;
@property (nonatomic) double inputShadowDstBlue;
@property (nonatomic) double inputMidSrcBlue;
@property (nonatomic) double inputMidDstBlue;
@property (nonatomic) double inputHilightSrcBlue;
@property (nonatomic) double inputHilightDstBlue;
@property (nonatomic) double inputWhiteSrcBlue;
@property (nonatomic) double inputWhiteDstBlue;
@property (copy, nonatomic) NSString *colorSpace;
@property (readonly, nonatomic) IPAColorProfile *colorProfile;
@property (readonly, nonatomic) IPAColorProfile *histogramColorProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (void)_setAttributesForPropertyWithKey:(id)a0 defaultValue:(double)a1;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (id)colorProfileForColorSpaceName:(id)a0;
+ (id)histogramColorProfileForColorSpaceName:(id)a0;
+ (BOOL)supportsAutoCalculatedValues;

- (id)init;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;
- (id)archivalVersion;
- (void)_applyAutoSettings:(id)a0;
- (void)_setFilterValueForKey:(id)a0 filter:(id)a1;
- (void)applySettingsValue:(id)a0 forKey:(id)a1;
- (id)localizedStringFor:(id)a0;
- (id)processImage:(id)a0 options:(id)a1;
- (void)setOperationDefaults;

@end
