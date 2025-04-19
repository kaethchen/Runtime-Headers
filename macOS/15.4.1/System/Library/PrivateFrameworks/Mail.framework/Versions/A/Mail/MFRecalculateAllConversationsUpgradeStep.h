@interface MFRecalculateAllConversationsUpgradeStep : MFLibraryUpgradeStep

+ (unsigned long long)targetVersion;
+ (BOOL)recalculateAllConversations;

- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
