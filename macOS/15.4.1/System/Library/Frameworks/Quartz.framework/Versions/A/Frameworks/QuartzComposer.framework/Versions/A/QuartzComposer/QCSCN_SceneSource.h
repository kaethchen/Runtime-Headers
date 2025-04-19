@class NSURL, NSData;

@interface QCSCN_SceneSource : NSObject {
    id _reserved;
}

@property (readonly) NSURL *url;
@property (readonly) NSData *data;

+ (id)sceneFileTypes;
+ (id)sceneSourceWithData:(id)a0 options:(id)a1;
+ (id)sceneSourceWithURL:(id)a0 options:(id)a1;
+ (id)sceneTypes;

- (void)dealloc;
- (id)description;
- (id)propertyForKey:(id)a0;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)sceneWithOptions:(id)a0 error:(id *)a1;
- (id)sceneWithOptions:(id)a0 statusHandler:(id /* block */)a1;
- (id)IDsOfEntriesWithClass:(Class)a0;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)_createSceneRefWithOptions:(id)a0 statusHandler:(id /* block */)a1;
- (id)_sceneWithOptions:(id)a0 statusHandler:(id /* block */)a1;
- (BOOL)canExportToColladaWithNoDataLoss;
- (id)copyPropertiesAtIndex:(long long)a0 options:(id)a1;
- (long long)countOfScenes;
- (id)entryWithID:(id)a0 withClass:(Class)a1;
- (id)entryWithIdentifier:(id)a0 withClass:(Class)a1;
- (id)identifiersOfEntriesWithClass:(Class)a0;
- (id)performConsistencyCheck;
- (id)sceneAtIndex:(unsigned long long)a0 options:(id)a1;
- (id)sceneAtIndex:(unsigned long long)a0 options:(id)a1 error:(id *)a2;
- (long long)sceneCount;
- (struct __C3DSceneSource { } *)sceneSourceRef;
- (long long)sourceStatus;

@end
