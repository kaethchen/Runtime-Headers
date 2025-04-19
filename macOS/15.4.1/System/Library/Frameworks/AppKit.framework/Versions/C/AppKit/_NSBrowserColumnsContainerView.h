@interface _NSBrowserColumnsContainerView : NSView {
    struct __BrccvFlags { unsigned char ignoreScrolling : 1; unsigned int reserved : 31; } _brccvFlags;
}

- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawScrollViewFocusRing:(id)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 needsFullDisplay:(BOOL)a2;
- (id)_enclosingBrowserView;
- (BOOL)_ignoringScrolling;
- (struct CGSize { double x0; double x1; })_minimumFrameSize;
- (void)_setIgnoringScrolling:(BOOL)a0;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)a0;
- (BOOL)_willDrawFocusRingAroundEnclosingScrollView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isOpaque;
- (id)menuForEvent:(id)a0;
- (BOOL)preservesContentDuringLiveResize;
- (void)scrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 by:(struct CGSize { double x0; double x1; })a1;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
