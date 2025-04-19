@class NSString;

@interface QCSCN_Light : NSObject <QCSCN_Animatable, NSCopying> {
    id _reserved;
}

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) id color;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL castsShadow;
@property (retain, nonatomic) id shadowColor;
@property (nonatomic) double shadowRadius;

+ (id)propertyKeys;
+ (id)light;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (int)_baseTypeForProperty:(id)a0;
+ (id)argumentsForSelector:(SEL)a0;
+ (id)lightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x5; BOOL x6; BOOL x7; float x8; double x9; double x10; struct *x11; } *)a0;
+ (Class)typeForProperty:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)finalize;
- (id)init;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)animationForKey:(id)a0;
- (id)animationKeys;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (id)attributeForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)propertyKeys;
- (struct __C3DAnimationTarget { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; void *x2; int x3; int x4; struct __CFString *x5; struct __CFArray *x6; } *)targetForKey:(id)a0;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFArray *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFSet *x5; struct __CFArray *x6; BOOL x7; BOOL x8; double x9; double x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; int x12; int x13; } *)animationManager;
- (void *)__CFObject;
- (void)__removeAnimationForKey:(id)a0;
- (void)removeAllAnimationsBeforeDying:(void *)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1;
- (void)_sceneRefDidChange;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (double)attenuationEnd;
- (double)attenuationFalloffExponent;
- (double)attenuationStart;
- (id)initPresentationLightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x5; BOOL x6; BOOL x7; float x8; double x9; double x10; struct *x11; } *)a0;
- (id)initWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x5; BOOL x6; BOOL x7; float x8; double x9; double x10; struct *x11; } *)a0;
- (struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x0[4]; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x5; BOOL x6; BOOL x7; float x8; double x9; double x10; struct *x11; } *)lightRef;
- (void)pauseAnimationForKey:(id)a0;
- (id)presentationLight;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)sceneRef;
- (void)setAttenuationEnd:(double)a0;
- (void)setAttenuationFalloffExponent:(double)a0;
- (void)setAttenuationStart:(double)a0;
- (void)setSceneRef:(struct __C3DScene { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFDictionary *x1; } x0; struct __C3DSceneID *x1; struct __C3DNode *x2; struct __C3DAnimationManager *x3; double x4; double x5; double x6; double x7; struct __CFDictionary *x8; struct _SCNVector3 { double x0; double x1; double x2; } x9; struct __C3DFXDeformerManager *x10; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x11; } *)a0;
- (void)setSpotFalloffExponent:(double)a0;
- (void)setSpotInnerAngle:(double)a0;
- (void)setSpotOuterAngle:(double)a0;
- (void)setZFar:(double)a0;
- (void)setZNear:(double)a0;
- (double)spotFalloffExponent;
- (double)spotInnerAngle;
- (double)spotOuterAngle;
- (double)zFar;
- (double)zNear;

@end
