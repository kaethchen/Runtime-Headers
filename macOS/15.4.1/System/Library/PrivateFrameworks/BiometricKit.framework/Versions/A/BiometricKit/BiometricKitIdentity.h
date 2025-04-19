@class NSUUID, NSString, NSDate, BiometricKitAccessory;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned int userID;
@property (nonatomic) int type;
@property (nonatomic) int attribute;
@property (nonatomic) int entity;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationTime;
@property (nonatomic) long long matchCount;
@property (nonatomic) long long matchCountContinuous;
@property (nonatomic) long long updateCount;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) BiometricKitAccessory *accessory;

+ (id)biometricKitIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToIdentity:(id)a0;

@end
