@class NSImage, CALayer;

@interface QLTransitionCrossFadeView : NSView {
    CALayer *_sourceLayer;
    CALayer *_destinationLayer;
}

@property (retain) NSImage *sourceImage;
@property (retain) NSImage *destinationImage;
@property double progress;

- (void).cxx_destruct;
- (unsigned int)_CAViewFlags;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;

@end
