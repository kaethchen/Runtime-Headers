@interface DGRAWReduceNoiseOperation : DGOperation

@property (nonatomic) double inputLNRAmount;
@property (nonatomic) double inputCNRAmount;
@property (nonatomic) double inputDetailAmount;
@property (readonly, nonatomic) double filterLNRAmount;
@property (readonly, nonatomic) double filterCNRAmount;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)init;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (id)defaultValueForInputKey:(id)a0;
- (BOOL)isMigratable;
- (double)_defaultCNRAmount;
- (double)_defaultLNRAmount;
- (double)_filterCNRAmountFromUICNRAmount:(double)a0;
- (double)_filterLNRAmountFromUILNRAmount:(double)a0;
- (void)_legacyToFilterValuesForInputAmount:(double)a0 offsetLNRAmount:(double)a1 offsetCNRAmount:(double)a2 offsetDetailAmount:(double)a3;
- (BOOL)applySettingsDictionary:(id)a0;

@end
