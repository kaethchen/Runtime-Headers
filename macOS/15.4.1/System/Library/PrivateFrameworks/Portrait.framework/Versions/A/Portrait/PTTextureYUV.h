@protocol MTLTexture;

@interface PTTextureYUV : PTTexture

@property (retain) id<MTLTexture> texLuma;
@property (retain) id<MTLTexture> texChroma;

- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (BOOL)isRGB;

@end
