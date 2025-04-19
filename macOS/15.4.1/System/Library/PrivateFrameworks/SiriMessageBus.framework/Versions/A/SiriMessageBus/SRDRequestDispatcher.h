@class NSString, SRDRequestDispatcherInternal;

@interface SRDRequestDispatcher : NSObject <AFRequestDispatcher>

@property (readonly, nonatomic) SRDRequestDispatcherInternal *underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)domains;
- (void)announceNotificationHandlingStateUpdatedWithAssistantId:(id)a0 toState:(long long)a1;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 enableASR:(BOOL)a2 inputOrigin:(id)a3 location:(id)a4 jitContext:(id)a5 overrideModelPath:(id)a6 requestContextData:(id)a7;
- (void)cancelRequestWithAssistantId:(id)a0 requestId:(id)a1 reason:(long long)a2;
- (id)commandsForDomain:(id)a0;
- (void)endDictationSessionWithAssistantId:(id)a0;
- (void)endSessionWithAssistantId:(id)a0;
- (void)handleCommand:(id)a0 executionContextInfo:(id)a1 reply:(id /* block */)a2;
- (BOOL)implementsCommand:(id)a0 forDomain:(id)a1;
- (id)initWithMock:(id)a0;
- (id)initWithRequestDispatcherServiceHelper:(id)a0;
- (id)initWithRequestDispatcherServiceHelper:(id)a0 bridgeConnectionListeners:(id)a1;
- (void)pauseDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1;
- (void)postTestResultCandidateWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2 recognitionSausage:(id)a3;
- (void)postTestResultSelectedWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2;
- (void)prewarmWithAssistantId:(id)a0 languageCode:(id)a1 prewarmOptions:(unsigned long long)a2 sharedUserId:(id)a3;
- (void)requestCompletedWithAssistantId:(id)a0 requestId:(id)a1;
- (void)resumeDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1 prefixText:(id)a2 postfixText:(id)a3 selectedText:(id)a4;
- (BOOL)sessionExistsForAssistantId:(id)a0;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4 requestContextData:(id)a5;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 directAction:(id)a4 requestExecutionParameters:(id)a5 requestContextData:(id)a6;
- (void)startLocalRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 requestContextData:(id)a3;
- (void)startSessionWithConfiguration:(id)a0;
- (void)startSpeechDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startSpeechDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 recognitionOnDevice:(BOOL)a2;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3 asrOnServer:(BOOL)a4 requestContextData:(id)a5;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 requestContextData:(id)a4;
- (void)startUnderstandingDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startUnderstandingDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 requestContextData:(id)a4;
- (void)updateVoiceCommandContextWithAssistantId:(id)a0 requestId:(id)a1 prefixText:(id)a2 postfixText:(id)a3 selectedText:(id)a4 disambiguationActive:(id)a5 cursorInVisibleText:(id)a6 favorCommandSuppression:(id)a7 abortCommandSuppression:(id)a8;
- (void)updateVoiceCommandContextWithAssistantId:(id)a0 requestId:(id)a1 prefixText:(id)a2 postfixText:(id)a3 selectedText:(id)a4 disambiguationActive:(id)a5 cursorInVisibleText:(id)a6 favorCommandSuppression:(id)a7 abortCommandSuppression:(id)a8 undoEvent:(id)a9;

@end
