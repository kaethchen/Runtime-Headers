@class PKPackageSpecifier;

@interface PKWriteMASReceiptInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
}

- (int)installState;
- (void)main;
- (BOOL)_addAppStoreReceipt:(id)a0 withAppStoreMetadata:(id)a1 forPackageSpecifier:(id)a2 error:(id *)a3;
- (id)_receiptPathInBundle:(id)a0;

@end
