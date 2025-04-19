@class HMDSecureRemoteMessageFilter, HMDMessageFilterChain, HMDHomeManager, NSMutableDictionary, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSCache;

@interface HMDMessageDispatcher : HMFMessageDispatcher

@property (class, readonly) HMDMessageDispatcher *defaultDispatcher;

@property (retain, nonatomic) NSMutableDictionary *remoteGateways;
@property (readonly, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter;
@property (retain, nonatomic) NSCache *homeForTarget;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) HMDXPCMessageTransport *XPCTransport;
@property (readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport;
@property (readonly, nonatomic) HMDMessageFilterChain *messageFilterChain;

+ (id)logCategory;
+ (id)destinationWithTarget:(id)a0 userID:(id)a1 destination:(id)a2 multicast:(BOOL)a3;
+ (id)destinationWithTarget:(id)a0 userID:(id)a1 destination:(id)a2 multicast:(BOOL)a3 accountRegistry:(id)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)dispatchMessage:(id)a0;
- (id)messageRegistrationForReceiver:(id)a0 name:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (id)sendMessageExpectingResponse:(id)a0;
- (void)_setRemoteAccessDevice:(id)a0 forHome:(id)a1 sendNotification:(BOOL)a2;
- (void)configureHomeManager:(id)a0;
- (void)electDeviceForHH1User:(id)a0 destination:(id)a1 deviceCapabilities:(id)a2 responseTimeout:(double)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (void)handleSecureSessionError:(id)a0;
- (id)homeForMessageTarget:(id)a0;
- (id)initWithXPCTransport:(id)a0 secureRemoteTransport:(id)a1 messageFilterChain:(id)a2;
- (id)remoteAccessDeviceForHome:(id)a0;
- (id)residentCommunicationHandlerForHome:(id)a0;
- (void)sendSecureMessage:(id)a0 target:(id)a1 userID:(id)a2 destination:(id)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (void)setCompanionDevice:(id)a0 forHome:(id)a1;
- (void)setRemoteAccessDevice:(id)a0 forHome:(id)a1;

@end
