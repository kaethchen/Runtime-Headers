@class NSString, NSObject;
@protocol OS_os_log;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statistics;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)a0 createIfNecessary:(BOOL)a1;
- (BOOL)mailboxURLIsGmailLabel:(id)a0;
- (id)mailboxesFromLegacyMailboxes:(id)a0;
- (void)recordFrecencyEventWithMailboxesWithIDs:(id)a0;
- (void)testRecordFrecencyEventsForAllMailboxes;
- (void)testResetFrecencyForAllMailboxes;

@end
