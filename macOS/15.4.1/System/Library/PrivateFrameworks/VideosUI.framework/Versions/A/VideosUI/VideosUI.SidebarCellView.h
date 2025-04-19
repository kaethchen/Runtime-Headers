@interface VideosUI.SidebarCellView : NSTableCellView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tintConfiguration;
    void /* unknown type, empty encoding */ sidebarItem;
    void /* unknown type, empty encoding */ imageType;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ badgeLabel;
    void /* unknown type, empty encoding */ ejectButton;
    void /* unknown type, empty encoding */ checkboxButton;
    void /* unknown type, empty encoding */ isChecked;
    void /* unknown type, empty encoding */ viewLayout;
    void /* unknown type, empty encoding */ preferredImageLayout;
}

@property (nonatomic) long long rowSizeStyle;
@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)layout;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)handleCheckboxButtonTap;
- (void)handleEjectButtonTap;

@end
