@interface DNDModeAssertionUserRequestedLifetime : DNDModeAssertionLifetime

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)lifetimeType;

@end
