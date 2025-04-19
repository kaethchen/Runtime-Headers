@class NSTimeZone, NSString, OSActivityStream, NSObject, CSKDevice;
@protocol OS_dispatch_queue;

@interface CSKStreamDeviceSource : CSKStreamSource <OSActivityStreamDelegate>

@property (retain, nonatomic) OSActivityStream *activityStream;
@property (nonatomic) BOOL wantsToStop;
@property (retain, nonatomic) NSTimeZone *systemTimeZone;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *streamQueue;
@property (readonly, nonatomic) CSKDevice *device;
@property (readonly, nonatomic) long long PID;
@property (nonatomic) BOOL includesDebugEntities;
@property (nonatomic) BOOL includesInfoEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)stop;
- (void)streamDidStop:(id)a0;
- (void)streamDidStart:(id)a0;
- (BOOL)activityStream:(id)a0 results:(id)a1;
- (void)streamDidFail:(id)a0 error:(id)a1;
- (void)_failByStoppingActivityStreamFirst;
- (void)_updateStreamPredicates;
- (id)initWithDevice:(id)a0 PID:(long long)a1;

@end
