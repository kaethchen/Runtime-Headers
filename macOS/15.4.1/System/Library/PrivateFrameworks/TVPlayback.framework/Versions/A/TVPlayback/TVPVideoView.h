@class NSImageView, NSTextField, TVPPlayerLayerView, NSObject;
@protocol TVPAVFPlayback;

@interface TVPVideoView : NSView

@property (retain, nonatomic) TVPPlayerLayerView *playerLayerView;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (retain, nonatomic) NSImageView *stillImageView;
@property (retain, nonatomic) NSObject<TVPAVFPlayback> *player;
@property (readonly, nonatomic) NSTextField *debugLabel;
@property (nonatomic) BOOL isPrimarySubtitleDisplayer;
@property (nonatomic) long long videoGravity;

+ (void)initialize;
+ (void)_playerStateDidChange:(id)a0;
+ (void)_purgePreservedVideoViewsForPlayer:(id)a0;
+ (void)preserveVideoViewForReuse:(id)a0 identifier:(id)a1;
+ (id)preservedVideoViewsForPlayer:(id)a0 identifier:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setAVPlayer:(id)a0;
- (id)AVPlayer;
- (void)_playerStillImageDidChange:(id)a0;

@end
