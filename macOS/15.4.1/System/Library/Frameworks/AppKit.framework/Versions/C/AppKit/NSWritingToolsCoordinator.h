@class NSView, _NSTextViewTextEffectsData, _NSWritingToolsData, NSString, NSMutableDictionary, __NSWritingToolsTransactionQueue, NSMutableArray, NSWritingToolsCoordinatorAnimationParameters, _WTTextEffectView, NSMapTable;
@protocol NSWritingToolsCoordinatorDelegate;

@interface NSWritingToolsCoordinator : NSObject <WTWritingToolsDelegate, _WTTextPreviewSource, NSWritingToolsProofreadingControllerDelegate> {
    struct { unsigned char willChangeToState : 1; unsigned char requestsEffectContainerView : 1; unsigned char decorationContainerViews : 1; } _delegateRespondsTo;
    __NSWritingToolsTransactionQueue *_queue;
}

@property (class, readonly) BOOL isWritingToolsAvailable;

@property (weak, setter=_setView:) NSView *view;
@property (weak, nonatomic) id<NSWritingToolsCoordinatorDelegate> delegate;
@property (retain, nonatomic) _NSWritingToolsData *writingToolsData;
@property (readonly) NSMapTable *_writingToolsContextTable;
@property (retain, nonatomic) _NSTextViewTextEffectsData *textEffectsData;
@property (retain, nonatomic) _WTTextEffectView *textEffectView;
@property (retain, nonatomic) NSMutableDictionary *effectPreviewCounts;
@property (nonatomic) long long lastAppliedAnimation;
@property (retain, nonatomic) NSWritingToolsCoordinatorAnimationParameters *inFlightReplacementAnimationParameters;
@property (retain, nonatomic) NSMutableArray *visibleSuggestions;
@property (nonatomic) BOOL cachedEnclosingViewPostFrameChangeNotifications;
@property (nonatomic) BOOL includesTextListMarkers;
@property (weak) NSView *effectContainerView;
@property (weak) NSView *decorationContainerView;
@property (readonly) long long state;
@property long long preferredBehavior;
@property (readonly) long long behavior;
@property unsigned long long preferredResultOptions;
@property (readonly) unsigned long long resultOptions;
@property (nonatomic) BOOL wantsWritingToolsInlineEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_chunkForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_activateSuggestion:(id)a0 inContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_adjustedRangeForInitialSelectionInContext:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_adjustedRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inContext:(id)a1;
- (void)_cancelCurrentPonderingInContext:(id)a0 completion:(id /* block */)a1;
- (void)_clearWritingToolsContexts;
- (void)_compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4 completion:(id /* block */)a5;
- (void)_deliverRollingSuggestions:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inContext:(id)a2;
- (void)_dequeueRollingSuggestionsInContext:(id)a0;
- (void)_didBeginWritingToolsSession:(id)a0 contexts:(id)a1 completion:(id /* block */)a2;
- (void)_didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1 completion:(id /* block */)a2;
- (void)_ensureTextEffectView;
- (void)_groupWritingToolsEdits:(id /* block */)a0;
- (void)_initializeCoordinator;
- (void)_invokePonderingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inContext:(id)a1 completion:(id /* block */)a2;
- (id)_neitherPendingNorReviewingSuggestionsInContext:(id)a0;
- (id)_pendingOrReviewingSuggestionsInContext:(id)a0;
- (void)_performReplaceWithSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 destinationColor:(id)a1 inContext:(id)a2 changeBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
- (void)_postAnimationStateChangeForContext:(id)a0 isRejected:(BOOL)a1;
- (void)_proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4 completion:(id /* block */)a5;
- (void)_proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3 completion:(id /* block */)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfSuggestion:(id)a0 isProofreading:(BOOL)a1 isOriginal:(BOOL)a2 inContext:(id)a3;
- (unsigned long long)_responseForRequestString:(id)a0 clientResponseString:(id)a1;
- (void)_synchronizeWritingToolsWithUndoManagerActionsForEditedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementAttributedString:(id)a1 inWritingToolsContext:(id)a2;
- (void)_updateManagedEffectView;
- (void)_updateState:(long long)a0 forSuggestion:(id)a1 inContext:(id)a2 notifyClient:(BOOL)a3 completion:(id /* block */)a4;
- (void)_willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_writingToolsContextForIdentifier:(id)a0;
- (void)_writingToolsSession:(id)a0 didReceiveAction:(long long)a1 completion:(id /* block */)a2;
- (unsigned long long)allowedWritingToolsResultOptions;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (id)currentText;
- (id)currentTextForContextID:(id)a0;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1;
- (void)proofreadingController:(id)a0 replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 attributedString:(id)a2 state:(long long)a3 identifier:(id)a4 completion:(id /* block */)a5;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (void)stopWritingTools;
- (id)textPreviewForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textPreviewsForChunk:(id)a0;
- (void)updateForReflowedTextInContextWithIdentifier:(id)a0;
- (void)updateIsTextVisible:(BOOL)a0 forChunk:(id)a1;
- (void)updateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withText:(id)a1 reason:(long long)a2 forContextWithIdentifier:(id)a3;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (long long)writingToolsBehavior;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;

@end
