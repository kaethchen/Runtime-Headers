@interface IKGLTextSubpixelShader : NSObject

@property unsigned int framebufferTexture;
@property int viewportWidth;
@property int viewportHeight;
@property unsigned int surfaceID;
@property (readonly) void *program;

- (id)initWithFragmentCode:(const char *)a0;

@end
