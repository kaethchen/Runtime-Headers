@interface FI_TNewFolderOperationDelegate : FI_TFileSystemOperationDelegate

@property struct function<bool (FI_TNewFolderOperation *, const TFENode &)> { struct __value_func<bool (FI_TNewFolderOperation *, const TFENode &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } processNewFolder;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)asyncNodeOperation:(id)a0 subOperationCompleted:(unsigned int)a1 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (int)asyncNodeOperation:(id)a0 uniqueNameProc:(id)a1 seedFileSuffix:(id)a2 reservedName:(id)a3;

@end
