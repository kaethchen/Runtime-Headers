@class NSString, MRContext, NSDictionary, NSMutableDictionary;

@interface MRShader : NSObject {
    NSDictionary *mDescription;
    MRContext *mContext;
    unsigned int mVertexShader;
    unsigned int mFragmentShader;
    MRContext *mUseContext;
    float mModelViewProjectionMatrix[16];
    float mNormal[3];
    float mTextureMatrix[4][16];
    float mForeColor[4];
    int mModelViewProjectionMatrixLocation;
    int mNormalLocation;
    int mTextureMatrixLocation[4];
    int mForeColorLocation;
    NSMutableDictionary *mUniformLocations;
    NSMutableDictionary *mUniforms;
    NSMutableDictionary *mAttributeLocations;
}

@property (readonly) NSString *shaderID;
@property (readonly) NSString *shaderKey;
@property (readonly, nonatomic) unsigned int program;
@property (retain) MRContext *useContext;
@property BOOL textureUnitsAreBound;

- (void)dealloc;
- (void)setForeColor:(const float *)a0;
- (int)locationForAttribute:(id)a0;
- (void)setTextureMatrix:(float[16])a0 onTextureUnit:(unsigned long long)a1;
- (int)_locationForUniform:(id)a0;
- (BOOL)caresAboutForeColor;
- (BOOL)caresAboutNormal;
- (id)initWithShaderID:(id)a0 shaderKey:(id)a1 description:(id)a2 vertexShader:(unsigned int)a3 andFragmentShader:(unsigned int)a4 inContext:(id)a5;
- (void)setModelViewProjectionMatrix:(float[16])a0;
- (void)setNormal:(float)a0 :(float)a1 :(float)a2;
- (void)setUniform:(id)a0 forKey:(id)a1;
- (void)setUniformFloat:(float)a0 forKey:(id)a1;
- (void)setUniformInt:(int)a0 forKey:(id)a1;
- (void)setUniformMat3:(float[16])a0 forKey:(id)a1;
- (void)setUniformMat4:(float[16])a0 forKey:(id)a1;
- (void)setUniformVec2:(float)a0 :(float)a1 forKey:(id)a2;
- (void)setUniformVec3:(float)a0 :(float)a1 :(float)a2 forKey:(id)a3;
- (void)setUniformVec4:(float)a0 :(float)a1 :(float)a2 :(float)a3 forKey:(id)a4;

@end
