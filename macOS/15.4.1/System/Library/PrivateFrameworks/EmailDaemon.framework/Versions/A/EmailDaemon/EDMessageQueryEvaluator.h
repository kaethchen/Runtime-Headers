@class EMQuery, EDMessagePersistence, EMMailboxScope, NSPredicate, NSObject, NSString;
@protocol OS_os_log;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMQuery *messageQuery;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)filterMessages:(id)a0 unmatchedMessages:(id *)a1;
- (id)initWithQuery:(id)a0 messagePersistence:(id)a1;
- (id)transformAndFilterMessages:(id)a0;
- (id)transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1;
- (id)transformMessages:(id)a0;
- (id)transformMessages:(id)a0 includeDeleted:(BOOL)a1;

@end
