@class NSArray, IDSPhoneSubscriptionSelector, TUHandle;

@interface FaceTimeAccountFetcher : NSObject

@property (retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector;
@property (copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) TUHandle *defaultSelectedCallerID;
@property (readonly, copy, nonatomic) NSArray *validCallerIDs;

- (void).cxx_destruct;
- (BOOL)_aliasIsDevicePhoneNumber:(id)a0;
- (id)_aliasesForAccount:(id)a0;
- (BOOL)_shouldFilterOutAlias:(id)a0 onAccount:(id)a1;
- (id)_temporaryDeviceAliases;
- (BOOL)_aliasIsTemporaryDeviceAlias:(id)a0;
- (id)useableAliasesForAccounts:(id)a0;

@end
