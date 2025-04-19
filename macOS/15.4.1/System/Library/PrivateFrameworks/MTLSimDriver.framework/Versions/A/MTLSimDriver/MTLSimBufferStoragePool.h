@class NSObject;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface MTLSimBufferStoragePool : NSObject {
    id<MTLDevice> device;
    struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *head;
    struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *tail;
    unsigned long long storageSize;
    NSObject<OS_dispatch_semaphore> *semaphore;
}

- (void)dealloc;
- (void)returnStorage:(struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)a0;
- (struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)allocStorage;
- (struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)getStorage;
- (id)initWithEntrySize:(unsigned long long)a0 device:(id)a1;

@end
