@interface BMLibraryStreamsPruner : NSObject

+ (unsigned long long)domain;
+ (void)pruneWithDeletedContactIdentifiers:(id)a0;
+ (void)pruneWithDeletedIntentGroupIdentifiers:(id)a0 bundleId:(id)a1;
+ (void)pruneWithDeletedIntentIdentifiers:(id)a0 bundleId:(id)a1;
+ (void)pruneForResetKeyboardDictionary;
+ (void)_enumerateAllPruningTriggersForPolicy:(id)a0 block:(id /* block */)a1;
+ (void)_pruneStream:(id)a0 policy:(id)a1 trigger:(id)a2 parameters:(id)a3;
+ (void)_pruneStreamsWithPolicy:(id)a0 parameters:(id)a1;
+ (void)pruneForResetPrivacyAndLocationWarnings;
+ (void)pruneLearnFromThisAppDisabled:(id)a0;
+ (void)pruneSiriAndDictationHistory;
+ (void)pruneSiriDisabled;
+ (void)pruneWithInstalledApplications:(id)a0 installedAppExtensions:(id)a1;
+ (void)pruneWithUninstalledBundleIdentifier:(id)a0;

@end
