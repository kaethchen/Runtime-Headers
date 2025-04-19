@class NSArray, SiriSharedUISystemAssistantExperienceContainerView, NSString, SiriSharedUISAEUserUtteranceViewModel, NSMutableArray, SiriSharedUISmartDialogView;
@protocol SiriSharedUISAEViewStateDelegate;

@interface SiriSharedUISAEViewState : NSObject <SiriSharedUISAEViewModelChangeObserving> {
    BOOL _animatingInActiveSmartDialogView;
    BOOL _activeSmartDialogIsLatencyPill;
    id /* block */ _cachedPresentResultBlock;
}

@property (copy, nonatomic, getter=_activeTranscriptItems, setter=_setActiveTranscriptItems:) NSArray *activeTranscriptItems;
@property (copy, nonatomic, setter=_setActiveConversationTranscriptItems:) NSArray *activeConversationTranscriptItems;
@property (copy, nonatomic, setter=_setSmartDialogServerUtterances:) NSArray *serverUtterances;
@property (copy, nonatomic, setter=_setSmartDialogUserUtterance:) SiriSharedUISAEUserUtteranceViewModel *userUtterance;
@property (copy, nonatomic) NSArray *previousConversationTranscriptItems;
@property (nonatomic) BOOL hasSmartDialogSnippet;
@property (nonatomic) BOOL isDisplayingLatency;
@property (retain, nonatomic) SiriSharedUISystemAssistantExperienceContainerView *containerView;
@property (nonatomic) int currentViewState;
@property (nonatomic) int previousViewState;
@property (weak, nonatomic) id<SiriSharedUISAEViewStateDelegate> delegate;
@property (nonatomic) BOOL isInAmbient;
@property (retain, nonatomic) SiriSharedUISmartDialogView *activeSmartDialogView;
@property (readonly, nonatomic) NSMutableArray *finalAndDisplayedSmartDialogs;
@property (readonly, nonatomic) BOOL upcomingResultHasSnippet;
@property (readonly, nonatomic) NSArray *storedConversationTranscriptItems;
@property (readonly, nonatomic) BOOL activeSmartDialogIsLatencyPill;
@property (nonatomic) long long inputType;
@property (readonly, nonatomic) BOOL shouldPreserveResultSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setState:(int)a0;
- (id)initWithContainerView:(id)a0;
- (void)latencyStateInterrupted;
- (void)responseHandledInApp;
- (void)setSmartDialogAnimationInProgress:(BOOL)a0;
- (void)saeViewModelDidChange:(id)a0 withDiff:(unsigned long long)a1;
- (void)_presentOrTransitionActiveSmartDialogView;
- (void)_presentPillOrCollapseResult;
- (void)_presentResult;
- (void)_setIsPresentedWithSmartDialogText;
- (void)_setSmartDialogCard:(id)a0;
- (void)_setSmartDialogPlugin:(id)a0;
- (void)_smartDialogContentDidChange;
- (void)removeResponseElements:(unsigned long long)a0;
- (BOOL)requireFinalSpeechHypothesisBeforeAppearance;

@end
