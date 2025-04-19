@class NSCountedSet, NSString, VMUHeapAndVMAggregatorOptions, NSMapTable;

@interface VMUMallocZoneAggregate : NSObject {
    VMUHeapAndVMAggregatorOptions *_heapAndVMOptions;
    NSString *_zoneName;
    NSCountedSet *_quantaCounter;
    NSMapTable *_classInfoToClassCountDataMap;
    NSMapTable *_binaryNameToBinaryCountDataMap;
}

@property (readonly, nonatomic) unsigned long long virtualSize;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly, nonatomic) unsigned int blockCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_classDisplayName:(id)a0;
- (id)classInfosSortedByName;
- (id)classInfosSortedBySizeOrCount:(unsigned int)a0;
- (id)classInfosSortedByTotalInternalFragmentation;
- (void)enumerateAllocationSizesWithBlock:(id /* block */)a0;
- (void)enumerateBinaryCountDataSortedBy:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void)enumerateHeapAndVMSortedBy:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void)incrementAllocationCountForClassInfo:(id)a0 size:(unsigned long long)a1;
- (void)incrementVirtualSize:(long long)a0;
- (id)initWithZoneName:(id)a0 options:(id)a1;
- (void)modifySize:(long long)a0 count:(long long)a1 forClassInfo:(id)a2;

@end
