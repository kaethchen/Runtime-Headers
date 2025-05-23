@class CNContactStore, NSNotificationCenter, NSData;
@protocol CNScheduler, CNAvatarCacheChangeListenerDelegate;

@interface CNAvatarCacheChangeListener : NSObject

@property (readonly, nonatomic) CNContactStore *store;
@property (readonly, weak, nonatomic) id<CNAvatarCacheChangeListenerDelegate> delegate;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<CNScheduler> rawPreprocessor;
@property (readonly, nonatomic) id<CNScheduler> preprocessor;
@property (copy) NSData *currentHistoryToken;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)databaseChanged:(id)a0;
- (id)initWithContactStore:(id)a0 delegate:(id)a1;
- (void)loadCurrentHistoryToken;
- (id)makeAnalysisTask;
- (id)makeDatabaseChangedTask;
- (id)makeReportingTaskWithIdentifiers:(id)a0;

@end
