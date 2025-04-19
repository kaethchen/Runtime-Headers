@class NSString, IMAPMailboxSyncState, IMAPConnection, IMAPTask, IMAPTaskManager;

@interface IMAPNetworkTaskHandler : MCTaskHandler <IMAPConnectionResponseDelegate> {
    id _connectionLock;
    IMAPConnection *_connection;
    id _selectedMailboxLock;
    NSString *_currentMailboxName;
}

@property (retain) IMAPConnection *connection;
@property (retain, nonatomic) IMAPMailboxSyncState *syncState;
@property (nonatomic) BOOL isSelected;
@property (readonly, copy) NSString *currentMailboxName;
@property (readonly) BOOL isIdle;
@property (readonly) BOOL canStartIdle;
@property (weak, nonatomic) IMAPTask *lastTaskSource;
@property (nonatomic) BOOL trackSyncState;
@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)operation;
- (long long)priority;
- (void)setOperation:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)qualityOfService;
- (id)serializationQueue;
- (id)initWithConnection:(id)a0 taskManager:(id)a1;
- (void)_closeConnectionAndCompact:(BOOL)a0 allowNetworking:(BOOL)a1;
- (void)_finishIdling;
- (void)connection:(id)a0 receivedExists:(unsigned long long)a1 forMailbox:(id)a2;
- (void)connection:(id)a0 receivedFetchResponse:(id)a1 forMailbox:(id)a2;
- (void)connection:(id)a0 receivedUnhandledUntaggedResponse:(id)a1 forMailbox:(id)a2 forCommand:(id)a3;
- (BOOL)connection:(id)a0 shouldProcessUnsolicitedResponse:(id)a1;
- (BOOL)isSelectedOnMailbox:(id)a0;
- (id)newCleanUpOperation;
- (void)selectedMailboxChangedToMailbox:(id)a0 fromMailbox:(id)a1;
- (id)serverInterfaceForMailbox:(id)a0 error:(id *)a1;

@end
