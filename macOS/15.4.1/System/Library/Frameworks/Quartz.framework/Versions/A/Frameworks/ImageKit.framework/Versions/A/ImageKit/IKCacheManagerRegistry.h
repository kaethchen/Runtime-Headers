@interface IKCacheManagerRegistry : NSObject {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)registerCacheManager:(id)a0;
- (void)unregisterCacheManager:(id)a0;

@end
