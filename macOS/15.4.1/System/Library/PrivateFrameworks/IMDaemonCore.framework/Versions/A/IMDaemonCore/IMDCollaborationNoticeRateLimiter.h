@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (long long)commentThreshold;
+ (long long)defaultThreshold;
+ (id)loadNoticeEventHistory;
+ (long long)participantChangeThreshold;
+ (id)peristencePath;

- (id)init;
- (void).cxx_destruct;
- (id)dateLastUpdatedForURL:(id)a0;
- (void)didSendNotice:(id)a0;
- (void)saveNoticeEventHistory;
- (BOOL)shouldSendNotice:(id)a0;
- (long long)thresholdForNoticeType:(long long)a0;

@end
