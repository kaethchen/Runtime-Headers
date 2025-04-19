@class NSNumber, NSArray;

@interface MechanismBiometry : MechanismACM

@property (nonatomic) long long evaluationMode;
@property (retain, nonatomic) NSNumber *userId;
@property (nonatomic) BOOL biolockout;
@property (readonly, nonatomic) BOOL isFallbackVisible;
@property (retain, nonatomic) NSArray *identityUUIDs;

- (void).cxx_destruct;
- (BOOL)canRecoverFromAvailabilityError:(id)a0 request:(id)a1;
- (BOOL)checkLockoutState:(long long)a0 isEffectiveLockoutForMatchWithPurpose:(long long)a1;
- (id)initWithEventIdentifier:(long long)a0 remoteViewController:(long long)a1 acmContextRecord:(id)a2 request:(id)a3 evaluationMode:(long long)a4 userId:(id)a5;
- (BOOL)willTryToRecover;

@end
