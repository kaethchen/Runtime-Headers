@class NSString;
@protocol QLPreviewDragDelegate;

@interface QLPreviewDragController : NSObject <NSDraggingSource>

@property (weak) id<QLPreviewDragDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)_getDefaultDragImageAndFrame:(id /* block */)a0;
- (void)_setupDragPasteboad:(id)a0;
- (void)_startLegacyDraggingWithEvent:(id)a0 beganOrFailedHandler:(id /* block */)a1;
- (void)startDraggingWithEvent:(id)a0 beganOrFailedHandler:(id /* block */)a1;

@end
