@class FI_TTableViewShrinkToFitController;
@protocol TSidebarViewDelegate;

@interface FI_TSidebarView : NSOutlineView {
    BOOL _handlingCmdMouseDown;
    FI_TTableViewShrinkToFitController *_stfController;
}

@property id<TSidebarViewDelegate> delegate;
@property (nonatomic) BOOL shouldHandleCommandClickOnMouseUp;
@property (nonatomic) BOOL shouldCancelPendingInvoke;
@property (nonatomic) BOOL keyOnMouseDown;
@property (nonatomic) BOOL handlingItemClick;
@property (nonatomic) BOOL suppressSelectionClearForScreenCapture;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)draggingExited:(id)a0;
- (BOOL)_wantsUserCancelledOperationForDraggingSession:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityValue;
- (id)controller;
- (void)deselectRow:(long long)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeViewWithIdentifier:(id)a0 owner:(id)a1;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (void)setRowSizeStyle:(long long)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRect;
- (void)rowHit:(long long)a0;
- (void)_drawClearForSelectionArea;
- (void)cancelPendingInvoke;
- (void)mouseDraggedWorkaround;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForRow:(long long)a0;
- (id)stfEditorController;

@end
