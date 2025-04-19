@class AVPlayer, AVPlayerLayer;

@interface OKWidgetMediaVideoPlayerView : OFNSView {
    AVPlayerLayer *_playerLayer;
}

@property (retain, nonatomic) AVPlayer *player;

+ (Class)layerClass;

@end
