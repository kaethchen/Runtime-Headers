@class NSString;

@interface PAGLShader : PAGLObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic, getter=isCompiled) BOOL compiled;
@property (copy, nonatomic) NSString *source;

+ (void)deleteWithContext:(id)a0 objectID:(unsigned int)a1;

- (void).cxx_destruct;
- (unsigned int)createWithContext:(id)a0;
- (id)initWithType:(unsigned int)a0 device:(id)a1;
- (BOOL)_compilationStatus;
- (void)_compile;
- (id)_sourceWithLineNumbers;
- (BOOL)compileWithContext:(id)a0;

@end
