@interface STScreenTimeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enforcesChildRestrictions;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(BOOL)a0;
- (id)initWithEnforcesChildRestrictions:(BOOL)a0;

@end
