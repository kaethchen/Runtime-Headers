@interface NUImageCacheNode : NUCacheNode

- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)persistentURL;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;

@end
