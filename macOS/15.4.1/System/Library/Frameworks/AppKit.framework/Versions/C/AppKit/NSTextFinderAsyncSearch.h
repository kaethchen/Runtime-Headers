@class _NSTextFinderImpl, NSMutableRangeArray, NSMutableIndexSet, _NSTextFinderAsyncSearchOperation, NSMutableArray;

@interface NSTextFinderAsyncSearch : NSObject {
    _NSTextFinderImpl *_textFinderImpl;
    _NSTextFinderAsyncSearchOperation *_operation;
    NSMutableArray *_findFirstMatchOperations;
    NSMutableRangeArray *_matchRanges;
    NSMutableIndexSet *_searchedIndexes;
    unsigned long long _firstMatchIndex;
    id /* block */ _firstMatchBlock;
    BOOL _foundFirstMatch;
    BOOL _nextMatchIsFirst;
    id /* block */ _completionBlock;
    BOOL _started;
}

@property (copy) id /* block */ completionBlock;
@property (readonly) BOOL isSearching;

+ (id)queue;

- (void)dealloc;
- (void)start;
- (void)_addRanges:(id)a0 searchedIndexes:(id)a1;
- (void)_foundFirstMatchInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_foundMatchRanges:(id)a0 searchedIndexes:(id)a1;
- (void)_getIndexes:(id *)a0 forInsertionOfRanges:(id *)a1;
- (void)_locateFirstMatchIfNecessary;
- (void)_scheduleFirstMatchOperation;
- (void)_searchCompleted;
- (id)initWithTextFinderImpl:(id)a0;
- (id)matchRanges;
- (void)notifyOfFirstMatchAfterIndex:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)stopSearchingAndWait:(BOOL)a0;
- (BOOL)waitUntilSearchCompletedForRanges:(id)a0 orTimeout:(BOOL)a1;

@end
