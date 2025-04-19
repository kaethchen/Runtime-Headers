@interface SiriSharedUISAEViewModelController : NSObject {
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ immersiveExperienceOn;
    void /* unknown type, empty encoding */ serverUtteranceConversationIds;
    void /* unknown type, empty encoding */ storedTranscriptItems;
    void /* unknown type, empty encoding */ inputType;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ previousConversation;
@property (nonatomic, weak) void /* unknown type, empty encoding */ viewModelChangeObserver;

- (id)init;
- (void).cxx_destruct;
- (long long)inputType;
- (BOOL)alwaysShowRecognizedSpeech;
- (void)clearLatencySummary;
- (void)conversationDidChangeWithTransaction:(id)a0;
- (void)didReceiveLatencyInformation:(id)a0;
- (id)initWithConversation:(id)a0 delegate:(id)a1;
- (void)inputTypeDidChange;
- (void)revealLatencyView;
- (void)revealUserUtterance:(id)a0 backingAceObject:(id)a1;
- (void)updateCurrentRequestText:(id)a0;
- (unsigned long long)_generateDiffFromViewModel:(id)a0 toViewModel:(id)a1;
- (void)_notifyObserverOfViewModelChangeWithDiff:(unsigned long long)a0;
- (void)_processInitialConversationItemsForConversation:(id)a0;
- (void)_processInsertedConversationItemsForConversationItems:(id)a0 forConversation:(id)a1;
- (void)_processUpdatedConversationItemsAtIndexPaths:(id)a0;
- (void)clearLatencySummaryWithoutViewUpdate;
- (void)resetViewsAndClearASR:(BOOL)a0;
- (id)serverUtterancesToDisplayForConversation:(id)a0;
- (id)userUtteranceForConversationItem:(id)a0;

@end
