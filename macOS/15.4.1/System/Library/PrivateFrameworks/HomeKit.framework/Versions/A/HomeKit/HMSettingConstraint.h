@class NSUUID;
@protocol NSSecureCoding, NSCopying;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly, copy) id<NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (id)supportedValueClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)initWithType:(long long)a0 value:(id)a1;
- (id)descriptionWithPointer:(BOOL)a0;

@end
