@class NSData;

@interface LAEnvironmentMechanismBiometry : LAEnvironmentMechanism

@property (nonatomic) long long approvalState;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) BOOL isEnrolled;
@property (readonly, nonatomic) BOOL isLockedOut;
@property (readonly, nonatomic) NSData *stateHash;
@property (readonly, nonatomic) BOOL builtInSensorInaccessible;

- (id)initWithCoreMechanism:(id)a0;
- (id)unsaltedStateHash;

@end
