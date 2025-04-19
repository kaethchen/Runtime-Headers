@class NSUUID;

@interface _LTSELFLoggingInvocation : NSObject

@property (nonatomic) BOOL endSent;
@property (readonly, nonatomic) NSUUID *invocationId;

+ (void)translationTTSPlayedWithInvocationId:(id)a0 sourceOrTargetLanguage:(long long)a1 isAutoplayTranslation:(BOOL)a2 ttsPlaybackSpeed:(long long)a3 audioChannel:(long long)a4;
+ (void)userEndedTypingWithInvocationId:(id)a0 payload:(id)a1 localePair:(id)a2 reason:(long long)a3;

- (void).cxx_destruct;
- (void)appBackgroundedWithPayload:(id)a0 localePair:(id)a1;
- (void)cancelWithReason:(id)a0 qssSessionId:(id)a1;
- (void)endSuccessfullyWithQSSSessionId:(id)a0;
- (void)endWithError:(id)a0 qssSessionId:(id)a1;
- (id)initWithInvocationId:(id)a0;
- (void)languageIdentificationCompletedWithInputSource:(long long)a0 topLocale:(id)a1 lowConfidenceLocales:(id)a2;
- (void)sendEventWithPayload:(id)a0 localePair:(id)a1 type:(long long)a2;
- (void)sendUserEndedTypingEventWithPayload:(id)a0 localePair:(id)a1 type:(long long)a2;
- (void)userEndedTypingWithPayload:(id)a0 localePair:(id)a1 reason:(long long)a2;

@end
