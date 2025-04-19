@class NSData;

@interface LACEnvironmentMechanismBiometry : LACEnvironmentMechanism

@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) BOOL enrolled;
@property (readonly, nonatomic) BOOL lockedOut;
@property (readonly, nonatomic) NSData *stateHash;
@property (readonly, nonatomic) BOOL sensorInaccessible;
@property (readonly, nonatomic) long long approvalState;

+ (BOOL)supportsSecureCoding;
+ (id)environmentMechanismForUser:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 dependencies:(id)a2 error:(id *)a3;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDetails;
- (id)initWithAvailabilityError:(id)a0 biometryType:(long long)a1 enrolled:(BOOL)a2 lockedOut:(BOOL)a3 stateHash:(id)a4 sensorInaccessible:(BOOL)a5 approvalState:(long long)a6;

@end
