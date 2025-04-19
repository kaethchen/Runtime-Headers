@class SHClusterSQLiteDataStore;
@protocol SHDataFetcher;

@interface SHClusterLoader : NSObject

@property (readonly) SHClusterSQLiteDataStore *dataStore;
@property (readonly) id<SHDataFetcher> dataFetcher;

+ (void)loadDataForRequest:(id)a0 storefront:(id)a1 configuration:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithDataFetcher:(id)a0 dataStore:(id)a1;
- (void)loadFromURL:(id)a0 type:(long long)a1 storefront:(id)a2 reuseExistingData:(BOOL)a3 completion:(id /* block */)a4;

@end
