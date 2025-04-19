@interface FI_TRenameOperationDelegate : FI_TFileSystemOperationDelegate {
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _newName;
    struct TriStateBool { unsigned char fState; } _extensionHiddenState;
    struct optional_bool { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _changeExtensionResponse;
    BOOL _isBulkRename;
    BOOL _forceKeepExtension;
}

+ (BOOL)isReservedName:(const void *)a0 syntaxHint:(const struct NodeNameSyntaxHint { unsigned int x0; unsigned int x1; unsigned char x2; } *)a1;
+ (int)validateNewName:(const void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 isDisplayName:(BOOL)a2 allowInteraction:(BOOL)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)newName;
- (int)asyncNodeOperation:(id)a0 errorNotification:(const void *)a1 error:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a2 reply:(struct NodeEventReply { struct DSSemaphore *x0; unsigned int x1; int x2; } *)a3;
- (int)asyncNodeOperation:(id)a0 subOperationCompleted:(unsigned int)a1 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (int)configureNewName:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 isDisplayName:(BOOL)a2 allowInteraction:(BOOL)a3;
- (const struct TriStateBool { unsigned char x0; } *)extensionHiddenState;
- (void)setForceKeepExtension:(BOOL)a0;
- (void)setIsBulkRename:(BOOL)a0;

@end
