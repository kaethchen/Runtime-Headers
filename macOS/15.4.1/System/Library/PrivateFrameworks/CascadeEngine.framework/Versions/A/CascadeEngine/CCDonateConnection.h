@class NSObject, CCDifferentialUpdater, NSXPCConnection, CCDonateRequest, CCDonateRequestManager, CCSet;
@protocol OS_dispatch_queue;

@interface CCDonateConnection : NSObject <CCDonateService>

@property (retain, nonatomic) CCDonateRequestManager *requestManager;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) CCDonateRequest *request;
@property (copy, nonatomic) id /* block */ openStreamCompletion;
@property (retain, nonatomic) CCDifferentialUpdater *updater;
@property (retain, nonatomic) CCSet *set;
@property (nonatomic) void /* function */ *attributionFunction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL isXPC;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)timeout;
- (BOOL)isAlive;
- (void)rejectConnection;
- (void)_cleanupDonation:(long long)a0;
- (void)_cleanupRequestState;
- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(id)a0 metaContents:(id)a1 completion:(id /* block */)a2;
- (oneway void)beginSetDonationWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 sourceVersion:(unsigned long long)a2 sourceValidity:(id)a3 options:(unsigned long long)a4 completion:(id /* block */)a5;
- (oneway void)endSetDonationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRequestManager:(id)a0 xpcConnection:(id)a1;
- (void)mergeRemoteDelta:(id)a0 peerDeviceSite:(id)a1 relayedDeviceSites:(id)a2 completion:(id /* block */)a3;
- (void)removeSourceItemIdentifier:(id)a0 completion:(id /* block */)a1;

@end
