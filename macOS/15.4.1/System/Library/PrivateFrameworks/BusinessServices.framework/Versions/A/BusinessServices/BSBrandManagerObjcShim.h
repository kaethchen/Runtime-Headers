@interface BSBrandManagerObjcShim : NSObject {
    void /* unknown type, empty encoding */ brandManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void)brandWithURI:(id)a0 usingSim:(id)a1 completion:(id /* block */)a2;
- (void)clearUnusedCachedLogos:(id /* block */)a0;
- (void)fetchAssetWithURL:(id)a0 assetType:(long long)a1 completion:(id /* block */)a2;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceWrapper:(id)a2;

@end
