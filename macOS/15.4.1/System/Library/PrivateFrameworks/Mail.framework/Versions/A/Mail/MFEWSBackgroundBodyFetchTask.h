@class NSString, NSMutableDictionary, NSMutableSet, MFEWSBodyFetchOperation, MFEWSGetMessagesNeedingBodiesOperation, MFEWSBodyPersistOperation;

@interface MFEWSBackgroundBodyFetchTask : MFEWSTask <MFEWSBodyFetchOperationDelegate, MFEWSBodyPersistOperationDelegate, MFEWSGetMessagesNeedingBodiesOperationDelegate> {
    NSMutableSet *_mailboxesNeedingChecking;
    NSMutableSet *_mandatoryMessagesNeedingBodies;
    NSMutableSet *_discretionaryMessagesNeedingBodies;
    NSMutableDictionary *_fetchedBodiesByMessage;
    NSMutableDictionary *_fetchedCalendarEventsByMessage;
    MFEWSGetMessagesNeedingBodiesOperation *_getMessagesNeedingBodiesOperation;
    MFEWSBodyFetchOperation *_mandatoryBodyFetchOperation;
    MFEWSBodyFetchOperation *_discretionaryBodyFetchOperation;
    MFEWSBodyPersistOperation *_bodyPersistOperation;
}

@property (retain, nonatomic) MFEWSGetMessagesNeedingBodiesOperation *getMessagesNeedingBodiesOperation;
@property (retain, nonatomic) MFEWSBodyFetchOperation *mandatoryBodyFetchOperation;
@property (retain, nonatomic) MFEWSBodyFetchOperation *discretionaryBodyFetchOperation;
@property (retain, nonatomic) MFEWSBodyPersistOperation *bodyPersistOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)operationFinished:(id)a0;
- (void)bodyFetchOperation:(id)a0 didFetchBodiesByMessage:(id)a1 calendarEventsByMessage:(id)a2 missedMessages:(id)a3;
- (void)bodyPersistOperation:(id)a0 didPersistBodyForMessages:(id)a1;
- (void)fetchBodiesForMailboxes:(id)a0;
- (void)getMessagesNeedingBodiesOperation:(id)a0 didGetMessagesNeedingBodies:(id)a1 forMailbox:(id)a2;
- (id)initWithAccountName:(id)a0;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;

@end
