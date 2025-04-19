@class NSString, HMDRemoteMessageTransport, HMDModernTransportMessageContextManager, NSObject, NSMutableOrderedSet;
@protocol HMDTimerProvider, HMDDeviceResidencyProvider, HMDFeaturesDataSource, OS_dispatch_queue, HMDDateProvider;

@interface HMDModernRemoteMessageTransport : HMDRemoteMessageTransport <HMDRemoteMessageTransportReachabilityDelegate, HMFMessageTransportDelegate>

@property (class, readonly, copy, nonatomic) NSString *requestStartTimeHeaderKey;
@property (class, readonly, copy, nonatomic) NSString *timeToLiveHeaderKey;

@property (getter=isStarted) BOOL started;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDRemoteMessageTransport *rapportTransport;
@property (readonly, nonatomic) HMDRemoteMessageTransport *idsTransport;
@property (readonly, nonatomic) HMDModernTransportMessageContextManager *contextManager;
@property (readonly, nonatomic) id<HMDDateProvider> systemDateProvider;
@property (readonly, nonatomic) id<HMDDateProvider> idsDateProvider;
@property (readonly, nonatomic) id<HMDTimerProvider> timerProvider;
@property (readonly, nonatomic) NSMutableOrderedSet *messageIDDedupeBuffer;
@property (nonatomic, getter=isRapportLinkSlow) BOOL rapportLinkSlow;
@property (readonly, nonatomic) BOOL isWatch;
@property (nonatomic) BOOL isHMModernMessagingInstance;
@property (nonatomic) BOOL isHMModernMessagingEnergyInstance;
@property (weak) id<HMDDeviceResidencyProvider> residencyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)start;
- (long long)qualityOfService;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isSecure;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (BOOL)canSendMessage:(id)a0;
- (id)startHMMMEnergy;
- (void)configureWithHomeMembershipVerifier:(id)a0;
- (void)configureWithRemoteMessageListener:(id)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 rapportTransport:(id)a1 idsTransport:(id)a2;
- (id)initWithAccountRegistry:(id)a0 rapportTransport:(id)a1 idsTransport:(id)a2 contextManager:(id)a3 systemDateProvider:(id)a4 idsDateProvider:(id)a5 timerProvider:(id)a6 isWatch:(BOOL)a7 featuresDataSource:(id)a8;
- (id)startHMMM;
- (void)transport:(id)a0 idsIdentifier:(id)a1 didAppearReachable:(BOOL)a2;

@end
