@class CUTPromise;

@interface CUTReporting : NSObject

@property (retain, nonatomic) CUTPromise *promise;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } promiseLock;

+ (id)RTCSessionPromiseWithBatchingInterval:(double)a0;
+ (id)_rtcReportingSession;
+ (id)reportingSession;
+ (void)startRTCReportingSessionWithCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_RTCSessionPromiseWithBatchingInterval:(double)a0;
- (void)_beginPromiseTimeoutWithInterval:(long long)a0;
- (void)_failSeal:(id)a0 withError:(id)a1;
- (void)_fullfillSeal:(id)a0 withSession:(id)a1;
- (void)_startConfigurationOfSession:(id)a0 withPromiseSeal:(id)a1;

@end
