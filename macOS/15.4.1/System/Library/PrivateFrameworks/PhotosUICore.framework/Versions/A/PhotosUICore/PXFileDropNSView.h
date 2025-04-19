@protocol NSDraggingDestination;

@interface PXFileDropNSView : NSView {
    unsigned long long _draggingEnteredOperation;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (weak, nonatomic) id<NSDraggingDestination> draggingDestinationDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (BOOL)wantsPeriodicDraggingUpdates;

@end
