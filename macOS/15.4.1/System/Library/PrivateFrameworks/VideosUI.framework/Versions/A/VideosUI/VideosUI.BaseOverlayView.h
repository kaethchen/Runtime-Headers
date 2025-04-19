@interface VideosUI.BaseOverlayView : VUIBaseView {
    void /* unknown type, empty encoding */ playView;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ visibilityType;
    void /* unknown type, empty encoding */ defaultColor;
    void /* unknown type, empty encoding */ highlightedColor;
    void /* unknown type, empty encoding */ viewModel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)vui_setHighlighted:(BOOL)a0;

@end
