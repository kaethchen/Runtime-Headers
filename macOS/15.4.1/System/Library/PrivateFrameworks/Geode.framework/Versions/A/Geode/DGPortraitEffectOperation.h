@class NSDictionary, NSString, NSNumber;

@interface DGPortraitEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (copy, nonatomic) NSNumber *strength;
@property (nonatomic) BOOL spillMatteAllowed;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (BOOL)operationIsDefaultForAdjustmentRevert;
- (void)setOperationDefaults;
- (void)setOperationDefaultsForAdjustmentRevert;

@end
