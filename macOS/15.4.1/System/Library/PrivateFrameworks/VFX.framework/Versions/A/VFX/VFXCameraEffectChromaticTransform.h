@interface VFXCameraEffectChromaticTransform : VFXCameraEffect {
    long long _sampleCount;
    float _intensity;
    void /* unknown type, empty encoding */ _center;
    float _fromZ;
    float _fromAngle;
    void /* unknown type, empty encoding */ _fromShift;
    float _toZ;
    float _toAngle;
    void /* unknown type, empty encoding */ _toShift;
    void /* unknown type, empty encoding */ _color1;
    void /* unknown type, empty encoding */ _color2;
    void /* unknown type, empty encoding */ _color3;
    void /* unknown type, empty encoding */ _maskCenter;
    float _maskRadius;
    BOOL _maskEnabled;
    float _unMultBlending;
}

@property (nonatomic) long long sampleCount;
@property (nonatomic) float intensity;
@property (nonatomic) void /* unknown type, empty encoding */ center;
@property (nonatomic) float fromZ;
@property (nonatomic) float fromAngle;
@property (nonatomic) void /* unknown type, empty encoding */ fromShift;
@property (nonatomic) float toZ;
@property (nonatomic) float toAngle;
@property (nonatomic) void /* unknown type, empty encoding */ toShift;
@property (nonatomic) void /* unknown type, empty encoding */ color1;
@property (nonatomic) void /* unknown type, empty encoding */ color2;
@property (nonatomic) void /* unknown type, empty encoding */ color3;
@property (nonatomic) void /* unknown type, empty encoding */ maskCenter;
@property (nonatomic) float maskRadius;
@property (nonatomic) BOOL maskEnabled;
@property (nonatomic) float unMultBlending;

+ (BOOL)supportsSecureCoding;
+ (id)chromaticTransform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectChromaticTransform { } *)cfxObject;
- (BOOL)rawFloat2ForKey:(id)a0 value:(void *)a1;
- (BOOL)rawFloat3ForKey:(id)a0 value:(void *)a1;

@end
