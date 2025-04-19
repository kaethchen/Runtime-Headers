@interface VideosUI.SearchListCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ cellImageView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomSeparatorView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ resultsContextLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ subtitleLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
