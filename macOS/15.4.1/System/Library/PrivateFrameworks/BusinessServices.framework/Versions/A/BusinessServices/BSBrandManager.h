@class BSBrandManagerObjcShim;

@interface BSBrandManager : NSObject

@property (readonly, retain, nonatomic) BSBrandManagerObjcShim *shim;

- (void).cxx_destruct;
- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void)brandWithURI:(id)a0 usingSim:(id)a1 completion:(id /* block */)a2;
- (id)initWithCachingEnabled:(BOOL)a0 cacheURL:(id)a1 brandDataSourceOpaqueWrapper:(id)a2;
- (id)_initWithBrandType:(long long)a0 cachingEnabled:(BOOL)a1;
- (void)clearUnusedCachedLogos:(id /* block */)a0;
- (void)fetchAssetWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)initWithBrandType:(long long)a0 cachingEnabled:(BOOL)a1;
- (id)initWithBrandType:(long long)a0 cachingEnabled:(BOOL)a1 brandDataSourceOpaqueWrapper:(id)a2;

@end
