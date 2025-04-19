@class NSDictionary;

@interface DGDepthEffectOperation : DGOperation

@property (copy, nonatomic) NSDictionary *depthInfo;
@property (nonatomic) double aperture;
@property (copy, nonatomic) NSDictionary *focusRect;
@property (nonatomic) BOOL glassesMatteAllowed;
@property (readonly, nonatomic) double defaultAperture;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;
- (void)setOperationDefaults;
- (BOOL)valueIsDefaultForInputKey:(id)a0;

@end
