@class NSObject, NSMutableSet, MTLIOAccelDevice;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {
    unsigned long long *_submitToHardwareTimeStampPointer;
    unsigned long long _protectionOptions;
    void *_scheduledCallbackBlockPtr;
    void *_completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
    NSMutableSet *_purgedResources;
}

@property (readonly) struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x0; unsigned int *x1; unsigned int *x2; unsigned int *x3; id x4; struct IOAccelResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 7; unsigned char x3 : 1; unsigned int x4; } x5; } *commandBufferResourceInfo;
@property (readonly) struct IOAccelResourceList { unsigned short x0[256]; struct IOAccelSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } *ioAccelResourceList;
@property (readonly) MTLIOAccelDevice<MTLDevice> *device;
@property (readonly) struct MTLIOAccelCommandBufferStorage { id x0; struct MTLIOAccelCommandBufferStoragePool *x1; struct { struct MTLIOAccelCommandBufferStorage *x0; struct MTLIOAccelCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; id x7; char *x8; char *x9; struct IOAccelSegmentListHeader *x10; struct IOAccelSegmentResourceListHeader *x11; struct IOAccelSegmentResourceDescriptorGroup *x12; struct IOAccelResourceList { unsigned short x0[256]; struct IOAccelSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } x13; id x14; id x15; unsigned long long x16; unsigned long long x17; id *x18; struct MTLIOAccelCommandBufferResourceInfo *x19; id x20; id *x21; unsigned int x22; unsigned long long x23; struct IOAccelSegmentListShmemHeader *x24; struct IOAccelSegmentKernelCommmandListHeader *x25; unsigned int x26; unsigned int x27; int x28; int x29; unsigned int x30; struct IOAccelSegmentResourceListHeader *x31; struct IOAccelSegmentResourceDescriptorGroup *x32; unsigned int x33; } *commandBufferStorage;

- (void)dealloc;
- (void)pushDebugGroup:(id)a0;
- (void)doCorruptCBSPI:(int)a0;
- (void)addPurgedHeap:(id)a0;
- (void)addPurgedResource:(id)a0;
- (void)commit;
- (void)encodeConditionalAbortEvent:(id)a0;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (void)popDebugGroup;
- (unsigned long long)protectionOptions;
- (void)setLabel:(id)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)setResponsibleTaskIDs:(const unsigned int *)a0 count:(unsigned int)a1;
- (void)validate;
- (void)_debugBytes:(const char *)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)growSegmentList;
- (void)_encodePurgedResources;
- (void *)_reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)a0;
- (void)beginSegment:(void *)a0;
- (void)commitAndReset;
- (void)commitEncoder;
- (void)didCompleteWithStartTime:(unsigned long long)a0 endTime:(unsigned long long)a1 error:(id)a2;
- (void)encodeSubmitSleepMS:(unsigned int)a0;
- (void)endCurrentSegment;
- (void)getCurrentKernelCommandBufferPointer:(void **)a0 end:(void **)a1;
- (void)getCurrentKernelCommandBufferStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (struct IOAccelSegmentListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; struct IOAccelSegmentResourceListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct IOAccelSegmentResourceDescriptorGroup { unsigned int x0[6]; unsigned long long x1[6]; unsigned short x2[6]; unsigned short x3; unsigned short x4; } x5[0]; } x3[0]; } *)getSegmentListHeader;
- (BOOL)getSegmentListLockedPeerIndex:(unsigned int *)a0;
- (void)getSegmentListPointerStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)growKernelCommandBuffer:(unsigned long long)a0;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1 synchronousDebugMode:(BOOL)a2;
- (void)kernelCommandCollectTimeStamp;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)setCurrentCommandEncoder:(id)a0;
- (void)setCurrentKernelCommandBufferPointer:(void *)a0;
- (void)setCurrentSegmentListPointer:(void *)a0;
- (void)setSegmentListLockedPeerIndex:(unsigned int)a0;

@end
