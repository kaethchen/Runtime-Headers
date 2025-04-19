@class NSMutableDictionary, NSMutableSet;

@interface NSCoreDragManager : _NSDragManager {
    NSMutableDictionary *_dragSessions;
    NSMutableDictionary *_filePromiseTargets;
    NSMutableSet *_cancelFilePromiseTargets;
    struct OpaqueCoreDragHandler { } *applicationHandlerRef;
}

+ (void)doCommandBySelector:(SEL)a0;
+ (void)insertText:(id)a0;

- (void)dealloc;
- (void)_beginDragSession:(id)a0 withEvent:(id)a1 asynchronous:(BOOL)a2;
- (void)_cancelAllFilePromiseDragsForPasteboard:(id)a0;
- (void)_dragSession:(id)a0 completed:(int)a1;
- (void)_dragUntilMouseUp:(id)a0 initialEvent:(id)a1 async:(BOOL)a2;
- (void)_endDragSession:(id)a0;
- (void)_notifyFilePromiseTargetsWithDraggingInfo:(id)a0;
- (void)_registerDragSession:(id)a0;
- (void)_registerFilePromiseCompletionTargets:(id)a0 forPasteboard:(id)a1;
- (void)_tryCatchDragUntilMouseUp:(id)a0 initialEvent:(id)a1 async:(BOOL)a2;
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
