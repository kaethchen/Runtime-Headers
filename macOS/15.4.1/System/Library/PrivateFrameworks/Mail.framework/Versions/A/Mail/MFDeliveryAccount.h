@class MFMailAccount, NSArray, NSString, ACAccount;

@interface MFDeliveryAccount : MFAccount <EDAccount, EDDeliveryAccount>

@property (readonly, nonatomic) BOOL isDynamic;
@property (weak) MFMailAccount *associatedAccount;
@property (readonly, copy, nonatomic) NSArray *remoteMailAccountsEmployedBy;
@property (nonatomic) unsigned long long maximumMessageBytes;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *altDSID;
@property (readonly) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly) BOOL primaryiCloudAccount;
@property (readonly) BOOL isActive;
@property (copy) NSString *displayName;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSArray *emailAddressStrings;
@property (copy) NSString *hostname;
@property (copy) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)accountWithIdentifier:(id)a0;
+ (id)deliveryAccounts;
+ (id)_accountFromCollection:(id)a0 withIdentifier:(id)a1;
+ (id)_deliveryAccounts;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountWithDomain:(id)a0;
+ (id)accountWithHostname:(id)a0 username:(id)a1;
+ (id)accountWithHostname:(id)a0 username:(id)a1 lookForExistingAccounts:(BOOL)a2 addToDeliveryAccountsIfNeeded:(BOOL)a3;
+ (id)accountWithParentIdentifier:(id)a0;
+ (void)addDeliveryAccount:(id)a0;
+ (id)existingAccountWithHostname:(id)a0 username:(id)a1;
+ (void)insertObjectInDeliveryAccounts:(id)a0 atIndex:(unsigned long long)a1;
+ (void)registerDynamicAccount:(id)a0;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)a0;
+ (void)saveAccountInfoToDefaults;
+ (void)setDeliveryAccounts:(id)a0;
+ (void)unregisterDynamicAccount:(id)a0;

- (void)setNilValueForKey:(id)a0;
- (void)setShouldUseAuthentication:(BOOL)a0;
- (BOOL)shouldUseAuthentication;

@end
