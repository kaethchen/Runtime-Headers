@class PAItemViewConfiguration, PAItemView, NSView, NSString;
@protocol PANUMediaView;

@interface PACanvasItemView : NSView <PANUMediaViewDelegate> {
    NSView *_contentOverlayContainer;
}

@property (retain) PAItemView *itemViewImpl;
@property (retain) PAItemView *itemView;
@property (retain, nonatomic) NSView<PANUMediaView> *mediaView;
@property (readonly, nonatomic) NSView *overlayView;
@property (readonly, nonatomic) NSView *contentOverlayView;
@property (nonatomic) BOOL shouldPerformLayout;
@property (nonatomic) BOOL allowScaleUpInZoomToFit;
@property (nonatomic) BOOL zoomToFit;
@property (nonatomic) double zoomFactor;
@property (readonly, nonatomic) double zoomToFitFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (retain, nonatomic) PAItemViewConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfZoomFactor;
+ (BOOL)automaticallyNotifiesObserversOfZoomToFit;
+ (BOOL)automaticallyNotifiesObserversOfZoomToFitFactor;

- (void).cxx_destruct;
- (void)layout;
- (void)setNeedsLayout:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (id)itemView;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setItemView:(id)a0;
- (void)updateLayout;
- (BOOL)wantsUpdateLayer;
- (void)_updateContentFrame;
- (void)_updateContentViewFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateZoomToFitFactor:(double)a0;
- (void)addMouseTracker:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPointFromContent:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToContent:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContentViewToView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertWindowPointToContentView:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviewsWithConfiguration:(id)a0;
- (void)mediaView:(id)a0 didZoom:(double)a1;

@end
