@class NSArray;

@interface MFReparseInvalidInReplyToHeadersUpgradeStep : MFLibraryUpgradeStep

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (unsigned long long)targetVersion;

- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0;
- (id)_referencesAsEncodedMessageIDStringFromMessageHeaders:(id)a0;
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)a0;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
