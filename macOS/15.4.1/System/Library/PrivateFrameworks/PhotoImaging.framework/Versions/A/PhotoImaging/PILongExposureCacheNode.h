@interface PILongExposureCacheNode : NUCacheNode

- (id)_evaluateImageGeometry:(out id *)a0;
- (id)evaluateRenderDependenciesWithRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)persistentURL;
- (id)resolvedSourceNode:(out id *)a0;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;
- (id)autoLoopCacheNode;
- (id)initWithAutoLoopCacheNode:(id)a0 urlKey:(id)a1;

@end
