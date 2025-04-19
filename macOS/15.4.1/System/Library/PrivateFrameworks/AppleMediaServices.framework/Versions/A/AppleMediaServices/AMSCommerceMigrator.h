@interface AMSCommerceMigrator : NSObject

+ (id)_cookiesFromURL:(id)a0;
+ (id)_createAccountFromKnownAccountsDictionary:(id)a0 accountTypeIdentifier:(id)a1;
+ (void)_migrateAppStoreInformationIntoAccounts:(id)a0;
+ (void)_migrateBiometricsStateIntoAccounts:(id)a0;
+ (void)_migrateBooksInformationIntoAccounts:(id)a0;
+ (id)_migrateCommerceAccounts;
+ (void)_migrateConfiguratorInformationIntoAccounts:(id)a0;
+ (void)_migrateCookiesIntoAccounts:(id)a0;
+ (id)_migrateLegacyCommerceAccounts;
+ (void)_migratePrivacyAcknowledgementIntoAccounts:(id)a0;
+ (void)_migrateiTunesInformation;
+ (id)_primaryDSIDFromLegacyPreferencesDomain:(id)a0 clientType:(id)a1 serverType:(id)a2;
+ (void)_removeAccountRelatedDefaultsUsingAccounts:(id)a0;
+ (void)migrateCommerceAccountsWithOptions:(id)a0;

@end
