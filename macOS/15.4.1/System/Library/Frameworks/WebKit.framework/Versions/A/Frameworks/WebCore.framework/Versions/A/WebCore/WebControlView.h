@interface WebControlView : NSControl {
    struct RetainPtr<WebControlWindow> { void *m_ptr; } _window;
}

@property (class) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipBounds;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)window;
- (BOOL)_automaticFocusRingDisabled;
- (id)_focusRingClipAncestor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusRingVisibleRect;
- (id)_viewRoot;
- (void)addSubview:(id)a0;
- (id)currentEditor;
- (BOOL)isFlipped;

@end
