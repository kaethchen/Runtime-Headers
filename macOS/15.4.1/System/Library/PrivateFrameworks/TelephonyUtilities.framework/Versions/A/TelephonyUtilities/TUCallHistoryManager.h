@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject

@property (readonly, nonatomic) id<TUCallHistoryManagerDataSource> dataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)reportRecentCallForConversation:(id)a0 withStartDate:(id)a1 avMode:(unsigned long long)a2;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithLocalParticipantUUID:(id)a1;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithOutgoingLocalParticipantUUID:(id)a1;

@end
