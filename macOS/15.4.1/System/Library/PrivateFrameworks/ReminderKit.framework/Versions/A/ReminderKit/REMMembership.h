@class NSUUID, NSDate;

@interface REMMembership : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *memberIdentifier;
@property (readonly, nonatomic) NSUUID *groupIdentifier;
@property (readonly, nonatomic) BOOL isObsolete;
@property (readonly, nonatomic) NSDate *modifiedOn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMemberIdentifier:(id)a0 groupIdentifier:(id)a1 isObsolete:(BOOL)a2 modifiedOn:(id)a3;

@end
