@class NSUUID, NSString, NSHashTable, CSXPCClient, NSObject;
@protocol OS_dispatch_queue, CSAudioSessionInfoProviding;

@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSXPCClientDelegate, CSCoreSpeechDaemonStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<CSAudioSessionInfoProviding> sessionInfoProvider;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property BOOL shouldKeepConnection;
@property (retain, nonatomic) NSUUID *endpointId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)_stopMonitoring;
- (void)registerObserver:(id)a0;
- (void)CSXPCClient:(id)a0 didDisconnect:(BOOL)a1;
- (BOOL)_createXPCClientConnectionIfNeeded;
- (unsigned int)_getAudioSessionID;
- (void)_startMonitoring;
- (void)_teardownXPCClientIfNeeded;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)a1;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)a1;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)a1;
- (void)audioSessionInfoProvider:(id)a0 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)a1;
- (void)coreSpeechDaemonStateMonitor:(id)a0 didReceiveStateChanged:(unsigned long long)a1;
- (unsigned int)getAudioSessionID;
- (void)getAudioSessionIDWithCompletion:(id /* block */)a0;
- (id)initWithEndpointId:(id)a0;

@end
