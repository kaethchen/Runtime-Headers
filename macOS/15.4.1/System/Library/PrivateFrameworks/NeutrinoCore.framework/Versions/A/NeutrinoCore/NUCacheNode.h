@class NSError, NSString, NUSourceNode, NURenderNode, NSObject, NURenderContext;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NUCacheNode : NURenderNode {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NURenderContext *_renderContext;
    NUSourceNode *_sourceNode;
    NSError *_sourceError;
}

@property (retain) NSString *cachedCacheIdentifier;
@property (readonly, nonatomic) NSString *cacheIdentifier;
@property (readonly, nonatomic) long long auxiliaryImageType;
@property (readonly, nonatomic) BOOL wantsDependentJob;
@property (readonly, nonatomic) long long subsampleFactor;
@property (readonly, nonatomic) NURenderNode *inputNode;

+ (id)registry;
+ (void)_ensureCacheDirectoryURL:(id)a0;
+ (long long)_maxCacheDirectorySize;
+ (void)_pruneCacheDirectory:(id)a0 toSize:(long long)a1;
+ (id)cacheDirectoryURL;
+ (void)clearCacheDirectory;
+ (id)nodeWithInput:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

- (void).cxx_destruct;
- (BOOL)isResolved;
- (unsigned long long)_hash;
- (long long)sampleMode;
- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (void)_resolveWithSourceNode:(id)a0 error:(id)a1;
- (id)descriptionSubClassHook;
- (id)evaluateRenderDependenciesWithRequest:(id)a0 error:(out id *)a1;
- (id)evaluateSettings:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithInput:(id)a0 settings:(id)a1 subsampleFactor:(long long)a2;
- (id)initWithInputs:(id)a0 settings:(id)a1 subsampleFactor:(long long)a2;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)inputGeometryForPipelineState:(id)a0 error:(out id *)a1;
- (BOOL)installTemporaryURL:(id)a0 intoPersistentURL:(id)a1 error:(out id *)a2;
- (BOOL)isEqualToRenderNode:(id)a0;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (void)nu_updateDigest:(id)a0;
- (id)outputGeometryForPipelineState:(id)a0 error:(out id *)a1;
- (id)persistentURL;
- (id)persistentURLPrefix;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (void)resolveSourceWithResponse:(id)a0;
- (void)resolveWithSourceNode:(id)a0 error:(id)a1;
- (id)resolvedSourceNode:(out id *)a0;
- (id)setupDependentJobFromRequest:(id)a0 originalRequest:(id)a1 error:(out id *)a2;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (id)temporaryURLPrefix;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;

@end
