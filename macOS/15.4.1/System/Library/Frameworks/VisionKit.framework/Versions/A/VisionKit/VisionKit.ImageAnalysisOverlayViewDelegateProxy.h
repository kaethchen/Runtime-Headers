@interface VisionKit.ImageAnalysisOverlayViewDelegateProxy : NSObject <VKCImageAnalysisOverlayViewDelegate> {
    void /* unknown type, empty encoding */ owner;
}

- (id)init;
- (void).cxx_destruct;
- (id)contentViewForImageAnalysisOverlayView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForImageAnalysisOverlayView:(id)a0;
- (void)imageAnalysisOverlay:(id)a0 highlightSelectedItemsValueDidChange:(BOOL)a1;
- (void)imageAnalysisOverlay:(id)a0 liveTextButtonDidChangeToVisible:(BOOL)a1;
- (void)imageAnalysisOverlay:(id)a0 menu:(id)a1 willHighlightItem:(id)a2;
- (void)imageAnalysisOverlay:(id)a0 menuDidClose:(id)a1;
- (void)imageAnalysisOverlay:(id)a0 menuNeedsUpdate:(id)a1;
- (void)imageAnalysisOverlay:(id)a0 menuWillOpen:(id)a1;
- (BOOL)imageAnalysisOverlay:(id)a0 shouldHandleKeyDownEvent:(id)a1;
- (BOOL)imageAnalysisOverlay:(id)a0 shouldShowMenuForEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)imageAnalysisOverlay:(id)a0 updateMenu:(id)a1 forEvent:(id)a2 atPoint:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)imageAnalysisOvlerlayView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)textSelectionDidChangeForImageAnalysisOverlayView:(id)a0;

@end
