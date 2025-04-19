@interface VFXImageSource : NSObject

- (BOOL)isOpaque;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (BOOL)isPremultiplied;
- (id)textureSource;

@end
