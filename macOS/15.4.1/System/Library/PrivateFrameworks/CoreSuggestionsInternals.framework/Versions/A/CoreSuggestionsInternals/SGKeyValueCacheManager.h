@class NSString, NSMutableArray;

@interface SGKeyValueCacheManager : NSObject {
    NSString *_basePath;
    NSMutableArray *_cacheFiles;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBasePath:(id)a0;
- (void)deleteValueByRecordId:(id)a0;
- (void)deleteValueByRecordIdSet:(id)a0;
- (id)initInMemory;
- (id)cacheOfType:(unsigned long long)a0;
- (void)replaceCacheOfType:(unsigned long long)a0 block:(id /* block */)a1;

@end
