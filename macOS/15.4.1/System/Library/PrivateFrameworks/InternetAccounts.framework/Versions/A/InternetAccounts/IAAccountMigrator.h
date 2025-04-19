@class NSMutableDictionary, NSArray, NSMutableSet, ACAccountStore;

@interface IAAccountMigrator : NSObject {
    ACAccountStore *_accountStore;
    NSMutableSet *_parentAccounts;
    NSMutableSet *_childAccounts;
    NSMutableDictionary *_migratedAccountUIDs;
    NSArray *_plugins;
}

- (id)init;
- (void).cxx_destruct;
- (id)_parentForAccount:(id)a0 withSettings:(id)a1 pluginIdentifier:(id)a2 uid:(id)a3 shouldSkip:(BOOL *)a4;
- (id)_acAccountTypeForProvider:(id)a0;
- (id)_bListAccountForDataPlugin:(id)a0 withSettings:(id)a1;
- (id)_dataclassForPluginIdentifier:(id)a0;
- (id)_defaultDomainForAccountTypeIdentifier:(id)a0;
- (void)_fetchMigratedAccountIdentifiers;
- (void)_fetchParentAccounts;
- (void)_handleExchangeAccount:(id)a0 withStoredAccount:(id)a1 fromPlugin:(id)a2 uid:(id)a3;
- (id)_handleIMAPForMailAndNotesForAccount:(id)a0 withParent:(id)a1 pluginID:(id)a2;
- (id)_loadPlugins;
- (id)_makeAccountWithSettings:(id)a0 pluginID:(id)a1 uid:(id)a2;
- (id)_providerIDForPluginID:(id)a0;
- (id)_validateAndLoadPlugin:(id)a0;
- (id)migrateAccountWithSettings:(id)a0 pluginID:(id)a1;
- (BOOL)runWithOSVersionDidIncrease:(BOOL)a0;

@end
