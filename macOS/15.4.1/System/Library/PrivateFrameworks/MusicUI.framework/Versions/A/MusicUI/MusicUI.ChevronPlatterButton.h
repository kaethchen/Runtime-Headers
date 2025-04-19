@interface MusicUI.ChevronPlatterButton : MusicUI.HoverableButton {
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ chevronImage;
}

@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)layout;
- (id)accessibilityLabel;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resignFirstResponder;

@end
