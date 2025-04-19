@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, copy) NSString *scheduleIdentifier;
@property (readonly) unsigned long long behavior;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScheduleIdentifier:(id)a0 behavior:(unsigned long long)a1;
- (unsigned long long)lifetimeType;

@end
