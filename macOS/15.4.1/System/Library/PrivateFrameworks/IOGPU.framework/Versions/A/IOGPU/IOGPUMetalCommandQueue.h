@class NSCountedSet, IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalCommandQueue : _MTLCommandQueue {
    struct __IOGPUCommandQueue { } *_commandQueue;
    BOOL _disableAsyncCompletionDispatch;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
    NSCountedSet *_resourceGroups[2];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceGroupsLock;
}

@property (readonly) IOGPUMetalDevice<MTLDevice> *device;

- (void)dealloc;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (void)addInternalResidencySet:(id)a0;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)dispatchAvailableCompletionNotifications;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (void)removeInternalResidencySet:(id)a0;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)removeResidencySet:(id)a0;
- (void)removeResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setCompletionQueue:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (void)submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (void)_submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;

@end
