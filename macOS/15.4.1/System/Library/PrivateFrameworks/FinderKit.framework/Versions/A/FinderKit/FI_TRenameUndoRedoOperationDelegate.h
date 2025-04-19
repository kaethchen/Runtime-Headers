@interface FI_TRenameUndoRedoOperationDelegate : FI_TRenameOperationDelegate {
    struct unique_ptr<TRenameUndoRedoOperationHelper, std::default_delete<TRenameUndoRedoOperationHelper>> { struct __compressed_pair<TRenameUndoRedoOperationHelper *, std::default_delete<TRenameUndoRedoOperationHelper>> { struct TRenameUndoRedoOperationHelper *__value_; } __ptr_; } _actionHelper;
    BOOL _needToReselectNode;
    int _renameOpCount;
    BOOL _isUndo;
    struct TriStateBool { unsigned char fState; } _pendingIsUndo;
}

+ (id)makeDelegateWithRenameAction:(void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)asyncNodeOperation:(id)a0 subOperationCompleted:(unsigned int)a1 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (int)asyncNodeOperation:(id)a0 subOperationStarted:(unsigned int)a1;
- (int)configureNewName:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 isDisplayName:(BOOL)a2 allowInteraction:(BOOL)a3;
- (void)setIsUndo:(BOOL)a0;
- (void)setNeedToReselectNode:(BOOL)a0;

@end
