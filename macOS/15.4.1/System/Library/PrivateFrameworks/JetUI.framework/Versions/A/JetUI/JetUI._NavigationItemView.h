@interface JetUI._NavigationItemView : NSView {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ backButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ leadingView;
    void /* unknown type, empty encoding */ trailingView;
    void /* unknown type, empty encoding */ representedItem;
    void /* unknown type, empty encoding */ standardAppearance;
    void /* unknown type, empty encoding */ canNavigateBack;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)update;

@end
