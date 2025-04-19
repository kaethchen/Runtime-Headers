@class NSMutableArray;

@interface AppleDeviceQueryInternalSupportAssistantSupport : AppleDeviceQuerySupportAssistantSupport

@property (class) void *dylibHandler;
@property (class, retain) id xpcProxy;
@property (class, retain) NSMutableArray *cacheList;

+ (id)classList;
+ (id)armoryClassName;
+ (void)executeCacheRefresh;
+ (void *)getDylibHandlerWithError:(id *)a0;
+ (id)getInternalSupportPath;
+ (id)getXpcProxyWithError:(id *)a0;
+ (BOOL)isInternalAssistant;
+ (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *)recursiveMutex;
+ (void)registerCacheRefresh:(id)a0;
+ (id)serviceXpcName;

@end
