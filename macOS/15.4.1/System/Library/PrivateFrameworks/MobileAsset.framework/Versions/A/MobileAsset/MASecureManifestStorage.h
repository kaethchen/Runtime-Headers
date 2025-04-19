@interface MASecureManifestStorage : NSObject

- (id)_errorWithCode:(unsigned long long)a0 underlyingError:(id)a1;
- (id)_manifestPathForAssetType:(id)a0 specifier:(id)a1 stage:(BOOL)a2;
- (id)_serviceConnectionWithError:(id *)a0;
- (BOOL)_storeManifest:(id)a0 infoPlist:(id)a1 stage:(BOOL)a2 error:(id *)a3;
- (BOOL)commitStagedManifestsForSelectors:(id)a0 error:(id *)a1;
- (BOOL)invalidateManifestForAssetType:(id)a0 specifier:(id)a1 error:(id *)a2;
- (id)manifestPathForAssetType:(id)a0 specifier:(id)a1;
- (BOOL)stageManifest:(id)a0 infoPlist:(id)a1 error:(id *)a2;
- (id)stagedManifestPathForAssetType:(id)a0 specifier:(id)a1;
- (BOOL)storeManifest:(id)a0 infoPlist:(id)a1 error:(id *)a2;

@end
