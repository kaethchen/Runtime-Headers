@interface LACEnvironmentMechanismUserPassword : LACEnvironmentMechanism

@property (readonly, nonatomic) BOOL set;

+ (BOOL)supportsSecureCoding;
+ (id)environmentMechanismForUser:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 dependencies:(id)a2 error:(id *)a3;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDetails;
- (id)initWithAvailabilityError:(id)a0 set:(BOOL)a1;

@end
