@class NSObject, NSString, NSArray, _NSTextSmartReplyContext, NSMutableArray, TITextInputTraits, NSTextInputContext, TUIKeyboardCandidateMultiplexer, _NSTextSmartReplyLastClosedContext;
@protocol NSTextSmartReplyAppController, WTWritingToolsDelegate_Proposed_v3;

@interface NSTextSmartReplyReceiver : NSObject <WTWritingToolsDelegate_Proposed_v3>

@property (nonatomic) BOOL wantsWritingToolsInlineEditing;
@property (readonly, nonatomic) BOOL includesTextListMarkers;
@property (retain, nonatomic) TUIKeyboardCandidateMultiplexer *multiplexer;
@property (retain, nonatomic) _NSTextSmartReplyContext *smartReplyContext;
@property (retain, nonatomic) NSTextInputContext *currentInputContext;
@property (retain, nonatomic) _NSTextSmartReplyLastClosedContext *lastClosedContext;
@property (retain, nonatomic) NSArray *displayedCandidates;
@property (retain, nonatomic) id<NSTextSmartReplyAppController> appController;
@property (readonly, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *intentionallyClosedHistories;
@property (retain, nonatomic) NSMutableArray *passivelyClosedHistories;
@property (retain, nonatomic) TITextInputTraits *lastTraits;
@property (nonatomic) BOOL allowFeedbackForCurrentSmartReplies;
@property (nonatomic) BOOL isEnabled;
@property (weak, nonatomic) NSObject<WTWritingToolsDelegate_Proposed_v3> *writingToolsDelegate;
@property (nonatomic) BOOL isInWritingToolsSession;

- (void).cxx_destruct;
- (void)_showWritingToolsUsingCandidate:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2 lastDisplayedHistory:(id)a3;
- (void)_cancelTextInputContextUpdateDebounce;
- (void)_checkIfFeedbackIsAllowedForCandidates:(id)a0;
- (BOOL)_contextHistoryDifferent:(id)a0 fromOther:(id)a1;
- (void)_debounce:(SEL)a0 withObject:(id)a1 delay:(double)a2;
- (void)_dismissBubble;
- (void)_dismissBubbleForView:(id)a0;
- (void)_displayCandidates:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2;
- (void)_handleBubbleSelection:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 view:(id)a2 lastDisplayedHistory:(id)a3;
- (BOOL)_isSameConversationThread;
- (id)_keyboardStateUsingHistory:(id)a0;
- (BOOL)_lastCloseShouldPreventNewRequestWithHistory:(id)a0;
- (void)_obtainViewRectThenDisplayCandidates:(id)a0;
- (void)_requestSmartReplyIfReady;
- (void)_updateLastClosedWithNewEvent:(id)a0;
- (void)_updateTextInputContext:(id)a0;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1;
- (void)handleChangeInSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(unsigned long long)a1 string:(id)a2;
- (void)handleSmartReplyResponse:(id)a0 requestToken:(id)a1;
- (id)initWithMultiplexer:(id)a0 bundleID:(id)a1;
- (void)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)processTextInputContext:(id)a0;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (void)removeTextPlaceholder:(id)a0 willInsertText:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)showSRWritingToolsRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 selectedCandidate:(id)a2 inputContextHistory:(id)a3;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;

@end
