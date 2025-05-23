@class HDNanoSyncStore, NSUUID, NSCalendar, _HKExpiringCompletionTimer, NSDate, NSMutableArray;

@interface HDNanoSyncRestoreSession : NSObject {
    NSMutableArray *_completionHandlers;
    _HKExpiringCompletionTimer *_timer;
}

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) long long sequenceNumber;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)finishWithError:(id)a0;
- (id)initWithSyncStore:(id)a0 sessionUUID:(id)a1;
- (void)scheduleTimeoutWithInterval:(double)a0 handler:(id /* block */)a1;

@end
