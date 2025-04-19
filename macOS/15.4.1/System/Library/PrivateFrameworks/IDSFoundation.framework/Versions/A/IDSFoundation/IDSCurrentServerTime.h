@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_storeInitialServerTimeIfNeeded;
- (void)_refreshServerTime;
- (double)_refreshTimeInterval;
- (void)_storeCurrentTime;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;
- (id)initWithServerTimeProvider:(id)a0;

@end
