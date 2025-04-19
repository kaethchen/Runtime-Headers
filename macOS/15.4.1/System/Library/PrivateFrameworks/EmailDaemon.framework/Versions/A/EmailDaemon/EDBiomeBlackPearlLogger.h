@class BMSQLDatabase, NSString, BMSource, BMStream, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface EDBiomeBlackPearlLogger : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BMStream *stream;
@property (retain, nonatomic) BMSource *source;
@property (retain, nonatomic) BMSQLDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_biomeCategoryValueFrom:(long long)a0;
- (int)_biomeDomainValueFrom:(long long)a0;
- (int)_biomeFedStatsCategoryValueFrom:(unsigned long long)a0;
- (int)_biomeMailboxValueFrom:(long long)a0;
- (int)_biomeRecategorizationScopeValueFrom:(long long)a0;
- (id)_constructBiomeMessageGrainQuery:(id)a0 andStartTS:(id)a1 andEndTS:(id)a2 andBPEnabledAccounts:(id)a3;
- (id)_domainStringFrom:(long long)a0;
- (void)_donateToBiomeWithEvent:(id)a0;
- (void)deleteEventsForAccountIDs:(id)a0;
- (void)deleteEventsForMessages:(id)a0;
- (id)initWithStreamType:(unsigned long long)a0;
- (void)logReadEventForMessageID:(id)a0 messageDictionary:(id)a1;
- (void)logRecategorizationEventForMessageID:(id)a0 messageDictionary:(id)a1;
- (void)logRecategorizationFedStatsForMessage:(id)a0;
- (void)logReceiveEventForMessageID:(id)a0 messageDictionary:(id)a1;
- (id)queryAllEventsForMessageID:(id)a0 andEventType:(id)a1;
- (id)queryMessageGrainEvents:(id)a0 startingAt:(id)a1 endingAt:(id)a2 andBPEnabledAccounts:(id)a3;

@end
