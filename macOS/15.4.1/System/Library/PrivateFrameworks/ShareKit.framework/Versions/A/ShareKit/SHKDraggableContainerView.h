@protocol SHKClientWindowSyncDelegate;

@interface SHKDraggableContainerView : NSView

@property (weak) id<SHKClientWindowSyncDelegate> delegate;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;

@end
