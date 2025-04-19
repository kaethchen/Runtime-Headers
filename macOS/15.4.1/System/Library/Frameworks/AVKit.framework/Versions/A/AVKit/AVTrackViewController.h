@class AVTrackView, AVPlayerController, AVPlayerLayer;

@interface AVTrackViewController : NSViewController {
    AVPlayerController *_playerController;
    BOOL _showsAlternateMediaTrackPreview;
    BOOL _updatesDuringLiveResize;
    AVTrackView *_trackView;
    AVPlayerLayer *_trimThumbnailPlayerLayer;
}

@property (weak) AVPlayerController *playerController;
@property BOOL showsAlternateMediaTrackPreview;
@property BOOL updatesDuringLiveResize;
@property (readonly) BOOL showsAudioTrackPreview;
@property (readonly) double allowedScrollAmount;
@property (retain) AVPlayerLayer *trimThumbnailPlayerLayer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)_updateTrackViewThumbnailPlayerLayerIfNeeded;
- (void)startThumbnailGenerationWithZoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0;
- (void)updateTrackViewIfNeeded;
- (void)zoomWithInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0;

@end
