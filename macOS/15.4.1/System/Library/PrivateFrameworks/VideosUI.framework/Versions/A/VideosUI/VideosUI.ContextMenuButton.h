@interface VideosUI.ContextMenuButton : VUIButton {
    void /* unknown type, empty encoding */ effect;
    void /* unknown type, empty encoding */ lockupViewModel;
    void /* unknown type, empty encoding */ contextMenuInteractor;
    void /* unknown type, empty encoding */ contextMenuInteractorDelegate;
    void /* unknown type, empty encoding */ usesDefaultImage;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;

@end
