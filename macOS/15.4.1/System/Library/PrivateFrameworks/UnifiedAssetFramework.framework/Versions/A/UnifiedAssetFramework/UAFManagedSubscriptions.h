@interface UAFManagedSubscriptions : NSObject

+ (void)manageXRSubscription:(id)a0 subscribe:(BOOL)a1;
+ (id)_assistantUsageAliasForMode:(long long)a0;
+ (BOOL)_deviceSupportsGenerativeModelSystems;
+ (void)_stageAssetsUponPlatformAssetSetUpdate;
+ (id)createHoldSubscription:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getExistingSubscription:(id)a0 subscriber:(id)a1;
+ (void)manageAssistantSubscription:(id)a0 withMode:(long long)a1;
+ (void)manageGMSSiriLanguageSubscription:(BOOL)a0 language:(id)a1 mode:(long long)a2;
+ (void)manageMorphunSystemLocaleSubscription:(id)a0;
+ (void)manageNLSystemLanguageSubscription:(id)a0;
+ (id)managePlatformSubscription;
+ (void)manageSubscription:(id)a0 subscriber:(id)a1 assetSets:(id)a2 usageAliases:(id)a3 useHold:(BOOL)a4 userInitiated:(BOOL)a5;
+ (void)manageSummarizationKitSubscription;
+ (id)morphunUsagesForLocale:(id)a0;
+ (id)validateUsageAlias:(id)a0 usageAliasValue:(id)a1;

@end
