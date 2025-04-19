@interface VideosUI.SidebarHeaderCellView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ editButton;
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ tapGestureWorkItem;
}

@property (nonatomic, readonly) BOOL flipped;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)accessibilityCustomActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)handleTap:(id)a0;
- (void)voiceOverStatusDidChange;
- (void)handleEditButtonTap;

@end
