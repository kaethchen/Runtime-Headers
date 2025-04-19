@class NSString, MTLSimHeap, MTLSimDevice;
@protocol MTLHeap, MTLDevice;

@interface MTLSimResource : NSObject <MTLResourceSPI, MTLSerializerResource> {
    unsigned long long _purgeableState;
    MTLSimHeap *_heap;
    unsigned long long _heapOffset;
    unsigned long long _options;
    MTLSimDevice *_device;
    NSString *_label;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _labelLock;
    unsigned long long _hazardTrackingMode;
    BOOL _isAliasable;
}

@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned int serializerResourceRef;

- (void)dealloc;
- (unsigned long long)resourceOptions;
- (BOOL)isWriteComplete;
- (id)device;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (unsigned long long)hazardTrackingMode;
- (id)heap;
- (BOOL)isAliasable;
- (BOOL)isComplete;
- (BOOL)isPurgeable;
- (id)label;
- (void)makeAliasable;
- (void)setLabel:(id)a0;
- (int)setOwnerWithIdentity:(unsigned int)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (unsigned long long)unfilteredResourceOptions;
- (void)waitUntilComplete;
- (id)retainedLabel;
- (BOOL)doesAliasResources:(const id *)a0 count:(unsigned long long)a1 all:(BOOL)a2;
- (id)initWithResourceRef:(unsigned int)a0 options:(unsigned long long)a1 device:(id)a2 heap:(id)a3;
- (void)setHeapOffset:(unsigned long long)a0;

@end
