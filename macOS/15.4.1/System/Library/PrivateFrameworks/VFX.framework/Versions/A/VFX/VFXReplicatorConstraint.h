@class VFXNode;

@interface VFXReplicatorConstraint : VFXConstraint {
    VFXNode *_target;
    BOOL _replicateOrientation;
    BOOL _replicatePosition;
    BOOL _replicateScale;
    struct { void /* unknown type, empty encoding */ vector; } _orientationOffset;
    void /* unknown type, empty encoding */ _positionOffset;
    void /* unknown type, empty encoding */ _scaleOffset;
}

@property (retain, nonatomic) VFXNode *target;
@property (nonatomic) BOOL replicatesOrientation;
@property (nonatomic) BOOL replicatesPosition;
@property (nonatomic) BOOL replicatesScale;
@property (nonatomic) struct { } orientationOffset;
@property (nonatomic) void /* unknown type, empty encoding */ positionOffset;
@property (nonatomic) void /* unknown type, empty encoding */ scaleOffset;

+ (BOOL)supportsSecureCoding;
+ (id)replicatorConstraintWithTarget:(id)a0;
+ (id)replicatorConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)_customDecodingOfVFXReplicatorConstraint:(id)a0;
- (void)_customEncodingOfVFXReplicatorConstraint:(id)a0;
- (void)retargetWithRemapTable:(struct __CFDictionary { } *)a0;

@end
