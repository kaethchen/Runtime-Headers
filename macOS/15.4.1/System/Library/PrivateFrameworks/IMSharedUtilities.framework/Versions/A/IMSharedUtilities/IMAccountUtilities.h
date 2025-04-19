@interface IMAccountUtilities : NSObject

+ (BOOL)_hasMadridIDSAccountForSending;
+ (BOOL)_isApprovedForRelayWithAllAccounts:(id)a0 account:(id)a1;
+ (BOOL)isAccountOperationalWithAllAccounts:(id)a0 account:(id)a1;
+ (BOOL)isAccountRegistered:(id)a0;
+ (BOOL)isAccountUsableForSendingWithAllAccounts:(id)a0 account:(id)a1;

@end
