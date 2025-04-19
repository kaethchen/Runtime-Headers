@class NSUUID, NSString, NSMutableDictionary, NSMutableArray;

@interface WTAnalyticsDelegate : NSObject <WTWritingToolsDelegate_Internal>

@property (retain) NSUUID *analyticsUUID;
@property (retain) NSString *threadIdentifier;
@property (retain, nonatomic) NSMutableArray *proofreadingSuggestions;
@property (retain, nonatomic) NSMutableDictionary *uuidSuggestionMapping;
@property unsigned long long numDrafts;
@property long long currentDraftNumber;
@property BOOL fromSmartReply;
@property BOOL isEditableText;
@property (nonatomic) BOOL wantsWritingToolsInlineEditing;
@property (readonly, nonatomic) BOOL includesTextListMarkers;

- (void).cxx_destruct;
- (void)redo;
- (void)undo;
- (void)endWritingTools;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (void)replaceSelectionWithText:(id)a0;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;
- (void)applicationDidEnterBackground;
- (void)copyText:(id)a0;
- (void)applicationWillTerminate;
- (void)applicationDidBecomeActive;
- (void)endWritingToolsWithError:(id)a0;
- (id)getWritingToolsFeatureDetailsForCompositionSessionType:(long long)a0;
- (id)getWritingToolsFeatureDetailsForRequestedTool:(long long)a0;
- (id)initWithSmartReplyBool:(BOOL)a0 smartReplyConfig:(id)a1 analyticsUUID:(id)a2 requestedTool:(long long)a3 isEditable:(BOOL)a4;
- (void)sendWritingToolsOnlySignal:(id)a0 withPayload:(id)a1;
- (void)sendWritingToolsOrSmartReplySignal:(id)a0 withPayload:(id)a1;
- (void)writingToolsDidUpdateKeyboardPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredContentSizeChanging:(BOOL)a1;

@end
