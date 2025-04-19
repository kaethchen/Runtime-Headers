@interface VFXCameraEffectDoughnutBokeh : VFXCameraEffect {
    float _radius;
    void /* unknown type, empty encoding */ _maskCenter;
    float _maskRadius;
    BOOL _maskEnabled;
}

@property (nonatomic) float radius;
@property (nonatomic) void /* unknown type, empty encoding */ maskCenter;
@property (nonatomic) float maskRadius;
@property (nonatomic) BOOL maskEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)doughnutBokeh;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectDoughnutBokeh { } *)cfxObject;
- (BOOL)rawFloat2ForKey:(id)a0 value:(void *)a1;

@end
