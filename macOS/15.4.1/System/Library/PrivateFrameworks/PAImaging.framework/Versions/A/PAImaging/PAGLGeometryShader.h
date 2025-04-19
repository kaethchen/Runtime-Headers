@interface PAGLGeometryShader : PAGLShader

@property (nonatomic) unsigned int inputType;
@property (nonatomic) unsigned int outputType;
@property (nonatomic) unsigned int outVertexCount;

+ (unsigned int)_maxOutVertexCount;
+ (unsigned int)maxOutVertexCount;

- (id)initWithDevice:(id)a0;

@end
