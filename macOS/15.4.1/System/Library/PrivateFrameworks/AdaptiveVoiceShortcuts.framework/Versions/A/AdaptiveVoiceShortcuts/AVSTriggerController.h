@interface AVSTriggerController : NSObject <VoiceActions.VAKeywordSpotterDelegate> {
    void /* unknown type, empty encoding */ audioProvider;
    void /* unknown type, empty encoding */ displayAlertHandler;
    void /* unknown type, empty encoding */ spotter;
    void /* unknown type, empty encoding */ enrollmentReceiver;
    void /* unknown type, empty encoding */ avsBundleDonorID;
}

@property (nonatomic, copy) id /* block */ displayAlertHandler;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;
- (void)resumeListening;
- (void)handleAudioBufferInput:(id)a0 time:(unsigned long long)a1;
- (void)keywordSpotterDidDetectKeywordWithEvent:(id)a0;
- (void)keywordSpotterDidUpdateScoresWithVerboseLog:(id)a0;
- (void)pauseListening;

@end
