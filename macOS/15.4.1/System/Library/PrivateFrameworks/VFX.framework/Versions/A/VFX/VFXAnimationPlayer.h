@class NSArray, NSString, NSMutableDictionary, VFXAnimation, VFXOrderedDictionary;

@interface VFXAnimationPlayer : NSObject <VFXAnimatable, NSCopying, NSSecureCoding> {
    struct __CFXAnimationPlayer { } *_playerRef;
    float _weight;
    float _speed;
    BOOL _paused;
    BOOL _usesAbsoluteTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VFXAnimation *animation;
@property (nonatomic) float speed;
@property (nonatomic) float blendFactor;
@property (nonatomic) BOOL paused;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationPlayerWithAnimation:(id)a0;
+ (id)animationPlayerWithAnimationPlayerRef:(struct __CFXAnimationPlayer { } *)a0;
+ (id)animationPlayerWithVFXAnimation:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)stop;
- (void)setWeight:(float)a0;
- (float)weight;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)commonInit;
- (void)play;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (void)_setAnimation:(id)a0;
- (id)world;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (struct __CFXAnimationPlayer { } *)animationPlayerRef;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)initWithAnimationPlayerRef:(struct __CFXAnimationPlayer { } *)a0;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)stopWithBlendOutDuration:(double)a0;
- (void)unbindAnimatablePath:(id)a0;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (id)initWithVFXAnimation:(id)a0;
- (void)setUsesAbsoluteTime:(BOOL)a0;
- (BOOL)usesAbsoluteTime;
- (struct __CFXWorld { } *)worldRef;

@end
