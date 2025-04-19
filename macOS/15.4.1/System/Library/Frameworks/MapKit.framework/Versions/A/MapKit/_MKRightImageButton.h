@class NSString, NSImage, NSArray, MKImageView, _MKUILabel, NSInvocation;

@interface _MKRightImageButton : NSControl {
    BOOL _trackingClick;
    NSInvocation *_actionInvocation;
    BOOL _titleConstraintsAdded;
    NSArray *_titleOnlyConstraints;
    NSArray *_titleAndImageConstraints;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) _MKUILabel *titleLabel;
@property (readonly, nonatomic) MKImageView *imageView;

- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)lastBaselineAnchor;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateConstraints;
- (BOOL)_shouldTrackEvent:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end
