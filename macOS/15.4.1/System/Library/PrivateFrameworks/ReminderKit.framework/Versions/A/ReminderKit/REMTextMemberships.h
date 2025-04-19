@class NSDictionary, NSDate;

@interface REMTextMemberships : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *memberships;
@property (readonly, nonatomic) NSDate *lastResetDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (id)groupIdentifierOfMemberWithIdentifier:(id)a0;
- (id)initWithMemberships:(id)a0;
- (id)initWithMemberships:(id)a0 lastResetDate:(id)a1;
- (id)mergingWith:(id)a0;
- (id)removing:(id)a0;

@end
