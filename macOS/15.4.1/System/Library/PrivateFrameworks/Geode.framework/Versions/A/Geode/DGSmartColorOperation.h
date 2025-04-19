@class PASmartColorAutoSettings;

@interface DGSmartColorOperation : DGSmartOperation {
    struct { double sat; double contrast; double cast; } _smartSettings;
    PASmartColorAutoSettings *_stats;
}

@property (nonatomic) double inputColor;
@property (nonatomic) double inputSaturation;
@property (nonatomic) double inputContrast;
@property (nonatomic) double inputCast;
@property (nonatomic) double offsetSaturation;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetCast;

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
- (double)getAutoValueForInputKey:(id)a0;
- (void)resetAllAutoSettingsToPending;
- (void)restoreAutoSettings:(id)a0 currentAutoIdentifier:(id)a1;
- (void)setSmartSettings:(id)a0;

@end
