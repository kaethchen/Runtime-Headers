@class NSMutableDictionary;

@interface SPShortcuts : NSObject {
    NSMutableDictionary *_userShortcutsDictionary;
    BOOL _isShortcutDictChanged;
}

+ (id)pathToShortcuts;
+ (id)defaultShortcuts;
+ (id)deprecatedPathWithComponent:(id)a0;
+ (id)pathWithComponent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)URLStringForUserShortcut:(id)a0;
- (void)deleteMigrationFile;
- (id)dictionaryForUserShortcut:(id)a0;
- (void)dumpShortcuts;
- (void)migrateShortcuts;
- (BOOL)needsShortcutsMigration;
- (void)rememberForUniqueIdentifier:(id)a0 forUserShortcut:(id)a1 date:(id)a2 forceReload:(BOOL)a3;
- (void)rememberResult:(id)a0 forUserShortcut:(id)a1 isAdvancedQuery:(BOOL)a2;
- (void)removeShortcutsResultForShortcutString:(id)a0;
- (id)resultForUserShortcut:(id)a0;
- (BOOL)validateShortCutsLocked;

@end
