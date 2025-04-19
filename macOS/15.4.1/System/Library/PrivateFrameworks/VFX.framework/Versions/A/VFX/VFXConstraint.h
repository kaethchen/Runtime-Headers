@class NSArray, NSString, NSMutableDictionary, VFXOrderedDictionary;

@interface VFXConstraint : NSObject <NSCopying, NSSecureCoding, VFXAnimatable> {
    struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *_constraintRef;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    BOOL _enabled;
    BOOL _incremental;
    float _influenceFactor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) float influenceFactor;
@property (nonatomic, getter=isIncremental) BOOL incremental;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)copyTo:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)commonInit;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (id)world;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)constraintRef;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (void)finalizeDecodeConstraint:(id)a0;
- (BOOL)isPausedOrPausedByInheritance;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)setConstraintRef:(struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)a0;
- (void)unbindAnimatablePath:(id)a0;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (void)retargetWithRemapTable:(struct __CFDictionary { } *)a0;
- (struct __CFXWorld { } *)worldRef;

@end
