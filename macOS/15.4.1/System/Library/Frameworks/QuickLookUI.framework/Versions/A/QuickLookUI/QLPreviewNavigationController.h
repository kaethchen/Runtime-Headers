@class NSView, QLTimeSlider, QLPreviewPageNavigationView, QLDisplayBundle;

@interface QLPreviewNavigationController : NSObject

@property (retain) QLTimeSlider *timeSlider;
@property (retain) QLPreviewPageNavigationView *pageNavigationView;
@property BOOL allowsPagesNavigation;
@property BOOL allowsTimeNavigation;
@property (retain) NSView *containerView;
@property (weak, nonatomic) QLDisplayBundle *displayBundle;

+ (Class)timeSliderClass;
+ (struct CGSize { double x0; double x1; })containerViewSizeFromContentSize:(struct CGSize { double x0; double x1; })a0 withNavigationControls:(int)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationControls:(int)a1;
+ (int)navigationControlsForDisplayBundle:(id)a0 allowsPages:(BOOL)a1 allowsTimeSlider:(BOOL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)willShow;
- (void)willHide;
- (BOOL)_showNavigationControls:(int)a0;
- (struct CGSize { double x0; double x1; })containerViewSizeFromContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameInContainerView;
- (BOOL)updateNavigationControls;

@end
