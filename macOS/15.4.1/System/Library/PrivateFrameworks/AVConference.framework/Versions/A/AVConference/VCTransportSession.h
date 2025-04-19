@class NSMutableArray, NSString, NSDictionary, TimingCollection, VCConnectionManager, NSObject;
@protocol VCConnectionProtocol, OS_dispatch_queue;

@interface VCTransportSession : NSObject {
    BOOL _isCallActive;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_localFrameworkVersion;
    NSString *_remoteFrameworkVersion;
    struct opaqueRTCReporting { } *_reportingAgent;
    NSMutableArray *_streams;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    NSDictionary *_qrExperiments;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _nwMonitorLock;
    void /* function */ *_notificationHandler;
    void /* function */ *_packetEventHandler;
    void *_handlerContext;
    BOOL _didAddNetworkAssertion;
}

@property (readonly, nonatomic) int detailedErrorCode;
@property (readonly, nonatomic) BOOL isHandoverSupported;
@property (readonly, nonatomic) BOOL isRemoteOSPreLion;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL useCompressedConnectionData;
@property (readonly, nonatomic) unsigned int connectionSetupRTTEstimate;
@property (retain, nonatomic) NSObject *connectionSetupPiggybackBlob;
@property (retain, nonatomic) TimingCollection *perfTimings;
@property (readonly, nonatomic) VCConnectionManager *connectionManager;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) unsigned int basebandNotificationRegistrationToken;
@property (nonatomic, setter=setCallActive:) BOOL isCallActive;
@property (retain, nonatomic) id<VCConnectionProtocol> registeredConnection;
@property (nonatomic) BOOL shouldSetupNWMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *nwMonitorEventHandlerQueue;
@property (readonly, nonatomic) struct tagVCNWConnectionMonitor { } *nwMonitor;
@property (readonly) int networkInterfaceType;
@property (readonly) unsigned int networkMTU;
@property (readonly) BOOL isIPv6;
@property (nonatomic) BOOL shouldIgnoreConnectionRefusedError;

+ (unsigned int)trafficClassForStreamType:(unsigned int)a0;
+ (int)vtpPacketTypeForStreamType:(unsigned int)a0;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)callEventHandlerWithEvent:(unsigned int)a0 info:(id)a1;
- (void)reportNetworkConditionsDegraded;
- (struct tagVCNWConnectionMonitor { } *)createNWMonitor;
- (void)addNetworkAssertionWithInterfaceType:(int)a0;
- (int)createTransportStream:(struct OpaqueVCTransportStream **)a0 withType:(unsigned int)a1 options:(id)a2;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)deregisterNotificationForTransportStream:(struct OpaqueVCTransportStream { } *)a0;
- (void)destroyNWMonitor;
- (BOOL)getConnectionSetupData:(id *)a0 withOptions:(id)a1 error:(id *)a2;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)a0;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)a0;
- (void)handleTransportStreamDeactivated:(struct OpaqueVCTransportStream { } *)a0;
- (id)initWithNotificationQueue:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (id)initWithNotificationQueue:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1 notificationHandler:(void /* function */ *)a2 eventHandler:(void /* function */ *)a3 handlerQueue:(id)a4 context:(void *)a5;
- (void)removeNetworkAssertion;
- (void)resetActiveConnection;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)a0 remoteFrameworkVersion:(id)a1;
- (void)setOneToOneModeEnabled:(BOOL)a0 isInitiator:(BOOL)a1;
- (void)setupNWMonitor;
- (void)setupNWMonitorNotificationHandler;
- (void)setupNWMonitorPacketEventHandler;

@end
