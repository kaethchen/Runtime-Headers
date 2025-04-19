@class NSString, EDPersistenceDatabase, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDInteractionEventLogPersistence : NSObject <EFLoggable, EDInteractionEventLog>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 data:(id)a3;
- (void)_asyncPersistEvent:(id)a0;
- (id)_partialEventForMessage:(id)a0;
- (void)persistEvent:(id)a0;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1;
- (void)persistEvent:(id)a0 dataFromMessage:(id)a1 account:(id)a2;
- (void)persistEvent:(id)a0 date:(id)a1 conversationID:(long long)a2 data:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailbox:(id)a3;
- (void)persistEvent:(id)a0 date:(id)a1 message:(id)a2 mailboxType:(long long)a3;
- (id)recentRecipients;

@end
