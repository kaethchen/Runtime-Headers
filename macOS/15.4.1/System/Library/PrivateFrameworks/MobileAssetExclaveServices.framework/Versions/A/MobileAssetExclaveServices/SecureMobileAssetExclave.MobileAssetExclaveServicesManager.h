@interface SecureMobileAssetExclave.MobileAssetExclaveServicesManager : NSObject <MAExclaveManifestStorageServiceProtocol> {
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ tbClient;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkManifestForFSTag:(unsigned int)a0 staged:(BOOL)a1 manifest:(id)a2 infoPlist:(id)a3 catalog:(id)a4 isValid:(BOOL *)a5 error:(id *)a6;
- (BOOL)commitStagedManifestForFSTags:(id)a0 error:(id *)a1;
- (id)initWithConclave:(BOOL)a0;
- (BOOL)invalidateManifestForFSTag:(unsigned int)a0 error:(id *)a1;
- (id)proposeNonce:(id *)a0;
- (BOOL)stageManifest:(id)a0 infoPlist:(id)a1 catalog:(id)a2 error:(id *)a3;
- (BOOL)storeManifest:(id)a0 infoPlist:(id)a1 catalog:(id)a2 error:(id *)a3;

@end
