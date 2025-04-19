@class _LTDSELFLoggingSessionIdProvider;

@interface _LTDSELFLoggingManager : NSObject

@property (readonly, retain, nonatomic) _LTDSELFLoggingSessionIdProvider *sessionIdProvider;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)selfLoggingEventWithData:(id)a0;
- (void)selfLoggingLanguageIdentificationCompletedWithLIDData:(id)a0;
- (void)_invocationStartTier1WithInvocationId:(id)a0 linkId:(id)a1 appBundleId:(id)a2;
- (void)invocationAppBackgroundedWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (void)invocationCancelWithInvocationId:(id)a0 reason:(id)a1 qssSessionId:(id)a2;
- (void)invocationEndSuccessfullyWithInvocationId:(id)a0 qssSessionId:(id)a1;
- (void)invocationEndWithInvocationId:(id)a0 error:(id)a1 qssSessionId:(id)a2;
- (void)invocationLanguageIdentificationCompletedWithInputSource:(id)a0 inputSource:(long long)a1 topLocale:(id)a2 lowConfidenceLocales:(id)a3;
- (void)invocationStartWithInvocationId:(id)a0 task:(long long)a1 inputMode:(long long)a2 invocationType:(long long)a3 translateAppContext:(id)a4;
- (void)invocationTranslationTTSPlayedWithInvocationId:(id)a0 sourceOrTargetLanguage:(long long)a1 isAutoplayTranslation:(BOOL)a2 ttsPlaybackSpeed:(long long)a3 audioChannel:(long long)a4;
- (void)invocationUserEndedTypingEndedReasonTimeoutWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (void)invocationUserEndedTypingReasonNextButtonPressedWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (void)invocationUserEndedTypingReasonTextBoxDismissedWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2;
- (id)sendFrameworkRequestWithInvocationId:(id)a0 qssSessionId:(id)a1 requestType:(long long)a2 requestRoute:(long long)a3 requestSize:(unsigned long long)a4;
- (void)sendSpeechTranslationFrameworkRequestSentWithInvocationId:(id)a0 qssSessionId:(id)a1 requestRoute:(long long)a2 payloadSizeInBytes:(unsigned long long)a3;

@end
