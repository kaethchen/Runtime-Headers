@class NSArray;

@interface MFReparseReferenceHeadersUpgradeStep : MFLibraryUpgradeStep

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)a0;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
