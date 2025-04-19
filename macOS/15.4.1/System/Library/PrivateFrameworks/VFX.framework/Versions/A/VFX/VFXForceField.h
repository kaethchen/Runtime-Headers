@class NSArray, NSString, NSMutableDictionary, VFXOrderedDictionary;

@interface VFXForceField : NSObject <NSCopying, NSSecureCoding, VFXAnimatable> {
    struct __CFXForceField { } *_forceField;
    unsigned char _isPresentationObject : 1;
    NSString *_name;
    struct { long long kind; BOOL active; float strength; float dampening; float noiseAmount; unsigned long long noiseSeed; unsigned long long categoryBitMask; long long shape; long long scope; long long cullMode; float falloffExponent; void /* unknown type, empty encoding */ halfExtents; void /* unknown type, empty encoding */ offset; float smoothness; float speed; } _settings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long fieldType;
@property (nonatomic) float strength;
@property (nonatomic) float falloffExponent;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long shape;
@property (nonatomic) void /* unknown type, empty encoding */ halfExtent;
@property (nonatomic) long long scope;
@property (nonatomic) long long cullMode;
@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) float smoothness;
@property (nonatomic) float speed;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)field;
+ (id)magneticField;
+ (float)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(float)a0;
+ (id)dragField;
+ (id)noiseFieldWithSmoothness:(float)a0 animationSpeed:(float)a1;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(float)a0 animationSpeed:(float)a1;
+ (id)vortexField;
+ (id)VFXUID_creationOptions;
+ (id)VFXUID_instanciateWithOption:(id)a0;
+ (id)forceFieldWithForceFieldRef:(struct __CFXForceField { } *)a0;
+ (id)harmonicField;
+ (id)linearField;
+ (id)presentationForceFieldWithForceFieldRef:(struct __CFXForceField { } *)a0;
+ (id)radialField;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setIdentifier:(id)a0;
- (id)valueForKey:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)setSettings:(void *)a0;
- (void)addAnimation:(id)a0;
- (void)setOffsetValue:(id)a0;
- (id)offsetValue;
- (id)world;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (struct __CFXForceField { } *)__createCFObject;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (BOOL)supportsOffset;
- (void)unbindAnimatablePath:(id)a0;
- (id)initWithFieldType:(long long)a0;
- (id)halfExtentValue;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (id)initPresentationForceFieldWithForceFieldRef:(struct __CFXForceField { } *)a0;
- (id)initWithForceFieldRef:(struct __CFXForceField { } *)a0;
- (void)makeUniqueID;
- (void)setHalfExtentValue:(id)a0;
- (struct __CFXWorld { } *)worldRef;

@end
