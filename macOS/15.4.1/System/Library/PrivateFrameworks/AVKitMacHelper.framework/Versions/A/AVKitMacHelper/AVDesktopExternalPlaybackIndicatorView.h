@class NSTextField, NSView, NSLayoutGuide, NSMutableArray;

@interface AVDesktopExternalPlaybackIndicatorView : NSView {
    NSView *_containerView;
    NSTextField *_titleTextField;
    NSTextField *_subtitleTextField;
    NSLayoutGuide *_preferredContentAreaLayoutGuide;
    NSMutableArray *_preferredContentAreaLayoutConstraints;
}

@property (retain) NSLayoutGuide *preferredContentAreaLayoutGuide;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)_updatePreferredContentAreaLayoutConstraints;
- (void)setTitleString:(id)a0 subtitleString:(id)a1;

@end
