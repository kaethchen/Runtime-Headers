@class NSObject;
@protocol OS_dispatch_queue;

@interface MXEndpointDescriptorCache : NSObject {
    struct __CFArray { } *_registeredEndpointManagers;
    struct __CFArray { } *_availableEndpointsInfo;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct OpaqueFigReentrantMutex { } *_cacheMutex;
    struct __CFArray { } *_predictedRoutesEndpointCache;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (struct __CFDictionary { } *)copyRouteDescriptorForEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (void)_availableEndpointsDidChangeForEndpointManager:(struct OpaqueFigEndpointManager { } *)a0 atDate:(id)a1;
- (struct __CFArray { } *)_copyEndpoints:(struct __CFArray { } *)a0 withPredicate:(id /* block */)a1;
- (struct __CFArray { } *)_copyMatchingEndpointsForManagerType:(struct __CFString { } *)a0 predicateMatchFunction:(void /* function */ *)a1 inEndpointPredicateRefCon:(void *)a2;
- (void)_endpointDescriptionDidChangeForEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (void)_endpointDescriptionDidChangeForEndpoint:(struct OpaqueFigEndpoint { } *)a0 notificationName:(struct __CFString { } *)a1 payload:(struct __CFDictionary { } *)a2;
- (struct OpaqueFigReentrantMutex { } *)_getCacheMutex;
- (struct __CFArray { } *)copyAvailableEndpointsForManager:(struct OpaqueFigEndpointManager { } *)a0;
- (struct __CFArray { } *)copyAvailableRouteDescriptorsForManager:(struct OpaqueFigEndpointManager { } *)a0;
- (struct OpaqueFigEndpoint { } *)copyEndpointFromRouteDescriptor:(struct __CFDictionary { } *)a0 routingContextUUID:(struct __CFString { } *)a1 retryCount:(unsigned long long)a2;
- (struct OpaqueFigEndpoint { } *)copyEndpointWithDeviceID:(struct __CFString { } *)a0 isStreamID:(BOOL)a1 managerType:(struct __CFString { } *)a2 routingContextUUID:(struct __CFString { } *)a3;
- (struct __CFArray { } *)copyRegisteredEndpointMangers;
- (struct __CFArray { } *)copyRouteDescriptorsForEndpoints:(struct __CFArray { } *)a0;
- (void)endpointActivatedCallback:(id)a0;
- (struct OpaqueFigEndpointManager { } *)getEndpointManagerForType:(struct __CFString { } *)a0;
- (void)registerEndpointManagerForCaching:(struct OpaqueFigEndpointManager { } *)a0;

@end
