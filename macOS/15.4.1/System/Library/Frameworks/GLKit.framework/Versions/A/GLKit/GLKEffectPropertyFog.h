@interface GLKEffectPropertyFog : GLKEffectProperty

@property (nonatomic) int modeLoc;
@property (nonatomic) int colorLoc;
@property (nonatomic) int densityLoc;
@property (nonatomic) int startLoc;
@property (nonatomic) int endLoc;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) int mode;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color;
@property (nonatomic) float density;
@property (nonatomic) float start;
@property (nonatomic) float end;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)initializeMasks;
- (void)bind;
- (void)dirtyAllUniforms;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (void)setShaderBindings;

@end
