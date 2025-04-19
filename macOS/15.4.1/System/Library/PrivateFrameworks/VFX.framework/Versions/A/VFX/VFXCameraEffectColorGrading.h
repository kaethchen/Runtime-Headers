@class VFXMaterialProperty;

@interface VFXCameraEffectColorGrading : VFXCameraEffect {
    float _saturation;
    float _contrast;
    float _whiteBalanceTemperature;
    float _whiteBalanceTint;
    void /* unknown type, empty encoding */ _liftColor;
    float _liftOffset;
    void /* unknown type, empty encoding */ _gammaColor;
    float _gammaOffset;
    void /* unknown type, empty encoding */ _gainColor;
    float _gainOffset;
    VFXMaterialProperty *_lookupTable;
}

@property (nonatomic) float saturation;
@property (nonatomic) float contrast;
@property (nonatomic) float whiteBalanceTemperature;
@property (nonatomic) float whiteBalanceTint;
@property (nonatomic) void /* unknown type, empty encoding */ liftColor;
@property (nonatomic) float liftOffset;
@property (nonatomic) void /* unknown type, empty encoding */ gammaColor;
@property (nonatomic) float gammaOffset;
@property (nonatomic) void /* unknown type, empty encoding */ gainColor;
@property (nonatomic) float gainOffset;

+ (BOOL)supportsSecureCoding;
+ (id)colorGrading;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)setLookupTable:(id)a0;
- (id)lookupTable;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectColorGrading { } *)cfxObject;
- (BOOL)rawFloat3ForKey:(id)a0 value:(void *)a1;

@end
