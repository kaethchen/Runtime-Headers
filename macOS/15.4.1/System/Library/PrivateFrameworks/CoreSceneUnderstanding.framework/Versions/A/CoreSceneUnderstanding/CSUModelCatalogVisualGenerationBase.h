@interface CSUModelCatalogVisualGenerationBase : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ assetVersionNumber;
}

- (id)init;
- (void).cxx_destruct;
- (id)getAssetVersion;
- (id)fetchWithAssetLock:(id)a0 error:(id *)a1;

@end
