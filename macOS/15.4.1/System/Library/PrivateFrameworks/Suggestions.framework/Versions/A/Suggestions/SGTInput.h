@class NSString, NSIndexSet, NSArray, SGTQueryGenius, NSMapTable, NSMutableArray;

@interface SGTInput : NSObject {
    BOOL _containsCJK;
    BOOL _containsCJKDirtyFlag;
    SGTQueryGenius *genius;
    void *evaluator;
    NSMapTable *suggesterStates;
    NSMutableArray *pendingSuggestions;
    unsigned long long pendingSuggesters;
    BOOL started;
    BOOL preparing;
    BOOL flushScheduled;
    struct _NSRange { unsigned long long location; unsigned long long length; } _searchFieldRange;
}

@property (readonly) unsigned long long userTypedStringLength;
@property long long typingScope;
@property (copy) NSString *substringOfInterest;
@property (readonly) NSIndexSet *validatedSuggestionScopes;
@property (weak) id delegate;
@property (copy) id /* block */ suggestersAreReadyBlock;
@property (readonly, copy) NSString *inputString;
@property (readonly) BOOL containsCJK;
@property (readonly) NSArray *attributeNames;
@property (readonly) NSString *filterQueryString;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) SGTQueryGenius *genius;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithSuggestion:(id)a0;
- (void)_performBlock:(id /* block */)a0;
- (void)setInputString:(id)a0;
- (unsigned long long)matchesValue:(id)a0 withAttributeName:(id)a1;
- (void)_executeBlockOnMainThread:(id /* block */)a0;
- (void)_executeBlockOnMainThreadNotPreparing:(id /* block */)a0;
- (void)_flushSuggestions;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)_postSuggestersAreReady;
- (void)_scheduleFlush;
- (void)_unscheduleFlush;
- (id)comparatorForValue:(id)a0 attributeName:(id)a1;
- (id)infoForSuggester:(id)a0;
- (id)initWithSuggestion:(id)a0 filterQueryString:(id)a1 validatedSuggestionScopes:(id)a2 searchFieldUsesTokens:(BOOL)a3 rangeInSearchField:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (unsigned long long)matchesValue:(id)a0 withAttributeName:(id)a1 minimumTokenLength:(unsigned long long)a2;
- (id)rawSuggestionForCategory:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })searchFieldRangeForInputRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)startSearchingWithSuggesters:(id)a0;
- (void)suggester:(id)a0 didFindSuggestions:(id)a1;
- (void)suggesterDidFinish:(id)a0;
- (void)suggesterDidStart:(id)a0;
- (void)suggesterWillStart:(id)a0;

@end
