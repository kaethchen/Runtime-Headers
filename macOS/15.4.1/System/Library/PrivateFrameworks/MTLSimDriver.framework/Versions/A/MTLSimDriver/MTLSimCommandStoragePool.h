@class NSObject;
@protocol OS_dispatch_semaphore;

@interface MTLSimCommandStoragePool : NSObject {
    struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *head;
    struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *tail;
    unsigned long long storageSize;
    NSObject<OS_dispatch_semaphore> *semaphore;
}

- (void)dealloc;
- (void)returnStorage:(struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)a0;
- (struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)allocStorage;
- (struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)getStorage;
- (id)initWithEntrySize:(unsigned long long)a0;

@end
