@interface PhotosUICore.PhotosDynamicHeaderView : UXView <PXGReusableView> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ contentView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ userData;
@property (nonatomic) void /* unknown type, empty encoding */ clippingRect;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isFloating;
@property (nonatomic, readonly) BOOL canUnloadWhenInvisible;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)becomeReusable;

@end
