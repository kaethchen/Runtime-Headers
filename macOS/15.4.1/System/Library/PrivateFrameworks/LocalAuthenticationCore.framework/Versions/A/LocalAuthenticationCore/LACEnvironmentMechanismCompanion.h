@class NSData;

@interface LACEnvironmentMechanismCompanion : LACEnvironmentMechanism

@property (readonly, nonatomic) long long companionType;
@property (readonly, nonatomic) NSData *stateHash;

+ (BOOL)supportsSecureCoding;
+ (id)companionForUser:(unsigned int)a0 type:(long long)a1 error:(id *)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDetails;
- (id)initWithAvailabilityError:(id)a0 companionType:(long long)a1 stateHash:(id)a2;

@end
