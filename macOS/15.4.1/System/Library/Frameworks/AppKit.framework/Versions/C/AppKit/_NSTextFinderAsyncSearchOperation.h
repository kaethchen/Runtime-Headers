@class NSCondition, NSString, NSMutableRangeArray, NSMutableIndexSet, NSTextFinderAsyncSearch, NSIndexSet, NSLock;

@interface _NSTextFinderAsyncSearchOperation : NSOperation {
    NSMutableIndexSet *_allSearchedIndexes;
    NSLock *_accessLock;
    NSCondition *_condition;
    BOOL _finished;
}

@property (retain) NSTextFinderAsyncSearch *searchController;
@property (copy) NSString *searchString;
@property (retain) NSString *contentString;
@property unsigned long long searchOptions;
@property unsigned long long matchOptions;
@property (readonly) NSMutableRangeArray *matchRanges;
@property (readonly) NSMutableIndexSet *searchedIndexes;
@property (copy) NSIndexSet *indexesWaitedFor;

- (void)dealloc;
- (id)init;
- (void)main;
- (void)_addMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 searchedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_searchCompletedForIndexes:(id)a0;
- (void)_sendUpdate;
- (void)accessSearchResultsInBlock:(id /* block */)a0;
- (BOOL)searchFinished;
- (BOOL)waitUntilSearchCompletedForRanges:(id)a0 orTimeout:(double)a1;

@end
