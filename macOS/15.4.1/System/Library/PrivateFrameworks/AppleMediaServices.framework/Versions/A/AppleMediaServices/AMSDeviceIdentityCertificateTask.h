@class NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSDeviceIdentityCertificateTask : AMSTask

@property (readonly) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (id)performDeviceIdentityRequestForAbsinthe;
- (id)performDeviceIdentityRequestForFraudReport;
- (id)performDeviceIdentityRequestWithBaaOptions:(id)a0 ttlBagKey:(id)a1 logInformation:(id)a2;

@end
