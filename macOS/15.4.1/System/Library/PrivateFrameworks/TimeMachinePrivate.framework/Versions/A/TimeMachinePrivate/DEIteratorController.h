@class NSSet, DEIterator, NSURL, NSNumber, XMLPropertyListStream;

@interface DEIteratorController : NSObject <DEIteratorDelegate>

@property (readonly) NSURL *olderURL;
@property (readonly) NSURL *newerURL;
@property (readonly) DEIterator *iterator;
@property BOOL ignoreRoots;
@property (retain) NSNumber *maxIterationDepth;
@property unsigned long long comparisonFlags;
@property (copy) NSSet *ignoredXattrPrefixes;
@property (copy) NSSet *ignoredPathComponents;
@property BOOL reportIdenticalItems;
@property BOOL printDifferences;
@property (retain) XMLPropertyListStream *propertyListStream;
@property (readonly) struct _DEDeltaRecord { unsigned long long bytesAdded; unsigned long long bytesRemoved; unsigned long long bytesChanged; } deltaRecord;
@property (readonly) BOOL foundDifferences;

- (void).cxx_destruct;
- (void)iteratorWillRun;
- (void)differenceEngine:(id)a0 foundAddedItems:(id)a1;
- (void)differenceEngine:(id)a0 foundDifferences:(unsigned long long)a1 oldItem:(id)a2 newItem:(id)a3;
- (void)differenceEngine:(id)a0 foundRemovedItems:(id)a1;
- (BOOL)differenceEngine:(id)a0 shouldSkipNewItem:(id)a1;
- (BOOL)differenceEngine:(id)a0 shouldSkipOldItem:(id)a1;
- (id)initWithOlderURL:(id)a0 newerURL:(id)a1;
- (void)prepareOlderRoot:(id *)a0 newerRoot:(id *)a1;
- (BOOL)runCompare;

@end
