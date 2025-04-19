@class NSArray, NSString, NSMutableSet;
@protocol MTLDevice;

@interface MTLToolsResidencySet : MTLToolsObject <MTLResidencySetSPI> {
    NSMutableSet *_allocations;
    void *_committedAllocations;
    NSMutableSet *_pendingAdds;
    NSMutableSet *_pendingRemoves;
}

@property (readonly, copy) NSArray *allCommittedAllocations;
@property (nonatomic) unsigned long long currentGeneration;
@property (nonatomic) unsigned long long expiredGeneration;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long allocatedSize;
@property (readonly, copy) NSArray *allAllocations;
@property (readonly) unsigned long long allocationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addAllocation:(id)a0;
- (void)addAllocations:(const id *)a0 count:(unsigned long long)a1;
- (void)commit;
- (BOOL)containsAllocation:(id)a0;
- (unsigned long long)countForAllocation:(id)a0;
- (void)endResidency;
- (unsigned long long)generationForAllocation:(id)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)removeAllAllocations;
- (void)removeAllocation:(id)a0;
- (void)removeAllocations:(const id *)a0 count:(unsigned long long)a1;
- (void)requestResidency;

@end
