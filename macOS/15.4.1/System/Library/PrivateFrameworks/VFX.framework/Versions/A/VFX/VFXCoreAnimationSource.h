@class CALayer;

@interface VFXCoreAnimationSource : VFXImageSource

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end
