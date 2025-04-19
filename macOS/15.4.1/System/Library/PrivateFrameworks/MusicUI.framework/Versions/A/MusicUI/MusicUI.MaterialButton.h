@class NSColor;

@interface MusicUI.MaterialButton : NSButton {
    void /* unknown type, empty encoding */ symbolFont;
    void /* unknown type, empty encoding */ defaultImage;
    void /* unknown type, empty encoding */ defaultImageConfiguration;
    void /* unknown type, empty encoding */ preferredMaterial;
    void /* unknown type, empty encoding */ isMaterialBackgroundEnabled;
    void /* unknown type, empty encoding */ treatment;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_materialView;
}

@property (nonatomic, retain) NSColor *contentTintColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
