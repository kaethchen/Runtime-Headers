@class NSString;

@interface QCSCN_Morpher : NSObject <QCSCN_Animatable> {
    id _reserved;
}

@property BOOL normalizeWeights;
@property (copy, nonatomic) NSString *name;

+ (id)propertyKeys;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (int)_baseTypeForProperty:(id)a0;
+ (id)argumentsForSelector:(SEL)a0;
+ (id)morpherWithMorpherRef:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DMorph *x1; } *)a0;
+ (Class)typeForProperty:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)finalize;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)animationForKey:(id)a0;
- (id)animationKeys;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (id)propertyKeys;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; void *x2; int x3; int x4; struct __CFString *x5; struct __CFArray *x6; } *)targetForKey:(id)a0;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFArray *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFSet *x5; struct __CFArray *x6; BOOL x7; BOOL x8; double x9; double x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; int x12; int x13; } *)animationManager;
- (void *)__CFObject;
- (void)__removeAnimationForKey:(id)a0;
- (void)removeAllAnimationsBeforeDying:(void *)a0;
- (void)_jsSetWeight:(id)a0 atIndex:(id)a1;
- (id)_jsWeightAtIndex:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1;
- (void)_sceneRefDidChange;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (id)initPresentationMorpherWithMorpherRef:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DMorph *x1; } *)a0;
- (id)initWithMorpherRef:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DMorph *x1; } *)a0;
- (struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DMorph *x1; } *)morpherRef;
- (void)pauseAnimationForKey:(id)a0;
- (id)presentationMorpher;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)sceneRef;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)a0;
- (void)setWeight:(double)a0 atIndex:(unsigned long long)a1;
- (double)weightAtIndex:(unsigned long long)a0;

@end
