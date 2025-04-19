@interface VFX.VFXSceneLightParameters : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ intensity;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ orientation;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ attenuationRadius;
    void /* unknown type, empty encoding */ zNear;
    void /* unknown type, empty encoding */ zFar;
    void /* unknown type, empty encoding */ orthoScale;
    void /* unknown type, empty encoding */ outerAngle;
    void /* unknown type, empty encoding */ innerAngle;
    void /* unknown type, empty encoding */ extents;
    void /* unknown type, empty encoding */ doubleSided;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ texture;
    void /* unknown type, empty encoding */ ibl;
    void /* unknown type, empty encoding */ textureTag;
}

- (id)init;
- (void).cxx_destruct;
- (void)setOrientation:(SEL)a0;
- (void)setPosition:(SEL)a0;
- (id)initWithType:(long long)a0;
- (void)setIntensity:(float)a0;
- (id)initWithType:(SEL)a0 intensity:(long long)a1 color:(float)a2;
- (void)setAreaLightParametersWithExtents:(SEL)a0 doubleSided:(BOOL)a1;
- (void)setAttenuationRadius:(float)a0;
- (void)setDirectionalParametersWithScale:(float)a0 zNear:(float)a1 zFar:(float)a2;
- (void)setIBLParametersWithEntity:(long long)a0;
- (void)setIBLParametersWithTag:(id)a0;
- (void)setIBLParametersWithUrl:(id)a0 texture:(id)a1;
- (void)setPointLightParametersWithZNear:(float)a0 zFar:(float)a1;
- (void)setSpotLightParametersWithOuterAngle:(float)a0 innerAngle:(float)a1 zNear:(float)a2 zFar:(float)a3;

@end
