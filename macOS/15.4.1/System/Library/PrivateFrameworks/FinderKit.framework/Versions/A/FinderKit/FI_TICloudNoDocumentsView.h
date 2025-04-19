@class NSView;

@interface FI_TICloudNoDocumentsView : FI_TUpdateLayerView {
    NSView *_dropTargetView;
}

@property (retain, nonatomic) NSView *dropTargetView;

- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (BOOL)wantsPeriodicDraggingUpdates;

@end
