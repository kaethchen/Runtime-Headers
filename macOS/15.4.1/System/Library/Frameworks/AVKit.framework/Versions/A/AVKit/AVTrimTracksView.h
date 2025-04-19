@class NSArray;

@interface AVTrimTracksView : NSView {
    NSArray *_trackViewControllers;
}

@property (copy, nonatomic) NSArray *trackViewControllers;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutTrackViews:(id)a0;
- (id)trackViews;

@end
