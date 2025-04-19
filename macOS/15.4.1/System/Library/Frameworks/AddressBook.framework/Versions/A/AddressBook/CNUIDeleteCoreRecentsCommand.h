@class CNContact, NSArray, NSObject, CNUICoreRecentsManager;
@protocol OS_os_log;

@interface CNUIDeleteCoreRecentsCommand : ABBookUndoableCommand

@property (readonly) CNContact *contact;
@property (readonly) CNUICoreRecentsManager *manager;
@property (readonly) NSObject<OS_os_log> *log;
@property (copy) NSArray *recentContacts;

+ (id)log;
+ (id)commandsToDeleteCoreRecentsForContacts:(id)a0;

- (void).cxx_destruct;
- (void)execute;
- (void)executeRedo;
- (void)executeUndo;
- (void)_logFetchError:(id)a0;
- (void)_logDeleteError:(id)a0;
- (void)_logFetchedRecents;
- (void)_logRestoreError:(id)a0;
- (void)deleteRecentContacts;
- (void)fetchRecentContacts;
- (id)initWithContact:(id)a0 manager:(id)a1;
- (void)removeRecentContactIDs;
- (void)restoreRecentContacts;

@end
