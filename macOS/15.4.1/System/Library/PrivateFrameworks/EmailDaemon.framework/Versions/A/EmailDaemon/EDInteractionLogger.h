@class NSMutableDictionary, EDMessagePersistence, NSString, NSObject, EDMailboxPersistence;
@protocol OS_dispatch_queue, EDInteractionEventLog;

@interface EDInteractionLogger : NSObject <EDCategoryChangeHookResponder, EDMessageChangeHookResponder, EDMessageDeliveryHookResponder, EMInteractionLoggerInterface>

@property (retain, nonatomic) NSMutableDictionary *_viewedMessages;
@property (retain, nonatomic) NSMutableDictionary *_messageListMessages;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _messageListVisibleRows;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_stateTrackingQueue;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) id<EDInteractionEventLog> _eventLog;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applicationWillSuspend;
- (void)composeFowardStartedForMessage:(id)a0;
- (void)_composeStartedForMessage:(id)a0 eventName:(id)a1;
- (void)_conversationFlagsChanged:(id)a0;
- (void)_logMessageListDisplayEndedForState:(id)a0 now:(id)a1;
- (void)_logMessageListDisplayStartedMessage:(id)a0 now:(id)a1 type:(id)a2 row:(long long)a3 cellStyle:(id)a4;
- (id)_range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 minusRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_stateForMessage:(id)a0 extra:(id)a1 container:(id)a2;
- (void)_viewingEndedForAllMessages;
- (void)applicationLaunched;
- (void)applicationWillResume;
- (void)archivedMessages:(id)a0;
- (void)clickedLinkInMessage:(id)a0 scheme:(id)a1;
- (void)composeReplyStartedForMessage:(id)a0;
- (void)composedMessageSent:(id)a0 account:(id)a1;
- (void)copiedMessages:(id)a0 toMailbox:(id)a1;
- (void)deletedMessages:(id)a0;
- (void)deliveredMessage:(id)a0 account:(id)a1;
- (id)initWithMessagePersistence:(id)a0 mailboxPersistence:(id)a1 eventLogs:(id)a2;
- (void)logEvent:(id)a0 date:(id)a1 data:(id)a2;
- (void)logEvent:(id)a0 date:(id)a1 messageID:(id)a2 data:(id)a3;
- (void)messageListDisplayEndedForAllMessages;
- (void)messageListDisplayEndedForMessage:(id)a0 cellStyle:(id)a1;
- (void)messageListDisplayStartedForMessage:(id)a0 messageListType:(id)a1 row:(long long)a2 cellStyle:(id)a3;
- (void)messageListDisplayVisibleRowsChanged:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)movedMessages:(id)a0 toMailbox:(id)a1;
- (void)movedMessages:(id)a0 toMailboxType:(long long)a1;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void)persistenceWillTransferMessages:(id)a0 transferType:(long long)a1 destinationMailboxURL:(id)a2 userInitiated:(BOOL)a3;
- (void)scrolledToEndOfMessage:(id)a0;
- (void)test_tearDown;
- (void)viewingEndedForMessage:(id)a0;
- (void)viewingStartedForMessage:(id)a0;
- (void)waitForPendingStateChanges;

@end
