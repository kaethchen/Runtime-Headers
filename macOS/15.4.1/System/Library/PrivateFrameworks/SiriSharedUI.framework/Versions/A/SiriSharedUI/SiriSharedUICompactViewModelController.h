@class AFConversation, NSMutableDictionary, NSArray, SiriSharedUICompactViewModel;
@protocol SiriSharedUICompactViewModelChangeObserving, SiriSharedUICompactViewModelControllerDelegate;

@interface SiriSharedUICompactViewModelController : NSObject

@property (copy, nonatomic) SiriSharedUICompactViewModel *viewModel;
@property (readonly, nonatomic) AFConversation *conversation;
@property (readonly, nonatomic) BOOL alwaysShowRecognizedSpeech;
@property (readonly, nonatomic) long long inputType;
@property (nonatomic) BOOL immersiveExperienceOn;
@property (readonly, nonatomic) NSMutableDictionary *serverUtteranceConversationIds;
@property (retain, nonatomic) NSArray *storedTranscriptItems;
@property (weak, nonatomic) id<SiriSharedUICompactViewModelChangeObserving> viewModelChangeObserver;
@property (weak, nonatomic) id<SiriSharedUICompactViewModelControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)_instrumentationManager;
- (void)conversationDidChangeWithTransaction:(id)a0;
- (id)initWithConversation:(id)a0 delegate:(id)a1;
- (void)inputTypeDidChange;
- (void)revealLatencyView;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1;
- (void)updateCurrentRequestText:(id)a0;
- (void)_clearAdditionalContentTranscriptItems;
- (unsigned long long)_generateDiffFromViewModel:(id)a0 toViewModel:(id)a1;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)a0;
- (void)_processInitialConversationItemsForConversation:(id)a0;
- (void)_processInsertedConversationItems:(id)a0 forConversation:(id)a1;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)a0;
- (id)_serverUtterancesToDisplayForConversation:(id)a0;
- (id)_userUtteranceForConversationItem:(id)a0;
- (void)resetViewsAndClearASR:(BOOL)a0;
- (void)revealLatencyViewWithIntentSummary:(id)a0;
- (void)revealLatencyViewWithLatencyUtterance:(id)a0;
- (void)updateLatencySummary:(id)a0;

@end
