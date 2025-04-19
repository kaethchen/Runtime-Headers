@class NSNumber;

@interface DGColorOperation : DGOperation <NSCopying> {
    NSNumber *_inputFilterVersion;
}

@property double inputRedsHueBase;
@property double inputRedsHueShift;
@property double inputRedsSaturation;
@property double inputRedsLuminance;
@property double inputRedsSpread;
@property double inputYellowsHueBase;
@property double inputYellowsHueShift;
@property double inputYellowsSaturation;
@property double inputYellowsLuminance;
@property double inputYellowsSpread;
@property double inputGreensHueBase;
@property double inputGreensHueShift;
@property double inputGreensSaturation;
@property double inputGreensLuminance;
@property double inputGreensSpread;
@property double inputCyansHueBase;
@property double inputCyansHueShift;
@property double inputCyansSaturation;
@property double inputCyansLuminance;
@property double inputCyansSpread;
@property double inputBluesHueBase;
@property double inputBluesHueShift;
@property double inputBluesSaturation;
@property double inputBluesLuminance;
@property double inputBluesSpread;
@property double inputMagentasHueBase;
@property double inputMagentasHueShift;
@property double inputMagentasSaturation;
@property double inputMagentasLuminance;
@property double inputMagentasSpread;

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
+ (id)inputKeyWithHue:(int)a0 type:(long long)a1;
+ (id)inputKeysWithHue:(int)a0;
+ (id)inputKeysWithType:(long long)a0;
+ (void)iterateHues:(id /* block */)a0;
+ (void)iterateTypes:(id /* block */)a0;
+ (id)stringForHue:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;

@end
