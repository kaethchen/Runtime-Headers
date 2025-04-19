@class NSMutableDictionary, NSArray, NSWritingToolsEditTracker, NSUUID, NSAttributedString, NSMutableArray;
@protocol NSWritingToolsProofreadingControllerDelegate;

@interface NSWritingToolsProofreadingController : NSObject {
    long long _delegateVersion;
    BOOL _finished;
}

@property (readonly) NSMutableDictionary *suggestionsByUUID;
@property (readonly) NSMutableArray *suggestionsByRange;
@property (readonly, copy) NSAttributedString *contextString;
@property (readonly, weak) id<NSWritingToolsProofreadingControllerDelegate> delegate;
@property (readonly) NSWritingToolsEditTracker *editTracker;
@property (readonly, copy) NSArray *suggestions;
@property (retain) NSUUID *identifier;
@property BOOL acceptOpenSuggestionsInFinish;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)updateSuggestionWithUUID:(id)a0 state:(long long)a1;
- (void)finish:(BOOL)a0;
- (void)addSuggestionWithUUID:(id)a0 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)addSuggestionWithUUID:(id)a0 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2 completion:(id /* block */)a3;
- (void)finish:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithContextString:(id)a0 contextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delegate:(id)a2;
- (id)suggestionWithUUID:(id)a0;
- (id)suggestions;
- (void)updateSuggestionWithUUID:(id)a0 state:(long long)a1 completion:(id /* block */)a2;
- (void)_addSuggestion:(id)a0;
- (void)_finalizeNextSuggestion:(id)a0 enumerator:(id)a1 state:(long long)a2 completion:(id /* block */)a3;
- (BOOL)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attributedString:(id)a1 state:(long long)a2 identifier:(id)a3 completion:(id /* block */)a4;
- (id)replacementTextForSuggestion:(id)a0 state:(long long)a1;

@end
