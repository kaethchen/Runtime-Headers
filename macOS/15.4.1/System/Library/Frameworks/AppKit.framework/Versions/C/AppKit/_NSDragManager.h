@class NSDate;

@interface _NSDragManager : NSObject {
    NSDate *_autoscrollDate;
}

+ (double)_autoscrollDelay;
+ (BOOL)cancelDrag;
+ (void)hideDragWindow;
+ (BOOL)isDragging;
+ (id)sharedDragManager;
+ (void)showDragWindow;

- (id)_autoscrollDate;
- (void)_cancelAllFilePromiseDragsForPasteboard:(id)a0;
- (void)_dragSession:(id)a0 completed:(int)a1;
- (id)_dropDestinationForDragRef:(unsigned long long)a0;
- (void)_enumerateDraggingItemsForDrag:(unsigned long long)a0 pasteboard:(id)a1 class:(Class)a2 view:(id)a3 isSource:(BOOL)a4 usingBlock:(id /* block */)a5;
- (void)_enumerateDraggingItemsForDrag:(unsigned long long)a0 pasteboard:(id)a1 withOptions:(unsigned long long)a2 view:(id)a3 classes:(id)a4 searchOptions:(id)a5 isSource:(BOOL)a6 usingBlock:(id /* block */)a7;
- (void)_registerDragSession:(id)a0;
- (void)_registerFilePromiseCompletionTargets:(id)a0 forPasteboard:(id)a1;
- (void)_resetAutoscrollTimeDelta;
- (void)_setAutoscrollDate:(id)a0;
- (void)_unregisterDragSession:(id)a0;
- (id)beginDraggingSessionWithItems:(id)a0 fromWindow:(id)a1 withClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 event:(id)a3 source:(id)a4;
- (void)dragImage:(id)a0 fromWindow:(id)a1 at:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGSize { double x0; double x1; })a3 event:(id)a4 pasteboard:(id)a5 source:(id)a6 slideBack:(BOOL)a7 asynchronous:(BOOL)a8;
- (id)draggingSessionWithSequenceNumber:(long long)a0;
- (int)registerDragTypes:(id)a0 forWindow:(id)a1;
- (void)registerForCompletionOfDrag:(unsigned long long)a0;
- (void)registerWindow:(id)a0 foriOSMacContext:(unsigned int)a1;
- (void)slideImage:(id)a0 from:(struct CGPoint { double x0; double x1; })a1 to:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)switchWindow:(id)a0 dragRegistrationToRemoteContext:(unsigned int)a1;
- (BOOL)unregisterDragTypesForWindow:(id)a0;
- (void)unregisterWindow:(id)a0 foriOSMacContext:(unsigned int)a1;

@end
