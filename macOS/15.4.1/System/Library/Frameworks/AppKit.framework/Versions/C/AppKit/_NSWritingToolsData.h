@class NSView, NSArray, NSValue, NSMutableDictionary, WTSession, NSMutableArray, NSWritingToolsContextState, NSWritingToolsProofreadingController, NSWritingToolsCoordinator;

@interface _NSWritingToolsData : NSObject {
    long long nestedActionLevels;
    NSMutableArray *_transactionQueues;
    BOOL _isAborted;
    BOOL _inWritingToolsDelegate;
    BOOL _isCompositionSession;
    BOOL _isListOrTableSession;
    BOOL _sessionFinished;
    BOOL _reflectingExternalEdits;
    BOOL _containsAttachments;
    BOOL _forceAcceptSuggestion;
    NSWritingToolsCoordinator *_coordinator;
    WTSession *_wtSession;
    NSMutableDictionary *_rewrittenStateForSuggestionUUIDs;
    NSArray *_contexts;
    NSWritingToolsContextState *_contextState;
    NSWritingToolsProofreadingController *_proofreadingController;
    NSView *_underlinesView;
    long long _externalEditAction;
    NSMutableArray *_rollingSuggestions;
    NSValue *_rollingSuggestionsRange;
    long long _rollingDelta;
    NSValue *_lastDeliveredPendingRange;
    long long _lastDeliveredLength;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialSelectionRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialPonderingRange;
}

- (id)init;
- (void).cxx_destruct;
- (void)_removeQueue:(id)a0;

@end
