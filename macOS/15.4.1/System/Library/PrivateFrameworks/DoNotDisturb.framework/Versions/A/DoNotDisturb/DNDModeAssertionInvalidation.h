@class DNDModeAssertion, DNDModeAssertionSource, NSDate, DNDModeAssertionInvalidationDetails;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) DNDModeAssertionSource *source;
@property (readonly, copy) DNDModeAssertionInvalidationDetails *details;
@property (readonly) unsigned long long reasonOverride;
@property (readonly, copy) DNDModeAssertion *assertion;
@property (readonly, copy) NSDate *invalidationDate;
@property (readonly) unsigned long long reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssertion:(id)a0 invalidationDate:(id)a1 details:(id)a2 source:(id)a3 reason:(unsigned long long)a4 reasonOverride:(unsigned long long)a5;

@end
