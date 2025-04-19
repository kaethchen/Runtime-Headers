@class NSArray, NSDictionary, NSProgress;

@interface MFAddMessageListIDColumnUpgradeStep : MFLibraryUpgradeStep

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSDictionary *mailboxPathsByMailboxURL;
@property (retain, nonatomic) NSProgress *messageProgress;

+ (unsigned long long)targetVersion;

- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0;
- (void)_gatherListIDsSinceDate:(id)a0;
- (id)_listIDHashForMessageLibraryID:(long long)a0 mailboxURL:(id)a1;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
