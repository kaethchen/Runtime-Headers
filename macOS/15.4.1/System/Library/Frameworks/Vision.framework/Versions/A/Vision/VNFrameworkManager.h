@class NSRecursiveLock, NSArray, VisionCoreObjectCache, NSNotificationCenter, NSString, VNWeakTypeWrapperCollection, VNMTLDeviceWisdomParameters;
@protocol NSLocking;

@interface VNFrameworkManager : NSObject <VNLegacyForcedCleanupImplementing, VNMTLDeviceWisdomParametersProviding> {
    NSNotificationCenter *_notificationCenter;
    NSRecursiveLock *_detectorAccessingLock;
    NSRecursiveLock *_trackerResourcesAccessingLock;
    VNWeakTypeWrapperCollection *_sessions;
    NSRecursiveLock *_sessionResourcesAccessingLock;
    VNMTLDeviceWisdomParameters *_wisdomParameters;
}

@property (class, readonly) int linktimeVersion;
@property (class, readonly) int runtimeVersion;

@property (readonly) VisionCoreObjectCache *detectorDescriptorsCache;
@property (readonly) id<NSLocking> sessionResourcesAccessingLock;
@property (readonly) id<NSLocking> detectorAccessingLock;
@property (readonly) id<NSLocking> trackerResourcesAccessingLock;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSArray *allSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (id)init;
- (void).cxx_destruct;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (id)loadedDetectors;
- (id)_locateDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1 inSessions:(id)a2 excludingSession:(id)a3;
- (id)_locateResourceObjectForIdentifier:(id)a0 requestingSession:(id)a1 creationBlock:(id /* block */)a2 error:(id *)a3;
- (id)_locateTrackerResourcesConfiguredWithOptions:(id)a0 inSessions:(id)a1 excludingSession:(id)a2;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 forSession:(id)a2 error:(id *)a3;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;
- (void)registerSession:(id)a0;
- (void)releaseMetalDeviceWisdomParameters;
- (id)trackerResourcesConfiguredWithOptions:(id)a0 forSession:(id)a1 error:(id *)a2;
- (id)wisdomParameterForMTLDevice:(id)a0 error:(id *)a1;
- (id)wisdomParameterForMTLDeviceWithName:(id)a0 error:(id *)a1;

@end
