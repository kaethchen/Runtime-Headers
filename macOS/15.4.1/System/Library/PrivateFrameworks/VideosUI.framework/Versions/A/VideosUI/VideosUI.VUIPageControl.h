@interface VideosUI.VUIPageControl : VUIBaseView {
    void /* unknown type, empty encoding */ isPageControlInteractionEnabled;
    void /* unknown type, empty encoding */ currentPage;
    void /* unknown type, empty encoding */ numberOfPages;
    void /* unknown type, empty encoding */ hidesForSinglePage;
    void /* unknown type, empty encoding */ interactionState;
    void /* unknown type, empty encoding */ pageDidChangeHandler;
    void /* unknown type, empty encoding */ numberOfVisiblePages;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ pageOffset;
    void /* unknown type, empty encoding */ pagingDots;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleClickGesture:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
