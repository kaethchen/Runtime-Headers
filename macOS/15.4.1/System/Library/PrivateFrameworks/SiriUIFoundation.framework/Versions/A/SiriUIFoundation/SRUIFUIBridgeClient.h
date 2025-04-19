@class SRUIFSiriSessionStateHandler, NSString, SUIBUIBridgeClient, _TtC16SiriUIFoundation24SRUIFLatencyStateManager, NSObject;
@protocol OS_dispatch_queue, SRUIFUIBridgeClientDelegate;

@interface SRUIFUIBridgeClient : NSObject <SUIBUIBridgeServiceDelegate> {
    BOOL _didDuckTTS;
    NSObject<OS_dispatch_queue> *_queue;
    _TtC16SiriUIFoundation24SRUIFLatencyStateManager *_latencyStateManager;
}

@property (retain, getter=_stateHandler) SRUIFSiriSessionStateHandler *stateHandler;
@property (retain, getter=_client) SUIBUIBridgeClient *client;
@property (nonatomic, setter=_setIsAttending:) BOOL isAttending;
@property (weak) id<SRUIFUIBridgeClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)uiBridgeServiceDetectedSpeechStart:(BOOL)a0;
- (oneway void)uiBridgeServiceDidStartAttending;
- (oneway void)uiBridgeServiceDidStopAttendingUnexpectedlyWithReason:(unsigned long long)a0;
- (oneway void)uiBridgeServiceReceivedShowAssetsDownloadPrompt;
- (oneway void)uiBridgeServiceReceivedSpeechMitigationResult:(unsigned long long)a0;
- (oneway void)uiBridgeServiceWillStartAttending;
- (id)initWithStateHandler:(id)a0 delegateQueue:(id)a1;
- (void)stopAttending;
- (id)initWithStateHandler:(id)a0;
- (oneway void)uiBridgeServiceDidReceiveTasks:(id)a0;
- (oneway void)uiBridgeServiceReceivedRequestProgress:(id)a0;
- (oneway void)uiBridgeServiceReceivedSiriResponse:(id)a0;
- (void)endForReason:(long long)a0;
- (void)idleAndQuietDidChange:(BOOL)a0;
- (void)newRequestWillStart;
- (void)promptedUserForInput;
- (void)startAttendingWithDeviceID:(id)a0;

@end
