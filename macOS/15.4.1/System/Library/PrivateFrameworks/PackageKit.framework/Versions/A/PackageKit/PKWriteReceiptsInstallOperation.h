@class PKPackageSpecifier;

@interface PKWriteReceiptsInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _inSandbox;
}

- (int)installState;
- (void)main;
- (id)_newMasterBOMIfEnabled;
- (BOOL)_saveReceiptForPackageSpecifier:(id)a0 withMasterBOM:(id)a1 error:(id *)a2;
- (BOOL)_shouldWriteReceiptForPackageSpecifier:(id)a0;
- (id)currentPackageSpecifier;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
