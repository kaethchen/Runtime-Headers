@class NSString, NSObject;
@protocol OS_os_log;

@interface ImageDataCache : NSObject

@property (nonatomic) struct cache_s { } *cache;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;
@property (readonly, retain, nonatomic) NSString *name;

- (void)dealloc;
- (id)init;
- (id)init:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (void)dump;
- (BOOL)removeAll;
- (BOOL)removeDataForKey:(id)a0;
- (struct ImageDataCacheStats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; })stats;
- (id)imageForKey:(id)a0;
- (char *)allocatePurgeableMemory:(unsigned long long)a0;
- (BOOL)doneWithData:(const void *)a0;
- (void)dumpStats;
- (void)freePurgeableMemory:(char *)a0;
- (id)imageForKey:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)init:(id)a0 withSizeLimitHint:(unsigned long long)a1;
- (BOOL)setData:(const char *)a0 ofSize:(unsigned long long)a1 forKey:(id)a2;
- (void)simulateMemoryPressure:(unsigned short)a0;

@end
