@class MFMailbox, NSString, NSObject;
@protocol OS_os_log;

@interface MFBackupManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) MFMailbox *topLevelRecoveryMailbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_dataForReconstructedMessageForURL:(id)a0;
- (id)_recoveryMailboxWithSuggestedName:(id)a0 reuseMailbox:(BOOL)a1;
- (BOOL)_restoreMailboxAtURL:(id)a0 intoMailbox:(id)a1 newMessages:(id)a2;
- (void)_setupDefaultTopLevelRecoveryMailbox;
- (id)restoreMailboxAtURL:(id)a0 intoMailboxNamed:(id)a1;
- (BOOL)restoreMailboxesAtURL:(id)a0 intoMailbox:(id)a1 restoredMessages:(id)a2;
- (id)restoreMessagesAtPaths:(id)a0 intoMailboxNamed:(id)a1 reuseMailbox:(BOOL)a2 createdMailboxNamed:(id *)a3;

@end
