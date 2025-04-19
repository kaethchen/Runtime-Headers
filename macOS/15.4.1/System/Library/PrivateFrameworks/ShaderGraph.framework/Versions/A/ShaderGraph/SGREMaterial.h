@class NSString, NSArray, NSDictionary, SGTypeDescription;

@interface SGREMaterial : NSObject {
    void /* unknown type, empty encoding */ surfaceShaderFunctionName;
    void /* unknown type, empty encoding */ geometryModifierFunctionName;
    void /* unknown type, empty encoding */ uniforms;
    void /* unknown type, empty encoding */ textures;
    void /* unknown type, empty encoding */ warnings;
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ textureAssignments;
    void /* unknown type, empty encoding */ customUniformsType;
    void /* unknown type, empty encoding */ edgeDigest;
    void /* unknown type, empty encoding */ operationalHash;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *surfaceShaderFunctionName;
@property (nonatomic, readonly) NSString *geometryModifierFunctionName;
@property (nonatomic, readonly) NSArray *uniforms;
@property (nonatomic, copy) NSDictionary *textures;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ lightingModel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ blending;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasPremultipliedAlpha;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ matchUnlitColor;
@property (nonatomic, readonly) NSArray *warnings;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasSurfaceShaderUniforms;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasGeometryModifierUniforms;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasConnectedLightSpillNodes;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasBackgroundBlur;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasGeometryModifierOffset;
@property (nonatomic, readonly) SGTypeDescription *customUniformsType;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
