@class NSString, FAFamilyCircle;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource>

@property (readonly, nonatomic) FAFamilyCircle *familyCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)delegateAccounts;
- (id)initWithFamilyCircle:(id)a0;
- (id)myFamilyMemberRecord;
- (id)primaryAccount;

@end
