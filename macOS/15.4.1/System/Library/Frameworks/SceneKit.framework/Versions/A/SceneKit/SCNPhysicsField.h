@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {
    struct SCNVector3 { double x; double y; double z; } _halfExtent;
    double _strength;
    double _falloffExponent;
    double _minimumDistance;
    BOOL _active;
    long long _scope;
    BOOL _usesEllipsoidalExtent;
    BOOL _exclusive;
    struct SCNVector3 { double x; double y; double z; } _offset;
    struct SCNVector3 { double x; double y; double z; } _direction;
    unsigned long long _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *_field;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double strength;
@property (nonatomic) double falloffExponent;
@property (nonatomic) double minimumDistance;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } halfExtent;
@property (nonatomic) BOOL usesEllipsoidalExtent;
@property (nonatomic) long long scope;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } offset;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } direction;
@property (nonatomic) unsigned long long categoryBitMask;

+ (id)field;
+ (id)magneticField;
+ (id)customFieldWithEvaluationBlock:(id /* block */)a0;
+ (id)SCNUID_creationOptions;
+ (id)SCNUID_instanciateWithOption:(id)a0;
+ (double)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(double)a0;
+ (id)dragField;
+ (id)electricField;
+ (id)linearGravityField;
+ (id)noiseFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)radialGravityField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)vortexField;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (BOOL)exclusive;
- (struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_handle;
- (struct SCNVector3 { double x0; double x1; double x2; })evalAtLocation:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (struct c3dPhysicsField { void /* function */ **x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; float x11; } *)_createField;
- (id)_owner;
- (void)_removeOwner;
- (void)_setOwner:(id)a0;
- (void)_setWorld:(id)a0;
- (void)_setupCommonProperties;
- (void)_willRemoveFromPhysicsWorld;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;

@end
