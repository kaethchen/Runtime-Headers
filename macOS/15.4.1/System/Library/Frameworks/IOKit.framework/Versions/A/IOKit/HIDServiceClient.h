@interface HIDServiceClient : NSObject {
    struct { struct __IOHIDEventSystemClient *system; void *serviceID; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } callbackLock; struct { void /* function */ *callback; id /* block */ block; void *target; void *refcon; } removal; struct { struct __IOHIDVirtualServiceClientCallbacksV2 *callbacks; void *target; void *refcon; } virtualService; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } serviceLock; struct __CFDictionary *cachedProperties; struct IOHIDServiceFastPathInterface **fastPathInterface; struct IOCFPlugInInterfaceStruct **plugInInterface; void *removalHandler; unsigned int primaryUsagePage; unsigned int primaryUsage; struct _IOHIDServiceClientUsagePair *usagePairs; unsigned int usagePairsCount; } _client;
}

@property (readonly) unsigned long long serviceID;

- (id)propertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)conformsToUsagePage:(long long)a0 usage:(long long)a1;
- (void)setRemovalHandler:(id /* block */)a0;
- (id)eventMatching:(id)a0;
- (id)propertiesForKeys:(id)a0;
- (void)dealloc;
- (id)description;
- (unsigned long long)_cfTypeID;

@end
