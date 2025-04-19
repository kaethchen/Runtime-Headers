@class NSArray, NSString, SCNPhysicsContact, SCNScene, NSMutableArray, NSMutableSet;
@protocol SCNPhysicsContactDelegate;

@interface SCNPhysicsWorld : NSObject <SCNTransactionCommandObject, NSSecureCoding> {
    void *_world;
    struct btOverlappingPairCallback { void /* function */ **x0; } *_ghostPairCallback;
    struct btVehicleRaycaster { void /* function */ **x0; } *_vehicleRayCaster;
    struct btC3DDebugDraw { void /* function */ **x0; int x1; float x2; void *x3; } *_debugDrawer;
    struct c3dAether { struct vector<c3dPhysicsField *, std::allocator<c3dPhysicsField *>> { struct c3dPhysicsField **__begin_; struct c3dPhysicsField **__end_; struct __compressed_pair<c3dPhysicsField **, std::allocator<c3dPhysicsField *>> { struct c3dPhysicsField **__value_; } __end_cap_; } _fields; struct vector<c3dPhysicsField *, std::allocator<c3dPhysicsField *>> { struct c3dPhysicsField **__begin_; struct c3dPhysicsField **__end_; struct __compressed_pair<c3dPhysicsField **, std::allocator<c3dPhysicsField *>> { struct c3dPhysicsField **__value_; } __end_cap_; } _activeFields; unsigned int _lastOverrideIndex; } _aether;
    BOOL _hasActiveFields;
    BOOL _firstSimulationDone;
    id<SCNPhysicsContactDelegate> _contactDelegate;
    SCNPhysicsContact *_contact;
    SCNScene *_scene;
    struct SCNVector3 { double x; double y; double z; } _gravity;
    double _speed;
    double _scale;
    double _timeStep;
    NSMutableArray *_fields;
    double _elapsedTime;
    NSMutableArray *_behaviors;
    NSArray *_activeBehaviors;
    BOOL _activeBehaviorsValid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_bodies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) double timeStep;
@property (weak) id<SCNPhysicsContactDelegate> contactDelegate;
@property (readonly, nonatomic) NSArray *allBehaviors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)valueForUndefinedKey:(id)a0;
- (void)_reset;
- (double)scale;
- (void)setScale:(double)a0;
- (void)commonInit;
- (void *)_handle;
- (id)initWithScene:(id)a0;
- (id)scene;
- (void)setScene:(id)a0;
- (void)removeBehavior:(id)a0;
- (void)addBehavior:(id)a0;
- (void)_addFieldToWorld:(id)a0;
- (void *)_aetherHandle;
- (id)_physicsContact;
- (void)_allowGhostObjects;
- (void)wakeUpAllBodies;
- (void)_createDynamicWorldIfNeeded;
- (void)_customDecodingOfSCNPhysicsWorld:(id)a0;
- (void)_customEncodingOfSCNPhysicsWorld:(id)a0;
- (struct btVehicleRaycaster { void /* function */ **x0; } *)_defaultVehicleRayCaster;
- (void)_didDecodeSCNPhysicsWorld:(id)a0;
- (void)_drawDebugInAuthoringEnvironment:(void *)a0;
- (id)_findFieldAttachedToNode:(id)a0;
- (BOOL)_isDefault;
- (BOOL)_needsRedraw;
- (void)_postCommandWithBlock:(id /* block */)a0;
- (void)_preTick:(double)a0;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3 { union { float x0[4]; } x0; })a0 toPoint:(struct btVector3 { union { float x0[4]; } x0; })a1 options:(id)a2;
- (void)_removeFieldFromWorld:(id)a0;
- (void)_step:(double)a0;
- (void)_updatePhysicsFieldsTransforms;
- (void)addPhysicsBody:(id)a0 nodeRef:(struct __C3DNode { } *)a1 colGroup:(unsigned long long)a2 colMask:(unsigned long long)a3 colTest:(unsigned long long)a4;
- (id)contactTestBetweenBody:(id)a0 andBody:(id)a1 options:(id)a2;
- (id)contactTestWithBody:(id)a0 options:(id)a1;
- (id)convexSweepTestWithShape:(id)a0 fromTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 toTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2 options:(id)a3;
- (void)enumerateBodiesUsingBlock:(id /* block */)a0;
- (id)objectInAllBehaviorsAtIndex:(unsigned long long)a0;
- (BOOL)parseSpecialKey:(id)a0 withPath:(id)a1 intoDestination:(id *)a2;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3 { double x0; double x1; double x2; })a0 toPoint:(struct SCNVector3 { double x0; double x1; double x2; })a1 options:(id)a2;
- (void)removeAllBehaviors;
- (void)removePhysicsBody:(id)a0 handle:(void *)a1;
- (void)sceneWillDie;
- (void)updateCollisionPairs;

@end
