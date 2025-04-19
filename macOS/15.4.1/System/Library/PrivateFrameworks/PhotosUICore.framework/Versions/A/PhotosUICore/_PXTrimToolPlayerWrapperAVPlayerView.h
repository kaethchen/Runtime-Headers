@class AVPlayerLayer;

@interface _PXTrimToolPlayerWrapperAVPlayerView : UXView

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

+ (Class)layerClass;

- (id)initWithPlayer:(id)a0;

@end
