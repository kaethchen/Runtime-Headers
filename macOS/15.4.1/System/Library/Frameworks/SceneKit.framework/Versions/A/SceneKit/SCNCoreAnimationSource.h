@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end
