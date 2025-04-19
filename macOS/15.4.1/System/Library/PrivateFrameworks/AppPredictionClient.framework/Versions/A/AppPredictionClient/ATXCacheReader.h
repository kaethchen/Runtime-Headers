@class _PASLock, NSString, NSObject;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject {
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleDirChange;
- (id)initWithCacheBasePath:(id)a0;
- (id)readCacheFileForCachePath:(id)a0;
- (id)readCacheFileForConsumerSubtype:(unsigned char)a0;

@end
