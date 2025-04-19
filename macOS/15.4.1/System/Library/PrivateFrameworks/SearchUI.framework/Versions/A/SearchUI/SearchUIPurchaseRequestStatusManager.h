@class NSMutableDictionary, BPSSink, NSNotificationCenter;

@interface SearchUIPurchaseRequestStatusManager : NSObject

@property (class, readonly, nonatomic) SearchUIPurchaseRequestStatusManager *sharedManager;

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
