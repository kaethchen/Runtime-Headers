@interface _VZMemory : NSObject {
    struct shared_ptr<Vz::SharedMemoryMap> { struct SharedMemoryMap *__ptr_; struct __shared_weak_count *__cntrl_; } _sharedMemoryMap;
}

@property (readonly) void *mutableBytes;
@property (readonly) unsigned long long physicalAddress;
@property (readonly) unsigned long long length;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
