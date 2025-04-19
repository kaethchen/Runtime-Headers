@protocol MTLTexture;

@interface PTTextureRGBA : PTTexture

@property (retain) id<MTLTexture> texRGBA;

- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (BOOL)isRGB;

@end
