@class NSArray;

@interface DEDragReceiverView : NSView {
    id _dragDelegate;
    BOOL _dropOperationInProgress;
}

@property (retain) NSArray *registeredDragTypes;

- (void)dealloc;
- (void)draggingExited:(id)a0;
- (void)awakeFromNib;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performDragOperation:(id)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)setDragDelegate:(id)a0;
- (void)registerForDragTypes;

@end
