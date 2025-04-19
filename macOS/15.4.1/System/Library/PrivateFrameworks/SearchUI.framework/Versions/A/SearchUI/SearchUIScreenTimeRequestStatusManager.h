@class NSMutableDictionary, BPSSink, NSNotificationCenter;

@interface SearchUIScreenTimeRequestStatusManager : NSObject

@property (class, readonly, nonatomic) SearchUIScreenTimeRequestStatusManager *sharedManager;

@property (retain, nonatomic) BPSSink *biomeSink;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSMutableDictionary *requestStatuses;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)addObserver:(id /* block */)a0;
- (void)updateWithEvent:(id)a0;
- (void)setupSink;
- (int)statusForRequestID:(id)a0;

@end
