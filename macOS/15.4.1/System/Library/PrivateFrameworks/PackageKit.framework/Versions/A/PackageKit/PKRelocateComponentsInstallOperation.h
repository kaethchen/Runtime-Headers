@class PKPackageSpecifier, NSString;

@interface PKRelocateComponentsInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    NSString *_currentOldBundlePath;
    NSString *_currentNewBundlePath;
}

- (int)installState;
- (void)main;
- (BOOL)_moveRelocatedComponentsForPackageSpecifier:(id)a0 error:(id *)a1;
- (id)currentPackageSpecifier;
- (id)messageTracerComment;
- (id)messageTracerDomain;
- (id)messageTracerTernarySignature;

@end
