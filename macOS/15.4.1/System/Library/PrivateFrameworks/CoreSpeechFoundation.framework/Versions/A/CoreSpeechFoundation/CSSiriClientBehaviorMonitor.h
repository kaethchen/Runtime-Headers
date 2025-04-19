@class NSString, NSHashTable, CSAudioRecordContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isStreaming;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;
@property (retain, nonatomic) NSString *recordRoute;
@property (retain, nonatomic) NSString *deviceId;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)notifyDidStartStreamWithContext:(id)a0 successfully:(BOOL)a1 option:(id)a2 withEventUUID:(id)a3;
- (void)notifyDidStopStream:(id)a0 withEventUUID:(id)a1;
- (void)notifyWillStartStreamWithContext:(id)a0 option:(id)a1 withEventUUID:(id)a2;
- (void)notifyWillStopStream:(id)a0 reason:(unsigned long long)a1 withEventUUID:(id)a2;
- (void)notifyActivateAudioSessionWithReason:(unsigned long long)a0;
- (void)notifyAudioDeviceInfoUpdated:(id)a0;
- (void)notifyFetchedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyPreparedSiriClientAudioStream:(id)a0 successfully:(BOOL)a1;
- (void)notifyReleaseAudioSession;

@end
