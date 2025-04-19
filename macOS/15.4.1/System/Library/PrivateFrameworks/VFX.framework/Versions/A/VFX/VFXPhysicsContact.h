@class VFXNode;

@interface VFXPhysicsContact : NSObject {
    VFXNode *_nodeA;
    VFXNode *_nodeB;
    void /* unknown type, empty encoding */ _contactPoint;
    void /* unknown type, empty encoding */ _contactNormal;
    float _collisionImpulse;
    float _distance;
    float _fraction;
    long long _updateCount;
}

@property (readonly, nonatomic) VFXNode *nodeA;
@property (readonly, nonatomic) VFXNode *nodeB;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ contactPoint;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ contactNormal;
@property (readonly, nonatomic) float collisionImpulse;
@property (readonly, nonatomic) float penetrationDistance;
@property (readonly, nonatomic) float sweepTestFraction;

+ (id)_contactWithManifold:(const struct btPersistentManifold { int x0; struct btManifoldPoint { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void *x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4]; } x0; } x23; struct btVector3 { union { float x0[4]; } x0; } x24; } x1[4]; struct btCollisionObject *x2; struct btCollisionObject *x3; int x4; float x5; float x6; int x7; int x8; int x9; struct cfxContactCallback *x10; } *)a0 index:(long long)a1;

- (void)dealloc;
- (id)description;
- (void)_fillNodeA:(id)a0 nodeB:(id)a1;
- (void)_fillNodeA:(id)a0 nodeB:(SEL)a1 contactPoint:(id)a2 collisionImpulse:(id)a3 distance:(float)a4 hitFraction:(float)a5;
- (void)_prepareUpdate;
- (BOOL)_shouldPostUpdate;
- (void)_updateWithManifold:(const struct btPersistentManifold { int x0; struct btManifoldPoint { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void *x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4]; } x0; } x23; struct btVector3 { union { float x0[4]; } x0; } x24; } x1[4]; struct btCollisionObject *x2; struct btCollisionObject *x3; int x4; float x5; float x6; int x7; int x8; int x9; struct cfxContactCallback *x10; } *)a0 index:(long long)a1 point:(const struct btManifoldPoint { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void *x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4]; } x0; } x23; struct btVector3 { union { float x0[4]; } x0; } x24; } *)a2;
- (id)contactNormalValue;
- (id)contactPointValue;

@end
