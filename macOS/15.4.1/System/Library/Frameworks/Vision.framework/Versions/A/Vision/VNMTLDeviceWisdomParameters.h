@class NSString, NSDictionary;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedMetalDeviceWisdomParametersLock;
    NSDictionary *_cachedMetalDeviceWisdomParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id *)a0;
- (id)_loadMetalDeviceWisdomParametersAndReturnError:(id *)a0;
- (id)_wisdomResourcesPath;
- (void)flushMetalDeviceWisdomParametersCache;
- (id)wisdomParameterForMTLDevice:(id)a0 error:(id *)a1;
- (id)wisdomParameterForMTLDeviceWithName:(id)a0 error:(id *)a1;

@end
