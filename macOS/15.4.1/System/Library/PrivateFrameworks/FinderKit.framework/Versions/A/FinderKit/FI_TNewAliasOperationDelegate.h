@interface FI_TNewAliasOperationDelegate : FI_TFileSystemOperationDelegate {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _aliases;
}

@property BOOL allowInteraction;
@property struct function<bool (FI_TNewAliasOperation *, TFENodeVector &&)> { struct __value_func<bool (FI_TNewAliasOperation *, TFENodeVector &&)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } processAliases;

+ (id)makeDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)asyncNodeOperation:(id)a0 errorNotification:(const void *)a1 error:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a2 reply:(struct NodeEventReply { struct DSSemaphore *x0; unsigned int x1; int x2; } *)a3;
- (int)asyncNodeOperation:(id)a0 subOperationCompleted:(unsigned int)a1 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (int)asyncNodeOperation:(id)a0 uniqueNameProc:(id)a1 seedFileSuffix:(id)a2 reservedName:(id)a3;

@end
