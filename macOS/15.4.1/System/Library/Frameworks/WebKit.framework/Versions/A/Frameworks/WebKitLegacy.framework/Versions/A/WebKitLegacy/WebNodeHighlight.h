@class NSView, NSWindow, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {
    NSView *_targetView;
    NSWindow *_highlightWindow;
    WebNodeHighlightView *_highlightView;
    struct NakedPtr<WebCore::InspectorController> { struct InspectorController *m_ptr; } _inspectorController;
    id _delegate;
}

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id).cxx_construct;
- (void)detach;
- (id)targetView;
- (void)attach;
- (void)setNeedsUpdateInTargetViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeHighlightWindowFrame;
- (void)_repositionHighlightWindow;
- (id)highlightView;
- (id)initWithTargetView:(id)a0 inspectorController:(struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })a1;
- (struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })inspectorController;

@end
