@interface SCNDelegateSource : SCNImageSource

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end
