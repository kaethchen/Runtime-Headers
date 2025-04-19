@class NSXPCListenerEndpoint, NSString, NSXPCConnection, LBAudioCapture, NSObject;
@protocol OS_dispatch_queue, LBLocalSpeechRecognizerClientDelegate;

@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_xpcListenerEndpoint;
    LBAudioCapture *_audioCapture;
    BOOL _shouldEnableAudioCapture;
}

@property (weak, nonatomic) id<LBLocalSpeechRecognizerClientDelegate> delegate;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (retain, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInstalledFromStatusString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (id)_connection;
- (void)_invalidate;
- (id)_newConnection;
- (id)_service;
- (void)preheatLocalSpeechRecognitionWithLanguage:(id)a0 source:(unsigned long long)a1;
- (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
- (void)sendVisualContextAndCorrectionsInfo:(id)a0 interactionIdentifier:(id)a1;
- (void)connectToServiceIfNeeded;
- (void)updateTCUState:(id)a0;
- (void)disableLocalSpeechRecognitionForRequestId:(id)a0;
- (void)pauseLocalSpeechRecognitionForRequestId:(id)a0;
- (void)resumeLocalRecognitionWithRequestId:(id)a0 prefixText:(id)a1 postfixText:(id)a2 selectedText:(id)a3;
- (void)setLocalSpeechRecognizerClientDelegate:(id)a0;
- (void)startSpeechRecognitionResultsWithSettings:(id)a0;
- (void)stopSpeechRecognitionTaskAndInvalidateWithReason:(unsigned long long)a0 requestId:(id)a1 completion:(id /* block */)a2;
- (void)stopSpeechRecognitionTaskWithReason:(unsigned long long)a0 requestId:(id)a1;
- (void)trpCandidateReadyForExecutionForRequestId:(id)a0 withTrpId:(id)a1;
- (void)updateVoiceCommandContextWithRequestId:(id)a0 prefixText:(id)a1 postfixText:(id)a2 selectedText:(id)a3 disambiguationActive:(id)a4 cursorInVisibleText:(id)a5 favorCommandSuppression:(id)a6 abortCommandSuppression:(id)a7 undoEvent:(id)a8;
- (BOOL)_shouldSetSpeechEventForRecordType:(long long)a0;
- (void)_stopSpeechRecognitionTaskWithReason:(unsigned long long)a0 requestId:(id)a1 shouldInvalidateAfterStop:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithDelegate:(id)a0 xpcListenerEndpoint:(id)a1 audioCapture:(id)a2;
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)a0 requestId:(id)a1 endpointMode:(long long)a2 error:(id)a3;
- (oneway void)localSpeechServiceDidDetectedFinalEndpointAtTime:(double)a0;
- (oneway void)localSpeechServiceDidReceiveContinuityEndDetected:(id)a0;
- (oneway void)localSpeechServiceDidReceiveMultiUserTRPCandidatePackage:(id)a0;
- (oneway void)localSpeechServiceDidReceiveTCUStateUpdate:(id)a0;
- (oneway void)localSpeechServiceDidReceiveTRPCandidatePackage:(id)a0;
- (oneway void)localSpeechServiceDidReceiveTRPDetected:(id)a0;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3 metadata:(id)a4;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)a0 rcId:(unsigned long long)a1 shouldAccept:(BOOL)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (oneway void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(id)a0 speechPackage:(id)a1;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1 metadata:(id)a2;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 speechPackage:(id)a2 metadata:(id)a3;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2 metadata:(id)a3;
- (oneway void)localSpeechServiceDidReceivedVoiceCommandCandidateWithRequestId:(id)a0 speechPackage:(id)a1 metadata:(id)a2;
- (oneway void)localSpeechServiceDidReceivedVoiceIdScoreCard:(id)a0;
- (oneway void)localSpeechServiceRequestAttentionAssetDownload;
- (void)resetCacheAndCompileAllAssets;
- (void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)a0;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0 requestId:(id)a1;
- (void)stopSpeechRecognitionTaskWithReason:(unsigned long long)a0 requestId:(id)a1 completion:(id /* block */)a2;

@end
