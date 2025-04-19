@class NSArray, NSString, NSMutableDictionary, VFXOrderedDictionary;

@interface VFXCameraEffect : NSObject <VFXAnimatable, NSCopying, NSSecureCoding> {
    void *_cameraEffect;
    BOOL _isPresentationObject;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    BOOL _enabled;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentationCameraEffectWithCameraEffectRef:(struct __CFXCameraEffect { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (id)world;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)unbindAnimatablePath:(id)a0;
- (void *)createCFXObject;
- (id)_valueForSimdVectorKeyPath:(id)a0;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (id)initPresentationCameraEffectWithCameraEffectRef:(void *)a0;
- (BOOL)rawFloat2ForKey:(id)a0 value:(void *)a1;
- (BOOL)rawFloat3ForKey:(id)a0 value:(void *)a1;
- (struct __CFXWorld { } *)worldRef;

@end
