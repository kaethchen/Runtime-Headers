@interface FI_TNewFolderOperation : FI_TRenameOperation {
    BOOL _isRenaming;
}

- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureOperationRecord:(void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (int)createNewFolder:(const void *)a0 properties:(const void *)a1;
- (id)makeDelegate;
- (void)reconfigureToRenameNodes:(const void *)a0;

@end
