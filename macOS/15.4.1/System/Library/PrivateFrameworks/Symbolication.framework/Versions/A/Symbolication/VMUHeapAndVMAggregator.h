@class VMUHeapAndVMAggregatorOptions, NSArray, VMUClassInfo, VMUClassPatternMatcher, NSMutableArray, VMUMallocZoneAggregate;
@protocol VMUCommonGraphInterface;

@interface VMUHeapAndVMAggregator : NSObject {
    VMUHeapAndVMAggregatorOptions *_heapAndVMOptions;
    id<VMUCommonGraphInterface> _graph;
    NSMutableArray *_heapZoneAggregates;
    VMUClassInfo *_nonObjectInfo;
    VMUClassPatternMatcher *_classFilterPatternMatcher;
}

@property (readonly, nonatomic) VMUMallocZoneAggregate *allZonesAggregate;
@property (readonly, nonatomic) NSArray *heapZoneAggregates;

- (void).cxx_destruct;
- (void)analyzeMemgraph;
- (id)_classDisplayName:(id)a0;
- (void)_countAllocation:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a0 inRegion:(id)a1;
- (void)enumerateBinaryCountDataSortedBy:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void)enumerateHeapAndVMSortedBy:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)initWithGraph:(id)a0 options:(id)a1;

@end
