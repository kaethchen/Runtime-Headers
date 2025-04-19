@class VFXNode;

@interface VFXLookAtConstraint : VFXConstraint {
    VFXNode *_target;
    BOOL _gimbalLockEnabled;
    void /* unknown type, empty encoding */ _targetOffset;
    void /* unknown type, empty encoding */ _upVector;
    void /* unknown type, empty encoding */ _localFront;
}

@property (retain, nonatomic) VFXNode *target;
@property (nonatomic) void /* unknown type, empty encoding */ targetOffset;
@property (nonatomic) void /* unknown type, empty encoding */ localFront;
@property (nonatomic) void /* unknown type, empty encoding */ worldUp;
@property (nonatomic) BOOL gimbalLockEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)lookAtConstraintWithTarget:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)initWithTarget:(id)a0;
- (void)setUpVector:(SEL)a0;
- (void /* unknown type, empty encoding */)upVector;
- (id)localFrontValue;
- (void)_customDecodingOfVFXLookAtConstraint:(id)a0;
- (void)_customEncodingOfVFXLookAtConstraint:(id)a0;
- (void)retargetWithRemapTable:(struct __CFDictionary { } *)a0;
- (void)setLocalFrontValue:(id)a0;
- (void)setTargetOffsetValue:(id)a0;
- (void)setUpVectorValue:(id)a0;
- (id)targetOffsetValue;
- (id)upVectorValue;

@end
