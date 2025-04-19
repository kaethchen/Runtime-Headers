@interface AppStoreKit.BaseCollectionViewCell : NSView {
    void /* unknown type, empty encoding */ layoutMargins;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ selectedBackgroundView;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ highlightState;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)accessibilityIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
