@class PKInstallCommitManager;

@interface PKPrepareForCommitInstallOperation : PKInstallOperation {
    PKInstallCommitManager *_manager;
}

- (void)dealloc;
- (int)installState;
- (void)main;

@end
