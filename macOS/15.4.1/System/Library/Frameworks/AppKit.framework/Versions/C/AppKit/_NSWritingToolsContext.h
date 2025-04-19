@class NSWritingToolsProofreadingSuggestion, NSString, NSClickGestureRecognizer, NSArray, _NSWritingToolsData, NSUUID, NSWritingToolsProofreadingController, NSWritingToolsCoordinatorContext, NSMapTable;

@interface _NSWritingToolsContext : NSObject <NSGestureRecognizerDelegate> {
    NSWritingToolsProofreadingSuggestion *_gestureRecognizedSuggestion;
    NSArray *_rollingSuggestions;
    BOOL _transactionFinished;
    BOOL _reflectingExternalUndoManagerEdits;
    _NSWritingToolsData *_parentData;
    NSWritingToolsCoordinatorContext *_context;
    NSWritingToolsProofreadingController *_proofreadingController;
    long long _lastDeliveredLength;
    NSUUID *_currentPonderingEffectID;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rollingSuggestionsRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastDeliveredPendingRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _currentPonderingRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialSelectionRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _initialPonderingRange;
}

@property (readonly) NSClickGestureRecognizer *_clickGestureRecognizer;
@property (retain) NSMapTable *boundingBezierPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_mouseClicked:(id)a0;
- (id)_suggestionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;

@end
