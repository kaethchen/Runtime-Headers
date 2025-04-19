@interface ICCollaboratorStatusView : NSView {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ collaboratorStatus;
    void /* unknown type, empty encoding */ hasDisplayedInWindow;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ selectionViews;
    void /* unknown type, empty encoding */ isRemovingFromSuperview;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToWindow;

@end
