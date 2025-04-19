@class NSMutableArray, NSMutableSet, VMULeakDetector;

@interface VMUAutoreleasePoolsAnalyzer : VMUAnalyzerBase

@property (retain, nonatomic) NSMutableSet *unreferencedAutoreleasePoolNodes;
@property (readonly, nonatomic) VMULeakDetector *detector;
@property (nonatomic) unsigned int *autoreleasePoolNodesByThreadIndex;
@property (nonatomic) unsigned int *autoreleasePoolChain;
@property (readonly, nonatomic) struct { unsigned int parentPageOffset; unsigned int childPageOffset; unsigned int firstEntryOffset; } offsets;
@property (nonatomic) void *reachableOutsideOfAutoreleasePoolsMap;
@property (retain, nonatomic) NSMutableArray *threadNamesByThreadIndex;
@property (nonatomic) struct { BOOL groupByType; BOOL referenceTreeShowRegionVirtualSize; unsigned int *autoreleasePoolsExtraReleasesCount; } options;
@property (readonly, nonatomic) struct { unsigned int totalEntriesInAutoreleasePools; unsigned int uniqueEntriesInAutoreleasePools; unsigned int autoreleasePoolContentPageCount; unsigned int autoreleasePoolContentPageTotalSize; unsigned int directlyHeldOnlyInAutoreleasePoolsCount; unsigned long long directlyHeldOnlyInAutoreleasePoolsSize; unsigned int reachableOnlyFromAutoreleasePoolsCount; unsigned long long reachableOnlyFromAutoreleasePoolsSize; } autoreleasePoolsStatsInfo;

- (void)dealloc;
- (void).cxx_destruct;
- (const char *)analyzerName;
- (void)populateAutoreleasePoolsDetails;
- (id)analysisSummaryWithError:(id *)a0;
- (unsigned int)findHottestEmptyAutoreleasePoolPage:(unsigned int)a0;
- (id)initWithGraph:(id)a0 regionIdentifier:(id)a1 debugTimer:(id)a2;
- (void)iterateAutoreleasePoolsInThreadsGroupingByType:(BOOL)a0 showVirtualSize:(BOOL)a1 extraReleasesCount:(unsigned int *)a2 withBlock:(id /* block */)a3;
- (void)iterateThroughPoolsPerThread:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)memoryTreeHeldByAutoreleasedNode:(id *)a0 node:(unsigned int)a1;
- (unsigned int)reattachAutoreleasePoolsChainFromHottestToColdest:(unsigned int)a0;

@end
