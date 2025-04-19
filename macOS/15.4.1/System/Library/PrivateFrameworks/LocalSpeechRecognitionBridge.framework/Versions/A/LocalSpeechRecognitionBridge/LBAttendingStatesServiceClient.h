@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, LBAttendingStatesServiceDelegate;

@interface LBAttendingStatesServiceClient : NSObject <LBAttendingStatesServiceDelegate, LBAttendingStatesService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<LBAttendingStatesServiceDelegate> delegate;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (nonatomic) BOOL isAttending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (id)_connection;
- (void)_invalidate;
- (id)_newConnection;
- (id)_service;
- (void)siriDidPromptWithRootRequestId:(id)a0;
- (void)directActionJarvisAnnounceMessageTriggerWithDeviceId:(id)a0;
- (void)dismissAttending;
- (void)localAttendingStartedWithRootRequestId:(id)a0;
- (void)localAttendingStopped;
- (void)localAttendingStoppedUnexpectedlyWithError:(id)a0;
- (void)localAttendingWillStartWithRootRequestId:(id)a0;
- (void)requestDismissed;
- (void)siriPromptWillStartWithRootRequestId:(id)a0;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)a0 audioRecordType:(long long)a1 audioRecordDeviceId:(id)a2;
- (void)speechStartDetectedWithHostTime:(unsigned long long)a0 audioRecordType:(long long)a1 audioRecordDeviceId:(id)a2;
- (void)speechStartDetectedWithShouldDuckTTS:(BOOL)a0;
- (void)startUpdateStates;
- (void)siriDidPrompt;
- (void)siriPromptWillStart;

@end
