@interface PAGLTexture : PAGLObject <PAGLFramebufferAttachable>

@property (readonly, nonatomic) unsigned int target;
@property (nonatomic) unsigned int wrapMode;
@property (nonatomic) unsigned int magFilter;
@property (nonatomic) unsigned int minFilter;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int internalFormat;

+ (void)deleteWithContext:(id)a0 objectID:(unsigned int)a1;

- (unsigned int)createWithContext:(id)a0;
- (id)initWithTarget:(unsigned int)a0 device:(id)a1;
- (void)attachToFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)attachToFramebuffer:(id)a0 withBlock:(id /* block */)a1;
- (void)detachFromFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)drawWithBlock:(id /* block */)a0 context:(id)a1;
- (void)readData:(void *)a0 context:(id)a1;
- (void)readWithBlock:(id /* block */)a0 context:(id)a1;
- (BOOL)setPurgeable:(BOOL)a0 context:(id)a1;
- (BOOL)setUnpurgeable:(BOOL)a0 context:(id)a1;
- (void)writeData:(const void *)a0 context:(id)a1;

@end
