@class AppleDeviceQueryCacheSupport;

@interface AppleDeviceQueryLockerSupport : AppleDeviceQuerySingletonSupport {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } recursiveMutexForCopyValue;
}

@property void /* function */ *logHandler;
@property (retain) AppleDeviceQueryCacheSupport *keysCacheForCopyValue;

- (void).cxx_destruct;
- (void)initData;

@end
