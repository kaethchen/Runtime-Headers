@class CKDContainer, CKDAccount, NSMutableSet;

@interface CKDPCSManagerMissingIdentitiesContext : NSObject

@property (retain, nonatomic) CKDAccount *account;
@property (retain, nonatomic) NSMutableSet *servicesWithMissingIdentities;
@property (retain, nonatomic) NSMutableSet *missingIdentityPublicKeys;
@property (weak, nonatomic) CKDContainer *container;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (id)copyOfMissingIdentityPublicKeys;
- (id)copyOfServicesWithMissingIdentities;

@end
