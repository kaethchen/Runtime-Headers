@interface VideosUI.CollectionChevronIndicatorView : VideosUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ centerYOffset;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ isVisible;
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ chevronState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;

@end
