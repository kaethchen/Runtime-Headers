@class NSMenu, NSString, NSArray, NSURL, NSAttributedString, NSColor, NSPathControlItem, NSPathControlAuxiliary;
@protocol NSPathControlDelegate;

@interface NSPathControl : NSControl {
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    id _delegate;
    NSPathControlAuxiliary *_pathAux;
}

@property (getter=isEditable) BOOL editable;
@property (copy) NSArray *allowedTypes;
@property (copy) NSString *placeholderString;
@property (copy) NSAttributedString *placeholderAttributedString;
@property (copy) NSURL *URL;
@property SEL doubleAction;
@property long long pathStyle;
@property (readonly) NSPathControlItem *clickedPathItem;
@property (copy) NSArray *pathItems;
@property (copy) NSColor *backgroundColor;
@property (weak) id<NSPathControlDelegate> delegate;
@property (retain) NSMenu *menu;

+ (Class)cellClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingExited:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_cleanUpTransientDragState;
- (void)_commonInit;
- (id)_dragImageForCell:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)_dragShouldBeginFromMouseDown:(id)a0;
- (id)_draggedURL:(id)a0;
- (void)_ensureAUX;
- (BOOL)_hasRectangularFocusRingAroundFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentBounds;
- (BOOL)_performDragOfCell:(id)a0 fromMouseDown:(id)a1;
- (id)_preferredAppearance;
- (void)_removeTrackingRects;
- (void)_setNeedsDisplay;
- (void)_toolTipManagerWillRecomputeToolTipsByRemoving:(BOOL)a0 adding:(BOOL)a1;
- (void)_updateDropTargetForDraggingInfo:(id)a0;
- (void)_updateDropTargetToCell:(id)a0;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (BOOL)becomeFirstResponder;
- (id)clickedPathComponentCell;
- (void)concludeDragOperation:(id)a0;
- (void)draggedImage:(id)a0 beganAt:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (id)ns_widgetType;
- (void)pathCell:(id)a0 willDisplayOpenPanel:(id)a1;
- (void)pathCell:(id)a0 willPopUpMenu:(id)a1;
- (id)pathComponentCells;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)resignFirstResponder;
- (void)setCell:(id)a0;
- (void)setDraggingSourceOperationMask:(unsigned long long)a0 forLocal:(BOOL)a1;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPathComponentCells:(id)a0;
- (void)updateTrackingAreas;

@end
