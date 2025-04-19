@interface _TtC7SwiftUIP33_B9E8471D77A01696E0731B43A95A934614_FocusRingView : NSView {
    void /* unknown type, empty encoding */ focused;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_helper;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawFocusRingMask;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
