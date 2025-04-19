@class VisionCoreObjectCache, NSString, VNVTSessionManager, VNCIContextManager, VNFrameworkManager, VNCVPixelBufferPoolManager, VNRPNTrackerEspressoResourcesCache, VNTrackerManager, VNDetectorCache;

@interface VNSession : NSObject <VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNRPNTrackerResourcesProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming> {
    VNFrameworkManager *_frameworkManager;
    VisionCoreObjectCache *_resourceObjectsCache_onlyAccessWithSessionResourcesAccessingLock;
    VNDetectorCache *_detectorCache_onlyAccessWithDetectorAccessingLock;
    VNRPNTrackerEspressoResourcesCache *_trackerResourceCache;
    VNVTSessionManager *_vtSessionManager;
    VNCIContextManager *_ciContextManager;
    VNCVPixelBufferPoolManager *_cvPixelBufferPoolManager;
    VNTrackerManager *_trackerManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalSession;
+ (Class)trackerClassForOptions:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)detectorCache:(id)a0 didCacheDetector:(id)a1;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (id)loadedDetectors;
- (void)detectorCache:(id)a0 didEvictDetector:(id)a1;
- (void)releaseTracker:(id)a0;
- (id)_cachedDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1;
- (id)_cachedTrackerResourcesConfiguredWithOptions:(id)a0;
- (id)_locateResourceObjectForIdentifier:(id)a0 creationBlock:(id /* block */)a1 error:(id *)a2;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)cachedResourceObjectForIdentifier:(id)a0;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)initWithCachingBehavior:(unsigned long long)a0;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (void)releaseCachedResources;
- (void)releaseCachedResourcesWithCompletionBlock:(id /* block */)a0;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)resourceObjectForIdentifier:(id)a0 creationBlock:(id /* block */)a1 error:(id *)a2;
- (id)trackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (id)vnciContextManager;
- (id)vncvPixelBufferPoolManager;
- (id)vnvtSessionManager;

@end
