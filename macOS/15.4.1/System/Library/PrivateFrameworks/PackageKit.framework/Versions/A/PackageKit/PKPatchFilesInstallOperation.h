@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _useAFSCByDefault;
}

- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;

@end
