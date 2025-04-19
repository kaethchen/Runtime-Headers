@class NSString, NSMutableDictionary, NSMutableSet, MFEWSBodyFetchOperation, MFEWSBodyPersistOperation;

@interface MFEWSVisibleBodyFetchTask : MFEWSTask <MFEWSBodyFetchOperationDelegate, MFEWSBodyPersistOperationDelegate> {
    MFEWSBodyFetchOperation *_fetchOperation;
    MFEWSBodyPersistOperation *_persistOperation;
    NSMutableSet *_messagesToFetch;
    NSMutableDictionary *_fetchedBodiesByMessage;
    NSMutableDictionary *_fetchedCalendarEventsByMessage;
}

@property (retain, nonatomic) MFEWSBodyFetchOperation *fetchOperation;
@property (retain, nonatomic) MFEWSBodyPersistOperation *persistOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)operationFinished:(id)a0;
- (void)bodyFetchOperation:(id)a0 didFetchBodiesByMessage:(id)a1 calendarEventsByMessage:(id)a2 missedMessages:(id)a3;
- (void)bodyPersistOperation:(id)a0 didPersistBodyForMessages:(id)a1;
- (void)cacheVisibleMessages:(id)a0;
- (id)initWithAccountName:(id)a0;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;

@end
