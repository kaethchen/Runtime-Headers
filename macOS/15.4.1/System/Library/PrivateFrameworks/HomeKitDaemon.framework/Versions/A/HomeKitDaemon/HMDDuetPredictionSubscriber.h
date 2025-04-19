@class HMFMessageDispatcher, NSObject;
@protocol OS_dispatch_queue, HMDarwinNotificationProvider, HMDDuetPredictionSubscriberDataSource;

@interface HMDDuetPredictionSubscriber : HMFObject

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property int duetPredictionsChangedNotificationToken;
@property (weak) id<HMDDuetPredictionSubscriberDataSource> dataSource;

- (void)dealloc;
- (void).cxx_destruct;
- (void)configure;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 darwinNotificationProvider:(id)a2;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1;

@end
