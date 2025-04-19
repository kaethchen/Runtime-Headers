@class AVPlayerController;

@interface AVTrackView : NSView

@property (retain) AVPlayerController *playerController;
@property (readonly) double allowedScrollAmount;
@property BOOL updatesDuringLiveResize;

- (void).cxx_destruct;
- (void)startThumbnailGenerationWithZoomInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0;
- (void)zoomWithInfo:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })a0;

@end
