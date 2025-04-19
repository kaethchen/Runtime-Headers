@class NSArray, NSString, VFXPhysicsContact, VFXWorld, NSMutableArray, NSMutableSet;
@protocol VFXPhysicsContactDelegate;

@interface VFXPhysicsWorld : NSObject <VFXTransactionCommandObject, NSSecureCoding> {
    void *_btWorld;
    struct btOverlappingPairCallback { void /* function */ **x0; } *_ghostPairCallback;
    struct btVehicleRaycaster { void /* function */ **x0; } *_vehicleRayCaster;
    struct btCFXDebugDraw { void /* function */ **x0; int x1; float x2; void *x3; } *_debugDrawer;
    BOOL _firstSimulationDone;
    id<VFXPhysicsContactDelegate> _contactDelegate;
    VFXPhysicsContact *_contact;
    VFXWorld *_vfxWorld;
    void /* unknown type, empty encoding */ _gravity;
    float _speed;
    float _scale;
    double _timeStep;
    double _elapsedTime;
    NSMutableArray *_physicsJoints;
    NSArray *_tempLoadedJoints;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_registeredBodies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ gravity;
@property (nonatomic) float speed;
@property (nonatomic) double timeStep;
@property (weak) id<VFXPhysicsContactDelegate> contactDelegate;
@property (readonly, nonatomic) NSArray *physicsJoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)_reset;
- (float)scale;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setScale:(float)a0;
- (void)commonInit;
- (void *)_handle;
- (id)initWithWorld:(id)a0;
- (id)world;
- (id)_physicsContact;
- (void)_allowGhostObjects;
- (void)wakeUpAllBodies;
- (void)_createDynamicWorldIfNeeded;
- (struct btVehicleRaycaster { void /* function */ **x0; } *)_defaultVehicleRayCaster;
- (void)_drawDebugInAuthoringEnvironment:(void *)a0;
- (BOOL)_isDefault;
- (BOOL)_needsRedraw;
- (void)_postCommandWithBlock:(id /* block */)a0;
- (void)_preTick:(double)a0;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3 { union { float x0[4]; } x0; })a0 toPoint:(struct btVector3 { union { float x0[4]; } x0; })a1 options:(id)a2;
- (void)_step:(double)a0;
- (void)addPhysicsBody:(id)a0 nodeRef:(struct __CFXNode { } *)a1 colGroup:(unsigned long long)a2 colMask:(unsigned long long)a3 colTest:(unsigned long long)a4;
- (id)contactTestBetweenBody:(id)a0 andBody:(id)a1 options:(id)a2;
- (id)contactTestWithBody:(id)a0 options:(id)a1;
- (id)convexSweepTestWithShape:(id)a0 fromTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 toTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 options:(id)a3;
- (void)enumerateBodiesUsingBlock:(id /* block */)a0;
- (BOOL)parseSpecialKey:(id)a0 withPath:(id)a1 intoDestination:(id *)a2;
- (id)rayTestWithSegmentFromPoint:(id)a0 toPoint:(SEL)a1 options:(id)a2;
- (void)removePhysicsBody:(id)a0 handle:(void *)a1;
- (void)updateCollisionPairs;
- (void)setWorld:(id)a0;
- (void *)_handleIfAny;
- (void)_registerPhysicsJoints;
- (void)activatePhysicsJoint:(id)a0;
- (void)addPhysicsJoint:(id)a0;
- (void)deactivatePhysicsJoint:(id)a0;
- (id)gravityValue;
- (id)objectInAllJointsAtIndex:(unsigned long long)a0;
- (id)rayTestWithSegmentFrom:(id)a0 to:(id)a1 options:(id)a2;
- (void)removePhysicsJoint:(id)a0;
- (void)setGravityValue:(id)a0;
- (void)worldWillDie;

@end
