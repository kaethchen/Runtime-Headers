@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAPModeSuspendPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate, CSIntuitiveConvAudioCaptureMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_recordStateQueue;
}

@property (nonatomic) BOOL isAssistantClientConsideredAsRecord;
@property (retain, nonatomic) NSString *pendingRecordingStopUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isJarvisRouted;
- (BOOL)_isSpeechDetectionDevicePresent;
- (void)_addConditionsForIOSAOP;
- (void)_addConditionsForIOSBargeIn;
- (void)_addVoiceTriggerAPModeSuspendConditions;
- (void)_handleClientRecordStateDidChange:(BOOL)a0 eventUUID:(id)a1;
- (BOOL)_isAudioRouteIneligibleForAP;
- (BOOL)_isHearstRoutedAndWithNoPhoneCall;
- (BOOL)_isInPhoneCallStateWithHSPhoneCallCapableRoute;
- (void)_subscribeEventMonitors;
- (void)intuitiveConvAudioCaptureMonitor:(id)a0 didStartAudioCaptureSuccessfully:(BOOL)a1 option:(id)a2 eventUUID:(id)a3;
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)a0 stopStreamOption:(id)a1 eventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didChangedRecordState:(BOOL)a1 withEventUUID:(id)a2 withContext:(id)a3;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;

@end
