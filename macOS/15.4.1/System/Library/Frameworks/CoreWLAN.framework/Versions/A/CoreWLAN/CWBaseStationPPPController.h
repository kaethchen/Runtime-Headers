@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWBaseStationPPPController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_queue> *_pollQueue;
}

@property (copy) NSDictionary *pppStatus;
@property BOOL dialin;

+ (id)PPPController;

- (void)dealloc;
- (id)init;
- (void)connect;
- (void)startPollingPPP;
- (void)hangup;
- (void)poll;
- (id)pollPPPStatus;
- (void)setPollInterval:(double)a0;
- (void)stopPollingPPP;

@end
