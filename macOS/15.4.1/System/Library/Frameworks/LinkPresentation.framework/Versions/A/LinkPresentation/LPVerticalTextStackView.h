@class NSMutableArray, LPVerticalTextStackViewStyle;

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable> {
    NSMutableArray *_items;
    BOOL _hasEverBuilt;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPVerticalTextStackViewStyle *_style;
}

- (void).cxx_destruct;
- (void)addArrangedSubview:(id)a0;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutTextStackForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (long long)computedNumberOfLines;
- (id)initWithHost:(id)a0 style:(id)a1;
- (void)layoutComponentView;

@end
