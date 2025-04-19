@interface FI_TDragAndDrop : NSObject

+ (void)endDrop;
+ (unsigned long long)beginDropWithDraggingInfo:(id)a0;
+ (void *)currentDropOperation;
+ (BOOL)isDragOverMenuBar:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)isDropInProgress;
+ (unsigned long long)updateDropOnNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 withDraggingInfo:(id)a1 actionsAllowed:(unsigned int)a2 showDisallowedCursor:(BOOL)a3;
+ (unsigned long long)updateDropOnTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 altTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 withDraggingInfo:(id)a2 outDropTargetAcceptsDrop:(BOOL *)a3;

@end
