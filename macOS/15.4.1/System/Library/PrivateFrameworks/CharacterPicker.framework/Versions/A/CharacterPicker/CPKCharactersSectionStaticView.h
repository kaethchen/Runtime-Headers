@class NSString;

@interface CPKCharactersSectionStaticView : CPKCharactersSectionView <NSDraggingSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseExited:(id)a0;
- (long long)_columnCount;
- (BOOL)isInEmojiPicker;
- (id)_axChildrenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_clearDropTargetIndicator;
- (id)_dragImageForCurrentSelection;
- (void)_drawCells:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawingRectAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dropTargetFrame;
- (long long)_fillCellDrawingInfo:(id)a0;
- (id)_findNewFontsForCells:(id)a0 baseFont:(id)a1 fallbackType:(long long)a2;
- (long long)_rowCount;
- (void)_startFontFallbackTask:(id)a0;
- (BOOL)_visibleFirstIndex:(long long *)a0 lastIndex:(long long *)a1;
- (struct CGSize { double x0; double x1; })defaultCellBounds;
- (id)firstAXElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectAtIndex:(long long)a0 withDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForSkinToneSelectorAtIndex:(unsigned long long)a0;
- (void)highlightIndex:(long long)a0 byMouse:(BOOL)a1;
- (double)horizontalSpaceBetweenItems;
- (BOOL)index:(long long *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateTooltips;

@end
