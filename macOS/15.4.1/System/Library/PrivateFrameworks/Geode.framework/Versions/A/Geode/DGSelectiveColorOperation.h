@class NSColor, NSNumber;

@interface DGSelectiveColorOperation : DGOperation <NSCopying> {
    NSNumber *_inputFilterVersion;
}

@property (copy, nonatomic) NSColor *input1Color;
@property double input1HueBase;
@property double input1HueShift;
@property double input1Saturation;
@property double input1Luminance;
@property double input1Spread;
@property (copy, nonatomic) NSColor *input2Color;
@property double input2HueBase;
@property double input2HueShift;
@property double input2Saturation;
@property double input2Luminance;
@property double input2Spread;
@property (copy, nonatomic) NSColor *input3Color;
@property double input3HueBase;
@property double input3HueShift;
@property double input3Saturation;
@property double input3Luminance;
@property double input3Spread;
@property (copy, nonatomic) NSColor *input4Color;
@property double input4HueBase;
@property double input4HueShift;
@property double input4Saturation;
@property double input4Luminance;
@property double input4Spread;
@property (copy, nonatomic) NSColor *input5Color;
@property double input5HueBase;
@property double input5HueShift;
@property double input5Saturation;
@property double input5Luminance;
@property double input5Spread;
@property (copy, nonatomic) NSColor *input6Color;
@property double input6HueBase;
@property double input6HueShift;
@property double input6Saturation;
@property double input6Luminance;
@property double input6Spread;

+ (void)initialize;
+ (id)attributes;
+ (id)stringForType:(long long)a0;
+ (id)inputKeys;
+ (id)outputKeys;
+ (void)_configureSaturationControllers;
+ (void)_configureHueBaseControllerWithKey:(id)a0 defaultHue:(double)a1;
+ (void)_configureHueBaseControllers;
+ (void)_configureHueShiftControllers;
+ (void)_configureLuminanceControllers;
+ (void)_configureSpreadControllers;
+ (id)_stringsTableName;
+ (id)colorKeyWithHue:(long long)a0;
+ (id)inputKeyWithHue:(long long)a0 type:(long long)a1;
+ (id)inputKeysWithHue:(long long)a0;
+ (id)inputKeysWithType:(long long)a0;
+ (void)iterateHues:(id /* block */)a0;
+ (void)iterateTypes:(id /* block */)a0;
+ (id)stringForHue:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
