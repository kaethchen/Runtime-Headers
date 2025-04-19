@class NSUUID, DNDModeAssertionSource, NSDate, DNDModeAssertionDetails;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) DNDModeAssertionDetails *details;
@property (readonly, copy) DNDModeAssertionSource *source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 startDate:(id)a1 details:(id)a2 source:(id)a3;

@end
