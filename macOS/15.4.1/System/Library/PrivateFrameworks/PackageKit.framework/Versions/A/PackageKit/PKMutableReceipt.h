@class NSData;

@interface PKMutableReceipt : PKReceipt {
    NSData *_bomData;
}

- (void)dealloc;
- (id)_BOM;
- (BOOL)_writeToDirectory:(id)a0 forSystemContent:(BOOL)a1 error:(id *)a2;
- (id)initWithPackageIdentifier:(id)a0 packageVersion:(id)a1 BOMData:(id)a2;
- (id)initWithPackageIdentifier:(id)a0 packageVersion:(id)a1 BOMData:(id)a2 additionalInfo:(id)a3;
- (BOOL)writeToDestination:(id)a0 forSystemContent:(BOOL)a1 error:(id *)a2;
- (BOOL)writeToDestination:(id)a0 forSystemContent:(BOOL)a1 systemVolumeInstall:(BOOL)a2 error:(id *)a3;
- (BOOL)writeToDirectory:(id)a0 error:(id *)a1;
- (BOOL)writeToSandboxRoot:(id)a0 destination:(id)a1 forSystemContent:(BOOL)a2 error:(id *)a3;
- (BOOL)writeToSandboxRoot:(id)a0 destination:(id)a1 forSystemContent:(BOOL)a2 systemVolumeInstall:(BOOL)a3 error:(id *)a4;

@end
