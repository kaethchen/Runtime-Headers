@class NSNumber, ACMContextRecord;

@interface MechanismACM : MechanismBase

@property (readonly, nonatomic) struct __ACMHandle { } *acmContext;
@property (readonly, nonatomic) unsigned long long acmFlags;
@property (readonly, nonatomic) ACMContextRecord *acmContextRecord;
@property (retain, nonatomic) NSNumber *updateConstraintOffset;

- (void).cxx_destruct;
- (id)initWithEventIdentifier:(long long)a0 remoteViewController:(long long)a1 acmContextRecord:(id)a2 request:(id)a3;
- (id)mergeResult:(id)a0 withUpdateOfIdentityUUID:(id)a1;

@end
