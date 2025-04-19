@interface PXAssetsSectionButton : NSView <PXGReusableView> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ button;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ userData;
@property (nonatomic) void /* unknown type, empty encoding */ clippingRect;

+ (id)configurationWithTitle:(id)a0 numberOfLines:(long long)a1 action:(id /* block */)a2;
+ (double)preferredHeightWithExtendedTraitCollection:(id)a0 numberOfLines:(long long)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)becomeReusable;
- (void)buttonActionWithSender:(id)a0;

@end
