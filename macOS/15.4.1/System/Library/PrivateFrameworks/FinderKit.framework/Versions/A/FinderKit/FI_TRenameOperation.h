@interface FI_TRenameOperation : FI_TFileSystemOperation

- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)makeDelegate;
- (void)setUpOperationRecordForIndex:(unsigned long long)a0 withName:(const void *)a1 andExtensionState:(struct TriStateBool { unsigned char x0; })a2;

@end
