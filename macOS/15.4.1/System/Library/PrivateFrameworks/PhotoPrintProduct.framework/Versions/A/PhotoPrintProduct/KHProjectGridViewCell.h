@class KHFrame, NSMutableDictionary, UXView, NSString, NSMutableArray, UXLabel;

@interface KHProjectGridViewCell : KHGridViewCell <NSDraggingSource, NSDraggingDestination, NSPasteboardItemDataProvider> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialPhotoDraggingFrame;
}

@property (retain, nonatomic) UXLabel *pageNumberLabel;
@property (retain, nonatomic) UXView *draggingSelectionView;
@property (retain, nonatomic) NSMutableDictionary *photoFramesByRectValue;
@property (retain, nonatomic) NSMutableArray *dragRectsInReverseDrawingOrder;
@property (retain, nonatomic) KHFrame *sourceFrame;
@property (retain, nonatomic) KHFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (void)draggingExited:(id)a0;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityPerformPress;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_calculateDragFrameRectsForLayout:(id)a0;
- (id)_frameRectValueAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleLongClickGesture:(id)a0;
- (void)_pageDragHandleClicked:(id)a0;
- (void)_updateTitleTextForLayout:(id)a0;
- (void)didHideHoverState;
- (void)didShowHoverState;
- (id)frameAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)getLayoutInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hoverStateTrackingRect;
- (void)setLayoutObject:(id)a0;
- (void)showLayoutInspector:(id)a0;

@end
