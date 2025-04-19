@interface VFXCameraEffectSSAO : VFXCameraEffect {
    float _intensity;
    float _radius;
    float _falloff;
}

@property (nonatomic) float intensity;
@property (nonatomic) float radius;
@property (nonatomic) float falloff;

+ (BOOL)supportsSecureCoding;
+ (id)ssao;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectSSAO { } *)cfxObject;

@end
