@class NSArray, NSString, NSMutableDictionary, VFXCoreEntityHandle, VFXOrderedDictionary;

@interface VFXBehaviorGraph : NSObject <VFXAnimatable, NSCopying, NSSecureCoding> {
    VFXCoreEntityHandle *_coreHandle;
    unsigned char _isPresentationObject : 1;
    NSString *_name;
    NSMutableDictionary *_valueForKey;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bindings;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)behaviorGraphWithEntityObject:(id)a0;
+ (id)presentationBehaviorGraphWithCoreEntityHandleRef:(struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; BOOL x4; void *x5; } *)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setName:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setIdentifier:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithTag:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (id)tag;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (id)world;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (BOOL)isPausedOrPausedByInheritance;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)unbindAnimatablePath:(id)a0;
- (id)entityObject;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (id)coreEntityHandle;
- (struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; BOOL x4; void *x5; } *)coreEntityHandleRef;
- (id)initPresentationBehaviorGraphWithCoreEntityHandle:(id)a0;
- (id)initWithCoreEntityHandle:(id)a0;
- (id)initWithEntityObject:(id)a0;
- (void)makeUniqueID;
- (id)presentationBehaviorGraph;
- (void)resolveTag:(id)a0 remap:(id)a1;
- (void)wasAddedToWorld:(id)a0;
- (void)willBeRemovedFromWorld:(id)a0;
- (struct __CFXWorld { } *)worldRef;

@end
