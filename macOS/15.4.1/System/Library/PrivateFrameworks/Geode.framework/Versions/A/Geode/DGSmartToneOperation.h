@class PASmartToneAutoSettings;

@interface DGSmartToneOperation : DGSmartOperation {
    struct { double exposure; double contrast; double brightness; double shadows; double highlights; double black; double rawHighlights; double localLight; } _smartSettings;
    PASmartToneAutoSettings *_stats;
    double _inputLocalLight;
}

@property (nonatomic) double inputLight;
@property (nonatomic) double inputExposure;
@property (nonatomic) double inputContrast;
@property (nonatomic) double inputBrightness;
@property (nonatomic) double inputShadows;
@property (nonatomic) double inputHighlights;
@property (nonatomic) double inputBlack;
@property (nonatomic) double inputLocalLight;
@property (readonly, nonatomic) double inputRawHighlights;
@property (nonatomic) double offsetExposure;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetBrightness;
@property (nonatomic) double offsetShadows;
@property (nonatomic) double offsetHighlights;
@property (nonatomic) double offsetBlack;
@property (nonatomic) double offsetLocalLight;
@property (readonly, nonatomic) PASmartToneAutoSettings *statistics;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (void)_updateSettings;
- (void)resetOffsets;
- (BOOL)isMigratable;
- (void)_applyAutoSettings:(id)a0;
- (BOOL)applySettingsDictionary:(id)a0;
- (id)autoCalculatedSlaveInputKeysForMasterInputKey:(id)a0;
- (void)disableLocalLight;
- (double)getAutoValueForInputKey:(id)a0;
- (BOOL)needsUpdatedAutoSettingsForOperationFactory;
- (void)resetAllAutoSettingsToPending;
- (void)restoreAutoSettings:(id)a0 currentAutoIdentifier:(id)a1;
- (void)setSmartSettings:(id)a0;
- (void)updateAutoSettings:(id)a0;
- (void)updateAutoSettingsFromOperation:(id)a0;

@end
