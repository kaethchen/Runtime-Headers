@protocol BDSServiceProtocol;

@interface BDSReadingHistoryServiceClient : NSObject <BDSBookWidgetReadingHistoryProviding>

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;

+ (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)a0;
+ (id)sharedServiceProxy;

- (id)init;
- (void).cxx_destruct;
- (void)handleSyncFileChangeWithSyncVersionInfo:(id)a0 updateInfo:(id)a1 completion:(id /* block */)a2;

@end
