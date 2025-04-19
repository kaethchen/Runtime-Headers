@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject <CSSystemDaemonStateMonitorDelegate, CSAudioSessionInfoProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue;
@property (retain, nonatomic) NSHashTable *observers;
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
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonRestartFromCrash:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonCrash:(id)a0;
- (void)_startMonitoring;
- (unsigned int)audioSessionIdForDeviceId:(id)a0;

@end
