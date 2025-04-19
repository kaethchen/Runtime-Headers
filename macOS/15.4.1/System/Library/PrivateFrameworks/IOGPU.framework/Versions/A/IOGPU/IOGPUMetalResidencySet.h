@class NSArray, NSString, IOGPUMetalDevice;
@protocol MTLDevice, MTLDeviceSPI;

@interface IOGPUMetalResidencySet : _MTLObjectWithLabel <MTLResidencySetSPI> {
    struct IOGPUResourceInfo { struct __IOSurface *iosurface; unsigned long resourceSize : 56; unsigned char iosurfaceField : 8; unsigned int resourceID; } _info;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    struct __IOGPUResource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __IOGPUDevice *x1; void *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; struct IOGPUClientSharedRO *x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14[0]; } *_groupRef;
    IOGPUMetalDevice<MTLDeviceSPI> *_device;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _evictsImmediately;
    unsigned long long _currentGeneration;
    unsigned long long _expiredGeneration;
    struct IOGPUGenerationalSet<id, IOGPUMTLIdKey, IOGPUMTLObjectHashAllocator> { struct IOGPUMTLIdKey *m_keyTable; unsigned long long *m_generationTable; unsigned int *m_hopInfo; unsigned long long *m_usedInfo; unsigned long long *m_dirtyInfo; unsigned long long *m_dirtyInfoH; unsigned int m_hashSize; unsigned int m_hashMask; unsigned int m_usedMask; unsigned int m_dirtyHMask; unsigned int m_hashShift; unsigned int m_count; unsigned int m_dirtyCount; unsigned int m_maxSize; unsigned long long m_allocatedSize; unsigned long long m_currentGeneration; unsigned long long m_expiredGeneration; } _hashTable;
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
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addAllocation:(id)a0;
- (void)addAllocations:(const id *)a0 count:(unsigned long long)a1;
- (void)commit;
- (BOOL)containsAllocation:(id)a0;
- (unsigned long long)countForAllocation:(id)a0;
- (void)endResidency;
- (unsigned long long)generationForAllocation:(id)a0;
- (void)removeAllAllocations;
- (void)removeAllocation:(id)a0;
- (void)removeAllocations:(const id *)a0 count:(unsigned long long)a1;
- (void)requestResidency;
- (BOOL)_commitAddedAllocations:(const id *)a0 count:(unsigned long long)a1 removedAllocations:(const id *)a2 count:(unsigned long long)a3;
- (BOOL)_commitAddedHeaps:(const id *)a0 count:(unsigned long long)a1 removedHeaps:(const id *)a2 count:(unsigned long long)a3;
- (BOOL)_commitAddedResources:(const id *)a0 count:(unsigned long long)a1 removedResources:(const id *)a2 count:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; unsigned int x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { unsigned int x0; unsigned long long x1; } x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2; struct { unsigned int x0; } x3; } x16; } x0; } *)a2 argsSize:(unsigned long long)a3;

@end
