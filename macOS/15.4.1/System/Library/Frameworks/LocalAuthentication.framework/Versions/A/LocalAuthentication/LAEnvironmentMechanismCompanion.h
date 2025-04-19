@class NSData;

@interface LAEnvironmentMechanismCompanion : LAEnvironmentMechanism

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *stateHash;

- (long long)companionType;
- (id)initWithCoreMechanism:(id)a0;

@end
