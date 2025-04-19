@interface PaperKit.LinkListItemView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addLinkButton;
    void /* unknown type, empty encoding */ linkItem;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)didClickAddLinkButton;

@end
