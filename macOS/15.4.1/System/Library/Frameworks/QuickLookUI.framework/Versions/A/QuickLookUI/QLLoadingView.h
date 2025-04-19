@class NSImageView, NSArray, NSView, NSProgressIndicator, CALayer;

@interface QLLoadingView : NSView

@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSImageView *thumbnailView;
@property (retain) NSArray *thumbnailViewConstraints;
@property (retain) NSView *backgroundView;
@property (retain) CALayer *darkLayer;
@property BOOL showSpinner;

- (id)init;
- (void).cxx_destruct;
- (void)setAppearance:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderFrame;
- (void)didHide;
- (void)willShow;
- (void)_updateThumbnailViewConstraintsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundContents:(id)a0;
- (void)setTransitionImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
