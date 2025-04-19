@class ISStoreClient, Protocol;
@protocol ISUIService, ISAssetService, ISDownloadService, ISAccountService, ISTransactionService, ISServiceRemoteObject;

@interface ISServiceProxy : NSObject

@property (readonly, weak, nonatomic) id<ISServiceRemoteObject> exportedObject;
@property (readonly, nonatomic) Protocol *exportedProtocol;
@property (retain, nonatomic) ISStoreClient *storeClient;
@property (readonly, nonatomic) id<ISAccountService> accountService;
@property (readonly, nonatomic) id<ISDownloadService> downloadService;
@property (readonly, nonatomic) id<ISAssetService> assetService;
@property (readonly, nonatomic) id<ISTransactionService> transactionService;
@property (readonly, nonatomic) id<ISUIService> uiService;

+ (void)initialize;
+ (id)genericSharedProxy;

- (void).cxx_destruct;
- (void)connectionWasInterrupted;
- (id)initWithStoreClient:(id)a0;
- (void)assetServiceSynchronousBlock:(id /* block */)a0;
- (void)downloadServiceSynchronousBlock:(id /* block */)a0;
- (void)registerForInterrptionNotification;
- (void)transactionServiceSynchronousBlock:(id /* block */)a0;
- (void)accountServiceSynchronousBlock:(id /* block */)a0;
- (id)accountServiceWithErrorHandler:(id /* block */)a0;
- (id)assetServiceWithErrorHandler:(id /* block */)a0;
- (id)connectionWithServiceName:(id)a0 protocol:(id)a1 isMachService:(BOOL)a2;
- (id)downloadServiceWithErrorHandler:(id /* block */)a0;
- (id)objectProxyForServiceName:(id)a0 protocol:(id)a1 interfaceClassName:(id)a2 isMachService:(BOOL)a3 errorHandler:(id /* block */)a4;
- (void)performSynchronousBlock:(id /* block */)a0 withServiceName:(id)a1 protocol:(id)a2 isMachService:(BOOL)a3 interfaceClassName:(id)a4;
- (id)transactionServiceWithErrorHandler:(id /* block */)a0;
- (void)uiServiceSynchronousBlock:(id /* block */)a0;
- (id)uiServiceWithErrorHandler:(id /* block */)a0;

@end
