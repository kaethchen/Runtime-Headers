@class NSImage;

@interface UAOnboardingReduceMotionPlayButtonView : NSImageView

@property (retain, nonatomic) NSImage *_hoverImage;
@property (retain, nonatomic) NSImage *_plainImage;
@property (nonatomic) BOOL isHovering;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_buildImageWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_buildImagesForSize:(struct CGSize { double x0; double x1; })a0;

@end
