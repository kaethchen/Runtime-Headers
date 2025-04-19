@class NSProgress, EDPersistenceDatabaseConnection;

@interface MFLibraryUpgradeStep : NSObject

@property (class, readonly, nonatomic) BOOL recalculateAllConversations;

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, nonatomic) BOOL shouldRecalculateMessageCounts;

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)targetVersion;
- (id)initWithDatabaseConnection:(id)a0;
- (id)_urlStringForMailboxDirectory:(id)a0 account:(id)a1 levelFromAccountDirectory:(unsigned long long)a2;
- (id)adjustSmartMailboxCriterion:(id)a0 adjustmentBlock:(id /* block */)a1;
- (id)mailboxFileSystemPathsByDatabaseURLForAccounts:(id)a0;

@end
