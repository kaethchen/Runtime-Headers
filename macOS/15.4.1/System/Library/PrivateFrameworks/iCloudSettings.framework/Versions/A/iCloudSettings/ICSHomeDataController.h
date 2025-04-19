@class NSString, NSError, ICSHomeDataModel;

@interface ICSHomeDataController : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ networkRequest;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)cachediCloudHomeDataModel;
- (void)fetchCloudStorage:(BOOL)a0 completion:(void (^)(NSString *))a1;
- (void)fetchCloudStorageInfo:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchiCloudHomeDataModelAllowingCache:(BOOL)a0 completion:(void (^)(ICSHomeDataModel *, NSError *))a1;
- (id)initWithAccount:(id)a0 launchedFromRootLevel:(BOOL)a1;
- (void)reportStatefulHeaderImpressionWithUrl:(id)a0 payload:(id)a1;

@end
