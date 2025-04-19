@class NSString, NSMutableDictionary, MRShaderArguments;

@interface MRContextState : NSObject {
    float modelViewMatrix[16];
    float textureMatrix[4][16];
    float normal[3];
    unsigned int vbo;
    const float *vertexPointer;
    const float *colorsPointer;
    const float *normalsPointer;
    float *textureCoordinatesPointer[4];
    const float *inSpriteCoordinatesPointer;
    int vertexStride;
    unsigned short vertexFlags;
    BOOL vertexArrayIsEnabled;
    BOOL foreColorArrayIsEnabled;
    BOOL normalArrayIsEnabled;
    BOOL textureCoordinatesArrayIsEnabled[4];
    BOOL inSpriteCoordinatesArrayIsEnabled;
    float foreColor[4];
    float backColor[4];
    unsigned int textureTargetOnUnit[4];
    unsigned int textureNameOnUnit[4];
    double textureTimestampOnUnit[4];
    BOOL blendingIsEnabled;
    int blendingType;
    BOOL cullingIsEnabled;
    BOOL cullFrontfacing;
    BOOL depthTestIsEnabled;
}

@property (copy) NSString *shaderID;
@property (retain) MRShaderArguments *shaderArguments;
@property (readonly) NSMutableDictionary *vertexAttributes;
@property (readonly) NSMutableDictionary *temporaryUniforms;

- (void)dealloc;
- (id)init;

@end
