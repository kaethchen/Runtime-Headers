@interface ILMediaBrowserImageView : IKImageBrowserView {
    BOOL _shouldDrawOverlays;
    BOOL _displaysToolTips;
}

- (void)rightMouseDown:(id)a0;
- (void)copy:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)keyDown:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)wantsLayer;
- (BOOL)selectItem:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setSelectionIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (BOOL)_shouldSelectIndex:(long long)a0;
- (BOOL)displaysToolTips;
- (void)scaleCellSizeByFactor:(double)a0;
- (void)setDisplaysToolTips:(BOOL)a0;
- (void)setShouldDrawOverlays:(BOOL)a0;
- (BOOL)shouldDrawOverlays;

@end
