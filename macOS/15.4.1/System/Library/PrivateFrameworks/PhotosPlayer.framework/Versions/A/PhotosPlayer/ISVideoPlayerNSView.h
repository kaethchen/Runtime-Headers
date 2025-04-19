@class NSString, ISWrappedAVPlayer, ISAVPlayerLayer, CALayer;

@interface ISVideoPlayerNSView : NSView {
    ISAVPlayerLayer *_playerLayer;
    CALayer *_contentLayer;
}

@property (copy, nonatomic) NSString *videoGravity;
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (readonly, nonatomic) CALayer *contentLayer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_performCommonISVideoPlayerViewInitialization;

@end
