@class NSString;
@protocol APMetricReceiving, APMetricNotificationRegister, APMetricNotificationRegisterOwner, APMetricDaemonDeliverer;

@interface APMetricDaemonDelivery : APXPCActionRequester <APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving>

@property (class, retain, nonatomic) id<APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving> daemonDelivery;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<APMetricNotificationRegister, APMetricReceiving> notificationRegistrar;

+ (id)machService;
+ (BOOL)canShareConnection;

- (id)init;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)remoteObjectInterface;
- (void)connectionInvalidated;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (void)receivedMetric:(id)a0;

@end
