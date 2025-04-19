@class NSDictionary;

@interface MFSmartMailboxSpecialMailboxCriteriaAccountUpgradeStep : MFLibraryUpgradeStep

@property (copy, nonatomic) NSDictionary *syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_fixCriteriaWithLegacyAccountURLs:(id)a0;
- (id)_fixV1V2PersistenceAccountURL:(id)a0;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
