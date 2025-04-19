@class AVAsset, ICNoteEditorIconImageView, ICMZoomController, CALayer, NSString, ICAttachment;

@interface ICAudioPlayPauseView : NSView <ICMZoomableAttachmentView>

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) ICNoteEditorIconImageView *playView;
@property (retain, nonatomic) ICNoteEditorIconImageView *pauseView;
@property (readonly, nonatomic) AVAsset *audio;
@property (retain, nonatomic) ICAttachment *audioAttachment;
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)pause;
- (id)accessibilityLabel;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)play;
- (void)viewDidChangeBackingProperties;
- (void)togglePlayPause;
- (void)audioPlaybackPauseNotification:(id)a0;
- (void)audioWillChange;
- (id)addSubImageViewForImage:(id)a0;
- (void)audioDidChange;
- (void)audioPlaybackPlayNotification:(id)a0;
- (void)audioPlaybackStopNotification:(id)a0;
- (void)audioPlaybackTimeChangedNotification:(id)a0;
- (void)clickGesture:(id)a0;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)didPlayToEndNotification:(id)a0;
- (id)foregroundStrokeColor;
- (void)hostViewDidZoom:(id)a0;
- (void)setImageNamed:(id)a0 onLayer:(id)a1 adjustLayerSize:(BOOL)a2;
- (void)sharedInit;
- (void)showPaused;
- (void)showPlaying;
- (void)showPressed:(BOOL)a0;
- (void)showStopped;
- (void)updateTime:(double)a0 duration:(double)a1;

@end
