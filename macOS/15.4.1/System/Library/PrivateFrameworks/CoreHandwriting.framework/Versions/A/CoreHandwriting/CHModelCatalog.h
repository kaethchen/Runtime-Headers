@interface CHModelCatalog : NSObject {
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)assetDeliveryReady;
- (id)getModelURL:(long long)a0;
- (id)getModelURL:(long long)a0 variant:(long long)a1;
- (id)getModelVersion:(long long)a0;
- (id)getModelVersion:(long long)a0 variant:(long long)a1;

@end
