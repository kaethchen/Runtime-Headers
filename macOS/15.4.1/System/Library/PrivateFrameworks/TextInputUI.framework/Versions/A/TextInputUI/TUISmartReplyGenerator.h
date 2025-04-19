@class TIKeyboardState, NSString, TIInputContextHistory, _TtC11TextInputUI31TUITextCompositionClientWrapper, NSMutableDictionary, _TtC11TextInputUI18TUINetworkObserver, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TUISmartReplyGenerator : NSObject <TextInputUI.TUINetworkObserverDelegate, TUIPredictionGenerator> {
    _TtC11TextInputUI31TUITextCompositionClientWrapper *_textCompositionClient;
    _TtC11TextInputUI18TUINetworkObserver *_networkObserver;
}

@property (retain, nonatomic) id cachedSmartReplyCandidate;
@property (retain, nonatomic) TIInputContextHistory *currentInputContextHistory;
@property (retain, nonatomic) TIKeyboardState *currentKeyboardState;
@property (readonly, nonatomic) _TtC11TextInputUI31TUITextCompositionClientWrapper *textCompositionClient;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *responseTimer;
@property (retain, nonatomic) NSString *pendingRequestThreadIdentifier;
@property (retain, nonatomic) NSMutableArray *pendingCallbacks;
@property (retain, nonatomic) NSMutableDictionary *acceptedCandidates;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) _TtC11TextInputUI18TUINetworkObserver *networkObserver;
@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;
+ (BOOL)emptyInputContext:(id)a0 withTrimmedCharacters:(id)a1;
+ (BOOL)emptyOutOfProcessKeyboardContext:(id)a0;
+ (id)obscuredArrayDescription:(id)a0;
+ (id)obscuredStringDescription:(id)a0;
+ (id)stringForSmartReplyType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)syncToKeyboardState:(id)a0;
- (BOOL)_queueOnly_shouldAllowResponse:(id)a0;
- (BOOL)_isGMAvailableForMailReply;
- (BOOL)_isGMAvailableForMailReplyLongFormBasic;
- (BOOL)_isGMAvailableForMessagesReply;
- (void)_performGenerateCandidatesForKeyboardState:(id)a0 usesCandidateSelection:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_queueOnly_isSmartReplyAvailableForClientAndType:(long long)a0;
- (BOOL)_staging_inputContextHistory_IsValid:(id)a0;
- (void)candidateAccepted:(id)a0 keyboardState:(id)a1 candidateRequestToken:(id)a2;
- (long long)candidateSourceType;
- (BOOL)contextHistoryDidChange:(id)a0;
- (long long)conversationType:(id)a0;
- (id)createTimerWithDelay:(unsigned long long)a0 onQueue:(id)a1 handler:(id /* block */)a2;
- (void)didObserveNetworkAvailabilityChange:(BOOL)a0;
- (void)generateCandidatesWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)generatedCandidateType;
- (BOOL)hasPendingRequestForContext:(id)a0 historyDidChange:(BOOL)a1;
- (BOOL)isClientMail:(id)a0;
- (BOOL)isClientMessages:(id)a0;
- (BOOL)isEnabledForCurrentKeyboardState;
- (void)returnResults:(id)a0 requestIDStr:(id)a1 multiStageEntryPointCandidate:(id)a2 smartReplyType:(long long)a3 conversationType:(long long)a4 usesCandidateSelection:(BOOL)a5 forCompletion:(id /* block */)a6 fromTimeout:(BOOL)a7;
- (void)shouldGenerateCandidatesForKeyboardState:(id)a0 completion:(id /* block */)a1;

@end
