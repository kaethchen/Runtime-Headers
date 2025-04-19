@class QCSCN_Node;

@interface QCSCN_Scene : NSObject {
    id _reserved;
}

@property (readonly, nonatomic) QCSCN_Node *rootNode;

+ (id)scene;
+ (id)propertyKeys;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (int)_baseTypeForProperty:(id)a0;
+ (id)argumentForSelector:(SEL)a0;
+ (SEL)jsConstructor;
+ (id)sceneWithData:(id)a0 atIndex:(long long)a1 options:(id)a2;
+ (id)sceneWithData:(id)a0 options:(id)a1;
+ (id)sceneWithSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)a0;
+ (id)sceneWithURL:(id)a0 atIndex:(long long)a1 options:(id)a2;
+ (id)sceneWithURL:(id)a0 options:(id)a1;
+ (id)sceneWithURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (Class)typeForProperty:(id)a0;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (void)lock;
- (void)unlock;
- (id)valueForUndefinedKey:(id)a0;
- (struct __C3DLibrary { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; } *)library;
- (void)setLibrary:(struct __C3DLibrary { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; } *)a0;
- (void)setStartTime:(double)a0;
- (double)startTime;
- (id)root;
- (double)frameRate;
- (void)setFrameRate:(double)a0;
- (id)attributeForKey:(id)a0;
- (double)endTime;
- (void)setEndTime:(double)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)scene;
- (id)propertyKeys;
- (float)playbackSpeed;
- (void)setPlaybackSpeed:(float)a0;
- (void)setRootNode:(id)a0;
- (void)_setRootNode:(id)a0;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; void *x2; int x3; int x4; struct __CFString *x5; struct __CFArray *x6; } *)targetForKey:(id)a0;
- (void *)__CFObject;
- (id)_sceneRefs;
- (void)addSceneAnimation:(id)a0 forKey:(id)a1 target:(id)a2;
- (id)initForJavascript:(id)a0;
- (id)initWithSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)a0;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)sceneRef;

@end
