@class NSData, PKPaymentWebServiceContext, NSString;
@protocol PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver;

@interface PKSetupAssistantUtilityContext : NSObject <PKPaymentSetupAssistantContextProtocol>

@property (readonly, nonatomic) unsigned long long setupAssistant;
@property (readonly, nonatomic) BOOL isFollowupAction;
@property (readonly, nonatomic) BOOL allowsCachedCardRequirements;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) PKPaymentWebServiceContext *webServiceContext;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (readonly, nonatomic) id<PKPaymentWebServiceArchiver> archiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSetupAssistant:(unsigned long long)a0;

@end
