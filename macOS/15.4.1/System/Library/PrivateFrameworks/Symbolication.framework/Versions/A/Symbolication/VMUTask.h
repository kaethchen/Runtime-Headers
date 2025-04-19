@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    BOOL _taskIsSelf;
    struct _VMURange { unsigned long long location; unsigned long long length; } _taskDyldSharedCacheRange;
    VMUTaskMemoryCache *_taskMemory;
    VMUProcessDescription *_processDescription;
    BOOL _processDescriptionInitialized;
    unsigned long long _exclaveType;
    unsigned long long _addrableBitsPointerStrippingMask;
}

@property (readonly, nonatomic) unsigned long long taskType;
@property (readonly, copy) NSString *coreFilePath;

- (void)dealloc;
- (void).cxx_destruct;
- (int)pid;
- (BOOL)isTranslated;
- (id)initWithTask:(unsigned int)a0;
- (id)memoryCache;
- (id)processDescription;
- (id)initWithCorePath:(id)a0 originalBinaryPaths:(id)a1 error:(id *)a2;
- (BOOL)isExclave;
- (BOOL)isKernel;
- (BOOL)addressIsInSharedCache:(unsigned long long)a0;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })createSymbolicatorWithFlags:(unsigned int)a0 andNotification:(id /* block */)a1;
- (unsigned long long)exclaveType;
- (BOOL)hasStartedWithErrorString:(const char **)a0;
- (id)ioSurfaceDescriptions;
- (BOOL)isCore;
- (BOOL)isExclaveCore;
- (BOOL)isExclaveKit;
- (BOOL)rangeIsInSharedCache:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })taskDyldSharedCacheRange;
- (BOOL)taskIsSelf;
- (unsigned int)taskPort;

@end
