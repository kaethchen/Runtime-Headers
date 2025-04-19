@class DMTNetworkCredential, NSObject, CWNetwork;
@protocol OS_dispatch_queue;

@interface DMTJoinWiFiNetworkOperation : CATOperation

@property (readonly, nonatomic) CWNetwork *network;
@property (readonly, nonatomic) DMTNetworkCredential *credential;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *joinQueue;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithNetwork:(id)a0 credential:(id)a1;
- (void)joinEnterpriseNetworkWithInterface:(id)a0;
- (void)joinNetwork;
- (void)joinPersonalNetworkWithInterface:(id)a0;

@end
