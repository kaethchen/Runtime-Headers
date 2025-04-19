@class NSString, NSObject;
@protocol CSLaunchAgentXPCClientDelegate, CSLaunchAgentXPCClientConnectionStatusDelegate, OS_xpc_object, OS_dispatch_queue, CSExclaveAudioProvidingDelegate;

@interface CSLaunchAgentXPCClient : NSObject <CSExclaveAudioProviding, CSExclaveFirstPassVoiceTriggerAnalyzing, CSExclaveSecondPassVoiceTriggerAnalyzing, CSExclaveAssetsControlling, CSExclaveAdBlockerAnalyzing>

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcReplyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcRequestQueue;
@property (weak, nonatomic) id<CSExclaveAudioProvidingDelegate, CSLaunchAgentXPCClientDelegate> delegate;
@property (weak, nonatomic) id<CSLaunchAgentXPCClientConnectionStatusDelegate> crashMonitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (BOOL)prepare;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (void)_connectIfNeeded;
- (void)sendMessageSync:(id)a0;
- (id)_decodeError:(id)a0;
- (void)_handleListenerDisconnectedError:(id)a0;
- (void)_handleListenerError:(id)a0;
- (void)_handleListenerEvent:(id)a0;
- (void)_handleListenerMessage:(id)a0;
- (void)configAOPVoiceTrigger;
- (void)fetchAOPVoiceTriggerResult:(id /* block */)a0;
- (BOOL)initializeSecondPass;
- (void)pingpong:(id /* block */)a0;
- (void)processBargeInVoiceTriggerWithResult:(id /* block */)a0;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(BOOL)a0 result:(id /* block */)a1;
- (void)resetFirstPassVoiceTrigger;
- (BOOL)sendMessageAndReplySync:(id)a0 error:(id *)a1;
- (void)setAssetForLocale:(id)a0 isOTA:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)setSpeakerProfile:(id)a0 numEmbeddings:(unsigned long long)a1 dimension:(unsigned long long)a2 speakerRecognizerType:(unsigned long long)a3;
- (void)startBargeInVoiceTrigger;
- (void)startSecondPassVoiceTriggerWithFirstPassSource:(unsigned long long)a0 enablePHS:(BOOL)a1 supportMultiPhrase:(BOOL)a2 activeChannel:(unsigned int)a3;
- (void)stopBargeInVoiceTrigger;
- (void)stopSecondPassVoiceTrigger;
- (unsigned long long)startSensor;
- (unsigned long long)stopSensor;
- (void)activateSecureSession:(BOOL)a0;
- (void)adBlockerMatchingInProgress:(id /* block */)a0;
- (BOOL)fetchAndStoreAudioBuffer;
- (void)setAdBlockerAsset:(id /* block */)a0;
- (void)startAdBlockerMatching;
- (void)startSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)startSecureMobileAssetLoaderService:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopAdBlockerMatching;
- (void)stopSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;
- (void)_handleAudioCallbackDelegate:(id)a0;
- (void)_handleAudioProvidingDelegateAudioBuffer:(id)a0;
- (void)_handleAudioProvidingDelegateMessageBody:(id)a0;
- (void)_handleDidFinishAlertPlaybackDelegate:(id)a0;
- (void)_handleDidStartRecordingDelegate:(id)a0;
- (void)_handleDidStopRecordingDelegate:(id)a0;
- (unsigned long long)currentSensorStatus;
- (BOOL)initAudioRecorderWithError:(id *)a0;
- (BOOL)prepareAudioRecordWithStreamHandleId:(unsigned long long)a0 settings:(id)a1 error:(id *)a2;
- (void)requestHistoricalAudioBufferFor:(unsigned long long)a0 startSample:(unsigned long long)a1 numSamples:(unsigned long long)a2 hostTime:(unsigned long long)a3;
- (void)sendAssetsControlMessage:(id)a0 errorCodeIfFailed:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)setRecordModeForStreamId:(unsigned long long)a0 avvcRecordMode:(unsigned long long)a1 error:(id *)a2;
- (BOOL)startAudioStreamWithOption:(id)a0 error:(id *)a1;
- (BOOL)stopAudioStreamWithError:(id *)a0;

@end
