@interface PAGLTexture3D : PAGLTexture

@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int depth;

- (unsigned int)createWithContext:(id)a0;
- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 depth:(unsigned int)a2 device:(id)a3;
- (void)writeData:(const void *)a0 context:(id)a1;

@end
