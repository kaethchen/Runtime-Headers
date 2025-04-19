@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource

@property (retain, nonatomic) SKScene *scene;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end
